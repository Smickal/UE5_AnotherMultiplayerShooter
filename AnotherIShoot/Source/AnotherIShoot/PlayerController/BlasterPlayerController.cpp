// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterPlayerController.h"

#include "AnotherIShoot/BlasterComponent/CombatComponent.h"
#include "AnotherIShoot/BlasterTypes/AnnouncementData.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/HUD/BlasterHUD.h"
#include "AnotherIShoot/HUD/CharacterOverlay.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "AnotherIShoot/Gamemode/BlasterGameMode.h"
#include "AnotherIShoot/GameState/BlasterGameState.h"
#include "AnotherIShoot/HUD/Announcement.h"
#include "AnotherIShoot/HUD/ReturnToMainMenu.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "AnotherIShoot/BlasterTypes//AnnouncementData.h"


void ABlasterPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABlasterPlayerController, MatchState);
	DOREPLIFETIME(ABlasterPlayerController, isShowingTeamScore);
	DOREPLIFETIME(ABlasterPlayerController, bIsLobby);
	
}


void ABlasterPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	BlasterHUD = Cast<ABlasterHUD>(GetHUD());
	Server_CheckMatchState();
	
}

void ABlasterPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	SetHudCountdownTime();

	CheckTimeSync(DeltaSeconds);
	PollInit();

	CheckPing(DeltaSeconds);
}

void ABlasterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if(InputComponent == nullptr )return;

	InputComponent->BindAction("Quit", IE_Pressed, this, &ABlasterPlayerController::ShowReturnToMainMenu);
}


void ABlasterPlayerController::PollInit()
{
	if(CharacterOverlay == nullptr)
	{
		if(BlasterHUD && BlasterHUD->CharacterOverlay)
		{
			CharacterOverlay = BlasterHUD->CharacterOverlay;
			if(CharacterOverlay)
			{
				if(bInitializeCharacterHealth) SetHUDHealth(HUDHealth, HUDMaxHealth);
				if(bInitializeCharacterShield) SetHUDShield(HUDShield, HUDMaxShield);
				if(bInitializeCharacterScore) SetHUDScore(HUDScore);
				if(bInitializeCharacterDefeats) SetHUDDefeatsByAndAmount("", HUDDefeats);
				if(bInitializeCarriedAmmo) SetHUDCarriedAmmo(HUDCarriedAmmo);
				if(bInitializeHUDWepAmmo) SetHUDWeaponAmmo(HUDWeapAmmo);
				if(bInitializeHUDTextureAmmo) SetHUDWeaponType(HUDWeaponName, HUDWeaponTypeTexture);
				if(bInitializeHUDTeamText) SetHUDTeam(HUDTeam);

				ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(GetPawn());
				if(BlasterCharacter && BlasterCharacter->GetCombatComponent())
				{
					SetHUDGrenade(BlasterCharacter->GetCombatComponent()->GetGrenades());
				}

				ShowPlayerOverHead();
			}
		}
	}
}



void ABlasterPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(InPawn);
	if(BlasterCharacter)
	{
		SetHUDHealth(BlasterCharacter->GetCurrentHealth(), BlasterCharacter->GetMaxHealth());

		if(PauseMenuInGameWidget)
		{
			CreatePauseMenuHUD();
		}
		

		FInputModeGameOnly InputMode;
		SetInputMode(InputMode);
	}
}


void ABlasterPlayerController::CheckPing(float DeltaSeconds)
{
	HighPingRunningTime += DeltaSeconds;
	if(HighPingRunningTime >= CheckPingFrequency)
	{
		//Checks The Ping Condition.
		//PlayerState = PlayerState == nullptr ? GetPlayerState<ABlasterPlayerController>() : PlayerState;
		if(PlayerState)
		{
			//UE_LOG(LogTemp, Warning, TEXT("%d"), PlayerState->GetCompressedPing() * 4);
			if( PlayerState->GetCompressedPing() * 4 > HighPingThreshold) // ping is compressed, that is why it's timed by 4
			{
				HighPingWarning();
				PingAnimationRunningTime = 0.f;
				Server_ReportPingStatus(true);
			}
			else
			{
				Server_ReportPingStatus(false);
			}
		}

		HighPingRunningTime =0.f;
	}
	bool bHighPingAnimationPlaying = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
		BlasterHUD->CharacterOverlay->HighPingAnimation &&
		BlasterHUD->CharacterOverlay->IsAnimationPlaying(BlasterHUD->CharacterOverlay->HighPingAnimation);
	
	if(bHighPingAnimationPlaying)
	{
		PingAnimationRunningTime += DeltaSeconds;
		if(PingAnimationRunningTime >= HighPingDuration)
		{
			StopHighPingWarning();
		}
	}
}

