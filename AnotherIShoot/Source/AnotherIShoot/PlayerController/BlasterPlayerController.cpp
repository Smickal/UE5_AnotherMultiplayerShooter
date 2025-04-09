// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterPlayerController.h"

#include "AnotherIShoot/BlasterComponent/CombatComponent.h"
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



void ABlasterPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABlasterPlayerController, MatchState);
}


void ABlasterPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	BlasterHUD = Cast<ABlasterHUD>(GetHUD());
	Server_CheckMatchState();
	
}

void ABlasterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if(InputComponent == nullptr )return;

	InputComponent->BindAction("Quit", IE_Pressed, this, &ABlasterPlayerController::ShowReturnToMainMenu);
}



void ABlasterPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	SetHudCountdownTime();

	CheckTimeSync(DeltaSeconds);
	PollInit();

	CheckPing(DeltaSeconds);
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

				ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(GetPawn());
				if(BlasterCharacter && BlasterCharacter->GetCombatComponent())
				{
					SetHUDGrenade(BlasterCharacter->GetCombatComponent()->GetGrenades());
				}
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
			UE_LOG(LogTemp, Warning, TEXT("%d"), PlayerState->GetCompressedPing() * 4);
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
void ABlasterPlayerController::OnMatchStateSet(FName State)
{
	MatchState = State;

	if(MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted();
	}
	else if(MatchState == MatchState::Cooldown)
	{
		HandleCooldownHasStarted();
	}
	
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


void ABlasterPlayerController::HandleMatchHasStarted()
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
				FString AnnouncementText("New Match Starts In...");
				BlasterHUD->Annoucement->AnnouncementText->SetText(FText::FromString(AnnouncementText));
			}

			ABlasterGameState* GameState = Cast<ABlasterGameState>( UGameplayStatics::GetGameState(this));
			ABlasterPlayerState* BlasterPlayerState = GetPlayerState<ABlasterPlayerState>();
			
			if(BlasterHUD->Annoucement->InfoText && GameState && BlasterPlayerState)
			{
				TArray<ABlasterPlayerState*> TopPlayers = GameState->TopScoringPlayer;
				FString InfoTextString;
				
				if(TopPlayers.Num() == 0)
				{
					InfoTextString = FString("There is no Winner!");
				}
				else if(TopPlayers.Num() == 1 && TopPlayers[0] == BlasterPlayerState)
				{
					InfoTextString = FString("You are the winner!!");
				}
				else if(TopPlayers.Num() == 1)
				{
					InfoTextString = FString::Printf(TEXT("Winner: \n%s"), *TopPlayers[0]->GetPlayerName());
				}
				else if(TopPlayers.Num() > 1)
				{
					InfoTextString = FString::Printf(TEXT("Players tied for the win: \n"));
					for(auto TiedPlayer : TopPlayers)
					{
						InfoTextString.Append(FString::Printf(TEXT("%s\n"), *TiedPlayer->GetPlayerName()));
					}
				}
				
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
			if(Attacker == Self && Victim != Self)
			{
				BlasterHUD->AddElimAnnouncement("You", Victim->GetPlayerName());
				return;
			}
			if(Victim == Self && Attacker != Self)
			{
				BlasterHUD->AddElimAnnouncement(Attacker->GetPlayerName(), "You");
				return;
			}
			if(Attacker == Victim && Attacker == Self)
			{
				BlasterHUD->AddElimAnnouncement("You", "Yourself!");
				return;
			}
			if(Attacker == Victim && Attacker != Self)
			{
				BlasterHUD->AddElimAnnouncement(Attacker->GetPlayerName(), "ThemSelf!");
				return;
			}
			
			BlasterHUD->AddElimAnnouncement(Attacker->GetPlayerName(), Victim->GetPlayerName());	
		}
	}
}