void ABlasterPlayerController::Server_ReportPingStatus_Implementation(bool bHighPing)
{
	HighPingDelegate.Broadcast(bHighPing);
}

void ABlasterPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();

	if(IsLocalController())
	{
		Server_RequestServerTime(GetWorld()->GetTimeSeconds());
	}
}




//MatchState
void ABlasterPlayerController::OnMatchStateSet(FName State, bool bTeamsMatch)
{
	MatchState = State;
	
	if(MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted(bTeamsMatch);
		
	}
	else if(MatchState == MatchState::Cooldown)
	{
		HandleCooldownHasStarted();
	}

	HandleShowTeamScoreHUD(bTeamsMatch);
}
//OnRep_ MatchState
void ABlasterPlayerController::OnRep_MatchState()
{
	if(MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted();
	}
	else if(MatchState == MatchState::Cooldown)
	{
		HandleCooldownHasStarted();
	}
}


void ABlasterPlayerController::HandleMatchHasStarted(bool bTeamsMatch)
{

	BlasterHUD = BlasterHUD == nullptr ?  Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	if(BlasterHUD)
	{
		
		//Add CharacterHUD
		if(BlasterHUD->CharacterOverlay == nullptr) BlasterHUD->AddCharacterOverlay();

		//Hide AnnouncementHUd
		if(BlasterHUD->Annoucement)
		{
			BlasterHUD->Annoucement->SetVisibility(ESlateVisibility::Hidden);
		}

		if(BlasterHUD->CharacterOverlay->MatchCountdownText)
		{
			BlasterHUD->CharacterOverlay->PlayBlinkAnimation(false);
		}
		
		
		// if(!HasAuthority() && isShowingTeamScore != 1)
		// {
		// 	HideTeamScore();
		// }
		// else
		// {
		// 	if(isShowingTeamScore)
		// 	{
		// 		InitTeamScore();
		// 	}
		// 	else
		// 	{
		// 		HideTeamScore();
		// 	}
		// }

		
	}
}

void ABlasterPlayerController::HandleCooldownHasStarted()
{
	BlasterHUD = BlasterHUD == nullptr ?  Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	if(BlasterHUD)
	{
		//Set Announcemen HUD
		if(BlasterHUD->Annoucement)
		{
			BlasterHUD->Annoucement->SetVisibility(ESlateVisibility::Visible);
			
			if(BlasterHUD->Annoucement->AnnouncementText)
			{
				FString AnnouncementText = Announcement::NewMatchStartsIn;
				BlasterHUD->Annoucement->AnnouncementText->SetText(FText::FromString(AnnouncementText));
			}

			ABlasterGameState* GameState = Cast<ABlasterGameState>( UGameplayStatics::GetGameState(this));
			ABlasterPlayerState* BlasterPlayerState = GetPlayerState<ABlasterPlayerState>();
			
			if(BlasterHUD->Annoucement->InfoText && GameState && BlasterPlayerState)
			{
				TArray<ABlasterPlayerState*> TopPlayers = GameState->TopScoringPlayer;
				FString InfoTextString = isShowingTeamScore == 1 ? GetTeamsInfoText(GameState) : GetInfoText(TopPlayers);
				
				
				BlasterHUD->Annoucement->InfoText->SetText(FText::FromString(InfoTextString));	
			}
		}
	
		if(BlasterHUD->CharacterOverlayClass)
		{
			BlasterHUD->CharacterOverlay->RemoveFromParent();
		}
	}

	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(GetPawn());
	if(BlasterCharacter && BlasterCharacter->GetCombatComponent())
	{
		BlasterCharacter->bDisableGameplay = true;
		BlasterCharacter->GetCombatComponent()->FireButtonPressed(false);
	}
}

void ABlasterPlayerController::HandleShowTeamScoreHUD(bool bTeamsMatch)
{
	if(HasAuthority())
	{
		isShowingTeamScore = bTeamsMatch ? 1 : 0;
		UE_LOG(LogTemp, Warning, TEXT("Autority : %d"),isShowingTeamScore);
	}
}

void ABlasterPlayerController::OnRep_ShowTeamScore()
{
	if(isShowingTeamScore)
	{
		InitTeamScore();
	}
	else
	{
		HideTeamScore();
	}
}

FString ABlasterPlayerController::GetInfoText(const TArray<ABlasterPlayerState*>& Players)
{
	FString InfoTextString;
	ABlasterPlayerState* BlasterPlayerState = GetPlayerState<ABlasterPlayerState>();
	if(BlasterPlayerState == nullptr) return  FString();

	
	if(Players.Num() == 0)
	{
		InfoTextString = Announcement::ThereIsNoWinner;
	}
	else if(Players.Num() == 1 && Players[0] == BlasterPlayerState)
	{
		InfoTextString = Announcement::YouAreTheWinner;
	}
	else if(Players.Num() == 1)
	{
		InfoTextString = FString::Printf(TEXT("Winner: \n%s"), *Players[0]->GetPlayerName());
	}
	else if(Players.Num() > 1)
	{
		InfoTextString = Announcement::PlayersTieForTheWin;
		for(auto TiedPlayer : Players)
		{
			InfoTextString.Append(FString::Printf(TEXT("%s\n"), *TiedPlayer->GetPlayerName()));
		}
	}

	return InfoTextString;
}

FString ABlasterPlayerController::GetTeamsInfoText(ABlasterGameState* BlasterGameState)
{
	if(BlasterGameState == nullptr)
	{
		return  FString();
	}
	FString InfoTextString;
	const int32 RedTeamScore = BlasterGameState->RedTeamScore;
	const int32 BlueteamScore = BlasterGameState->BlueTeamScore;

	if(RedTeamScore == 0 && BlueteamScore == 0 )
	{
		InfoTextString = Announcement::ThereIsNoWinner;
	}
	else if(RedTeamScore == BlueteamScore)
	{
		InfoTextString = FString::Printf(TEXT("%s"), *Announcement::TeamsTiedForTheWin);
		InfoTextString.Append(Announcement::RedTeam);
		InfoTextString.Append(TEXT(" & "));
		InfoTextString.Append(Announcement::BlueTeam);
		InfoTextString.Append(TEXT("\n"));
	}
	else if(RedTeamScore > BlueteamScore)
	{
		InfoTextString = Announcement::RedTeamWins;
		InfoTextString.Append(TEXT("\n"));
		InfoTextString.Append(FString::Printf(TEXT("%s : %d \n"), *Announcement::RedTeam, RedTeamScore));
		InfoTextString.Append(FString::Printf(TEXT("%s : %d \n"), *Announcement::BlueTeam, BlueteamScore));
	}
	else if(BlueteamScore > RedTeamScore)
	{
		InfoTextString = Announcement::BlueTeamWins;
		InfoTextString.Append(TEXT("\n"));
		InfoTextString.Append(FString::Printf(TEXT("%s : %d \n"), *Announcement::BlueTeam, BlueteamScore));
		InfoTextString.Append(FString::Printf(TEXT("%s : %d \n"), *Announcement::RedTeam, RedTeamScore));
	}

	return InfoTextString;
}

void ABlasterPlayerController::CheckTimeSync(float DeltaSeconds)
{
	TimeSyncRunningTime += DeltaSeconds;
	if(IsLocalController() && TimeSyncRunningTime >= TimeSyncFrequency)
	{
		Server_RequestServerTime(GetWorld()->GetTimeSeconds());
		TimeSyncRunningTime = 0.f;
	}
}


void ABlasterPlayerController::SetHUDHealth(float CurrHealth, float MaxHealth)
{
	BlasterHUD = BlasterHUD == nullptr ?  Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;

	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->HealthBar &&
				BlasterHUD->CharacterOverlay->HealthText;
	if(bHudValid)
	{
		const float HealthPercent = CurrHealth / MaxHealth;
		BlasterHUD->CharacterOverlay->HealthBar->SetPercent(HealthPercent);

		FString healthText = FString::Printf(TEXT("%d/%d"),FMath::CeilToInt(CurrHealth),FMath::CeilToInt(MaxHealth));
		BlasterHUD->CharacterOverlay->HealthText->SetText(FText::FromString(healthText));
	}
	else
	{
		bInitializeCharacterHealth = true;
		HUDHealth = CurrHealth;
		HUDMaxHealth = MaxHealth;
	}
	
}

void ABlasterPlayerController::SetHUDShield(float CurrShield, float MaxShield)
{
	BlasterHUD = BlasterHUD == nullptr ?  Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;

	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->ShieldBar &&
				BlasterHUD->CharacterOverlay->ShieldText;
	if(bHudValid)
	{
		const float ShieldPercent = CurrShield / MaxShield;
		BlasterHUD->CharacterOverlay->ShieldBar->SetPercent(ShieldPercent);

		//UE_LOG(LogTemp, Warning, TEXT("%d/%d"),FMath::CeilToInt(CurrShield),FMath::CeilToInt(MaxShield));
			
		FString ShieldText = FString::Printf(TEXT("%d/%d"),FMath::CeilToInt(CurrShield),FMath::CeilToInt(MaxShield));
		BlasterHUD->CharacterOverlay->ShieldText->SetText(FText::FromString(ShieldText));
	}
	else
	{
		bInitializeCharacterShield = true;
		HUDShield = CurrShield;
		HUDMaxShield = MaxShield;
	}
}

void ABlasterPlayerController::SetHUDScore(float Score)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->ScoreAmount;
	if(bHudValid)
	{
		FString ScoreText = FString::Printf(TEXT("%d"), FMath::CeilToInt(Score));
		BlasterHUD->CharacterOverlay->ScoreAmount->SetText(FText::FromString(ScoreText));
	}
	else
	{
		bInitializeCharacterScore = true;
		HUDScore = Score;

	}
}

void ABlasterPlayerController::HideTeamScore()
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->RedTeamScore &&
				BlasterHUD->CharacterOverlay->BlueTeamScore &&
					BlasterHUD->CharacterOverlay->ScoreSpacerText;

	if(!HasAuthority() && IsLocalPlayerController())
	{
		UE_LOG(LogTemp, Warning, TEXT("Local Client Hides Score HUD"));
	}
	
	if(bHudValid)
	{
		BlasterHUD->CharacterOverlay->RedTeamScore->SetText(FText());
		BlasterHUD->CharacterOverlay->BlueTeamScore->SetText(FText());
		BlasterHUD->CharacterOverlay->ScoreSpacerText->SetText(FText());
	}
}

void ABlasterPlayerController::InitTeamScore()
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->RedTeamScore &&
				BlasterHUD->CharacterOverlay->BlueTeamScore &&
					BlasterHUD->CharacterOverlay->ScoreSpacerText;
	if(bHudValid)
	{
		FString Zero("0");
		FString Spacer("|");
		
		BlasterHUD->CharacterOverlay->RedTeamScore->SetText(FText::FromString(Zero));
		BlasterHUD->CharacterOverlay->BlueTeamScore->SetText(FText::FromString(Zero));
		BlasterHUD->CharacterOverlay->ScoreSpacerText->SetText(FText::FromString(Spacer));
	}
}

void ABlasterPlayerController::SetHudRedTeamScore(int32 RedScore)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->RedTeamScore;
	if(bHudValid)
	{
		FString ScoreText = FString::Printf(TEXT("%d"), RedScore);
		
		BlasterHUD->CharacterOverlay->RedTeamScore->SetText(FText::FromString(ScoreText));
	}
}

void ABlasterPlayerController::SetHudBlueTeamScore(int32 BlueScore)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
				BlasterHUD->CharacterOverlay->BlueTeamScore;
	if(bHudValid)
	{
		FString ScoreText(FString::Printf(TEXT("%d"), BlueScore));
		
		BlasterHUD->CharacterOverlay->BlueTeamScore->SetText(FText::FromString(ScoreText));
	}
}

void ABlasterPlayerController::SetHUDDefeatsByAndAmount(FString AttackerName, int Defeats)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->DefeatsAmount &&
				BlasterHUD->CharacterOverlay->EliminatedText;
	if(bHudValid)
	{
		//Set Eliminated by Text
		if(AttackerName.Len() != 0)
		{
			ActivateEliminatedOverlay(true);
			
			FString AttackerText = FString::Printf(TEXT("You Were Eliminated By %s!"), *AttackerName);
			BlasterHUD->CharacterOverlay->EliminatedText->SetText(FText::FromString(AttackerText));
		}
		else
		{
			BlasterHUD->CharacterOverlay->EliminatedText->SetText(FText::FromString(""));
		}
		
		//Set Defeat Text
		FString DefeatsText= FString::Printf(TEXT("%d"), Defeats);
		BlasterHUD->CharacterOverlay->DefeatsAmount->SetText(FText::FromString(DefeatsText));
	}
	else
	{
		bInitializeCharacterDefeats = true;
		HUDDefeats = Defeats;
	}
}

void ABlasterPlayerController::ActivateEliminatedOverlay(bool bActivated)
{
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
				BlasterHUD->CharacterOverlay->EliminatedText;

	if(bHudValid)
	{
		if(bActivated)
		{
			BlasterHUD->CharacterOverlay->EliminatedText->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			BlasterHUD->CharacterOverlay->EliminatedText->SetText(FText::FromString(TEXT("")));			
		}
	}
}

void ABlasterPlayerController::SetHUDWeaponAmmo(int32 Ammo)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->WeaponAmmoAmount;
	if(bHudValid)
	{
		FString AmmoText = FString::Printf(TEXT("%d"), Ammo);
		//UE_LOG(LogTemp, Warning, TEXT("Weapon Ammo: %d"), Ammo);
		BlasterHUD->CharacterOverlay->WeaponAmmoAmount->SetText(FText::FromString(AmmoText));
	}
	else
	{
		bInitializeHUDWepAmmo = true;
		HUDWeapAmmo = Ammo;
	}
}

void ABlasterPlayerController::SetHUDCarriedAmmo(int32 Ammo)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->CarriedAmmoAmount;
	if(bHudValid)
	{
		FString AmmoText = FString::Printf(TEXT("%d"), Ammo);
		BlasterHUD->CharacterOverlay->CarriedAmmoAmount->SetText(FText::FromString(AmmoText));
	}
	else
	{
		bInitializeCarriedAmmo = true;
		HUDCarriedAmmo = Ammo;
	}
}

void ABlasterPlayerController::SetHUDWeaponType(FString WeaponName, UTexture2D* WeaponTexture)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->WeaponTypeImage &&
				BlasterHUD->CharacterOverlay->WeaponTypeText;
	if(bHudValid)
	{
		BlasterHUD->CharacterOverlay->WeaponTypeText->SetText(FText::FromString(WeaponName));
		if(WeaponTexture != nullptr)
		{
			BlasterHUD->CharacterOverlay->WeaponTypeImage->SetBrushFromTexture(WeaponTexture);
		}
		else
		{
			BlasterHUD->CharacterOverlay->DisableImage();
		}
	}
	else
	{
		bInitializeHUDTextureAmmo = true;
		HUDWeaponTypeTexture = WeaponTexture;
		HUDWeaponName = WeaponName;
	}
}

void ABlasterPlayerController::SetHUDGrenade(int32 Grenade)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->GrenadeText;

	if(bHudValid)
	{
		FString GrenadeText = FString::Printf(TEXT("%d"),Grenade);
		BlasterHUD->CharacterOverlay->GrenadeText->SetText(FText::FromString(GrenadeText));
	}
	else
	{
		HUDGrenades = Grenade;
	}
}

void ABlasterPlayerController::SetHUDTeam(ETeam TeamToSet)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->TeamText;
	if(bHudValid)
	{
		// if(!HasAuthority() && GetPawn()->IsLocallyControlled())
		// {
		// 	UE_LOG(LogTemp, Warning, TEXT("%s --> Team: %s"),
		// 		*GetPlayerState<ABlasterPlayerState>()->GetPlayerName()
		// 		,*UEnum::GetValueAsString(TeamToSet));
		// }
		
		FSlateColor TextColor = FColor::White;
		switch (TeamToSet) {
		case ETeam::ET_RedTeam:
				BlasterHUD->CharacterOverlay->TeamText->SetText(FText::FromString("Red Team"));
				TextColor = FColor::Red;
				BlasterHUD->CharacterOverlay->TeamText->SetColorAndOpacity(TextColor);
				InitTeamScore();
				break;
			case ETeam::ET_BlueTeam:
				BlasterHUD->CharacterOverlay->TeamText->SetText(FText::FromString("Blue Team"));
				TextColor = FColor::Blue;
				BlasterHUD->CharacterOverlay->TeamText->SetColorAndOpacity(TextColor);
				InitTeamScore();
				break;
				
			case ETeam::ET_NoTeam:
				BlasterHUD->CharacterOverlay->TeamText->SetText(FText::FromString(""));
				HideTeamScore();
				break;
			case ETeam::ET_MAX:
				break;
		}
	}
	else
	{
		HUDTeam = TeamToSet;
		bInitializeHUDTeamText = true;
	}
}

void ABlasterPlayerController::SetHUDPauseGame(bool bIsActivated)
{
	if(bIsActivated)
	{
		CreatePauseMenuHUD();
		PauseHUD->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		PauseHUD->RemoveFromParent();
	}
}

void ABlasterPlayerController::SetHUDSettingMainMenu(bool bIsActivated)
{

	if(bIsActivated)
	{
		SettingMainMenuHUD = CreateWidget(this, SettingMainMenuWidgetClass);
		SettingMainMenuHUD->AddToViewport();
		SettingMainMenuHUD->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		SettingMainMenuHUD->RemoveFromParent();
		SettingMainMenuHUD = nullptr;
	}
}


void ABlasterPlayerController::SetHUDMatchCountdown(float CountdownTime)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->MatchCountdownText;
	if(bHudValid)
	{
		if(CountdownTime < 0.f)
		{
			BlasterHUD->CharacterOverlay->MatchCountdownText->SetText(FText());
			return;
		}
		
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60);
		int32 Seconds = CountdownTime - (Minutes * 60);
		

		FString CountdownText = FString::Printf(TEXT("%02d:%02d"),Minutes,Seconds);
		BlasterHUD->CharacterOverlay->MatchCountdownText->SetText(FText::FromString(CountdownText));

		if(Minutes <= 0 && Seconds == 30)
		{
			BlasterHUD->CharacterOverlay->PlayBlinkAnimation(true);
		}
	}
}

void ABlasterPlayerController::SetHUDAnnoucementCountdown(float CountdownTime)
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->Annoucement &&
			BlasterHUD->Annoucement->WarmUpTime;
	if(bHudValid)
	{
		if(CountdownTime < 0.f)
		{
			BlasterHUD->Annoucement->WarmUpTime->SetText(FText());
			return;
		}
		
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60);
		int32 Seconds = CountdownTime - (Minutes * 60);
		

		FString CountdownText = FString::Printf(TEXT("%02d:%02d"),Minutes,Seconds);
		BlasterHUD->Annoucement->WarmUpTime->SetText(FText::FromString(CountdownText));

		
	}
}

void ABlasterPlayerController::SetHudCountdownTime()
{
	float TimeLeft = 0;
	if(MatchState == MatchState::WaitingToStart)
	{
		TimeLeft = WarmUpTime - GetServerTime() + LevelStartingTime;
	}
	else if(MatchState == MatchState::InProgress)
	{
		TimeLeft = WarmUpTime + MatchTime -  GetServerTime() + LevelStartingTime;
	}
	else if(MatchState == MatchState::Cooldown)
	{
		TimeLeft = CooldownTime + WarmUpTime + MatchTime -  GetServerTime() + LevelStartingTime;
	}
	uint32 SecondsLeft = FMath::CeilToInt(TimeLeft);

	if(HasAuthority())
	{
		BlasterGameMode = BlasterGameMode == nullptr ? Cast<ABlasterGameMode>(UGameplayStatics::GetGameMode(this)) : BlasterGameMode;
		if(BlasterGameMode)
		{
			SecondsLeft =  FMath::CeilToInt(BlasterGameMode->GetCountdownTime() + LevelStartingTime) ;
		}
	}
	
	if(CountdownInt != SecondsLeft)
	{
		if(MatchState == MatchState::WaitingToStart || MatchState == MatchState::Cooldown)
		{
			SetHUDAnnoucementCountdown(TimeLeft);
		}
		else if(MatchState == MatchState::InProgress)
		{
			SetHUDMatchCountdown(TimeLeft);
		}
		
		
	}
	
	CountdownInt = SecondsLeft;
}



void ABlasterPlayerController::Server_RequestServerTime_Implementation(float timeOfClientReq)
{
	float ServerTimeOfReceived = GetWorld()->GetTimeSeconds();

	Client_ReportServerTIme(timeOfClientReq, ServerTimeOfReceived);
}

void ABlasterPlayerController::Client_ReportServerTIme_Implementation(float TimeOfClientReq,
	float TimeOfServerReceivedClientRequest)
{
	float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientReq;
	SingleTripTime = 0.5 * RoundTripTime;
	
	float CurrentServerTime = TimeOfServerReceivedClientRequest + SingleTripTime;

	ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}


float ABlasterPlayerController::GetServerTime()
{
	if(HasAuthority()) return GetWorld()->GetTimeSeconds();
	else
	return GetWorld()->GetTimeSeconds() + ClientServerDelta;
}

void ABlasterPlayerController::Server_CheckMatchState_Implementation()
{
	ABlasterGameMode* Gamemode = Cast<ABlasterGameMode>(UGameplayStatics::GetGameMode(this));
	if(Gamemode)
	{
		WarmUpTime = Gamemode->WarmUpTime;
		MatchTime = Gamemode->MatchTime;
		LevelStartingTime = Gamemode->LevelStartingTime;
		MatchState = Gamemode->GetMatchState();
		CooldownTime = Gamemode->CooldownTime;

		Client_JoinMidGame(MatchState, WarmUpTime, MatchTime, LevelStartingTime,CooldownTime);
		
	}
}

void ABlasterPlayerController::Client_JoinMidGame_Implementation(FName StateOfMatch,
	float Warmup, float Match, float StartingTime, float Cooldown)
{
	WarmUpTime = Warmup;
	MatchTime = Match;
	LevelStartingTime = StartingTime;
	MatchState = StateOfMatch;
	CooldownTime = Cooldown;
	
	OnMatchStateSet(MatchState);

	if(BlasterHUD && MatchState == MatchState::WaitingToStart)
	{
		BlasterHUD->AddAnnoucement();
	}
}

void ABlasterPlayerController::HighPingWarning()
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->HighPingImage &&
				BlasterHUD->CharacterOverlay->HighPingAnimation;

	if(bHudValid)
	{
		BlasterHUD->CharacterOverlay->HighPingImage->SetOpacity(1.f);
		BlasterHUD->CharacterOverlay->PlayAnimation(BlasterHUD->CharacterOverlay->HighPingAnimation, 0, 5);
	}
}

void ABlasterPlayerController::StopHighPingWarning()
{
	BlasterHUD = BlasterHUD == nullptr ? Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	bool bHudValid = BlasterHUD &&
		BlasterHUD->CharacterOverlay &&
			BlasterHUD->CharacterOverlay->HighPingImage &&
				BlasterHUD->CharacterOverlay->HighPingAnimation;

	if(bHudValid)
	{
		BlasterHUD->CharacterOverlay->HighPingImage->SetOpacity(0.f);
		if(BlasterHUD->CharacterOverlay->IsAnimationPlaying(BlasterHUD->CharacterOverlay->HighPingAnimation))
		{
			BlasterHUD->CharacterOverlay->StopAnimation(BlasterHUD->CharacterOverlay->HighPingAnimation);
		}
	}
}

void ABlasterPlayerController::ShowReturnToMainMenu()
{
	//TODO: 1. Show TO return mainmenu widget,
	if(ReturnToMainMenuWidget == nullptr) return;

	if(ReturnToMainMenu == nullptr)
	{
		ReturnToMainMenu = CreateWidget<UReturnToMainMenu>(this, ReturnToMainMenuWidget);
	}
	if(ReturnToMainMenu)
	{
		bIsReturnToMainMenuOpen = !bIsReturnToMainMenuOpen;
		if(bIsReturnToMainMenuOpen)
		{
			ReturnToMainMenu->MenuSetup();
		}
		else
		{
			ReturnToMainMenu->MenuTearDown();
		}
	}
	
}






void ABlasterPlayerController::ShowPlayerOverHead()
{
	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(GetPawn());

	if(BlasterCharacter == nullptr || BlasterCharacter->GetTeam() == ETeam::ET_NoTeam) return;
	
	for(auto Src : UGameplayStatics::GetGameState(this)->PlayerArray)
	{
		ABlasterPlayerState* BlasterPlayerState = Cast<ABlasterPlayerState>(Src);
		if(BlasterPlayerState && BlasterPlayerState->GetTeam() == BlasterCharacter->GetTeam())
		{
			ABlasterCharacter* curChar = Cast<ABlasterCharacter>(BlasterPlayerState->GetPawn());
			if(curChar)
			{
				curChar->ActivateOverheadWidget();
			}
			//UE_LOG(LogTemp, Warning, TEXT("Player: %s ->  Activate Overhead-> %s"),*BlasterCharacter->GetPlayerState()->GetPlayerName(), *BlasterPlayerState->GetPlayerName());
		}
	
		//UE_LOG(LogTemp, Warning, TEXT("%s"), * Src->GetPlayerName());
	}
	
}

void ABlasterPlayerController::HideBlasterHUD(bool bIsHide)
{
	BlasterHUD = BlasterHUD == nullptr ?  Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
	if(BlasterHUD)
	{
		if(bIsHide)
		{
			BlasterHUD->CharacterOverlay->SetVisibility(ESlateVisibility::Hidden);
		}
		else
		{
			BlasterHUD->CharacterOverlay->SetVisibility(ESlateVisibility::Visible);
			
		}
	}
}


void ABlasterPlayerController::BroadcastElim(ABlasterPlayerState* Attacker, ABlasterPlayerState* Victim)
{
	Client_ElimAnnouncement(Attacker, Victim);
}


void ABlasterPlayerController::Client_ElimAnnouncement_Implementation(ABlasterPlayerState* Attacker,
                                                                      ABlasterPlayerState* Victim)
{
	APlayerState* Self = GetPlayerState<APlayerState>();
	
	if(Attacker && Victim && Self)
	{
		BlasterHUD = BlasterHUD == nullptr ?  Cast<ABlasterHUD>(GetHUD()) : BlasterHUD;
		if(BlasterHUD)
		{
			// if(Attacker == Self && Victim != Self)
			// {
			// 	BlasterHUD->AddElimAnnouncement("You", Victim->GetPlayerName());
			// 	return;
			// }
			// if(Victim == Self && Attacker != Self)
			// {
			// 	BlasterHUD->AddElimAnnouncement(Attacker->GetPlayerName(), "You");
			// 	return;
			// }
			// if(Attacker == Victim && Attacker == Self)
			// {
			// 	BlasterHUD->AddElimAnnouncement("You", "Yourself!");
			// 	return;
			// }
			// if(Attacker == Victim && Attacker != Self)
			// {
			// 	BlasterHUD->AddElimAnnouncement(Attacker->GetPlayerName(), "ThemSelf!");
			// 	return;
			// }
			
			BlasterHUD->AddElimAnnouncement(Attacker, Victim);	
		}
	}
}

void ABlasterPlayerController::CreatePauseMenuHUD()
{
	if(!GetPawn()->IsLocallyControlled()) return;

	if(PauseHUD)
	{
		PauseHUD->RemoveFromParent();
		PauseHUD = nullptr;
	}
	
	if(!bIsLobby)
	{
		if(PauseMenuInGameWidget && PauseHUD == nullptr)
		{
			PauseHUD = CreateWidget(this, PauseMenuInGameWidget);
			PauseHUD->AddToViewport();
			PauseHUD->SetVisibility(ESlateVisibility::Hidden);
			
			PauseHUD->SetOwningPlayer(this);
		}
	}
	else
	{
		if(LobbyPauseWidgetClass)
		{
			PauseHUD = CreateWidget(this, LobbyPauseWidgetClass);
			PauseHUD->AddToViewport();
			PauseHUD->SetVisibility(ESlateVisibility::Hidden);

			PauseHUD->SetOwningPlayer(this);
		}
	}
}

void ABlasterPlayerController::CreateMainMenuSettingHUD()
{
	if(!GetPawn()->IsLocallyControlled()) return;

	if(SettingMainMenuHUD)
	{
		SettingMainMenuHUD->RemoveFromParent();
		SettingMainMenuHUD = nullptr;
	}

	
	if(SettingMainMenuHUD == nullptr && SettingMainMenuWidgetClass)
	{
		

		SettingMainMenuHUD->SetVisibility(ESlateVisibility::Hidden);
	}
	
}





