// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterGameMode.h"

#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/GameState/BlasterGameState.h"
#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"

namespace  MatchState
{
	const FName Cooldown = FName("Cooldown");
	
}

ABlasterGameMode::ABlasterGameMode()
{
	//this is used so that the gameModeClass will stay at watingToStart state until StartMatch is called.
	//this will spawn a default spawn for all players, they will able to fly around the map
	bDelayedStart = true;
	
}

void ABlasterGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	LevelStartingTime = GetWorld()->GetTimeSeconds();
}


void ABlasterGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(MatchState ==   MatchState::WaitingToStart)
	{
		CountdownTime = WarmUpTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;

		if(CountdownTime <= 0.f)
		{
			//Transition to StartMatch GameModeState
			StartMatch();
		}
		
	}
	else if(MatchState == MatchState::InProgress)
	{
		 CountdownTime = WarmUpTime + MatchTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;
		if(CountdownTime <= 0.f)
		{
			SetMatchState(MatchState::Cooldown);
		}
	}
	else if(MatchState == MatchState::Cooldown)
	{
		CountdownTime = WarmUpTime + MatchTime +CooldownTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;

		if(CountdownTime <= 0.f)
		{
			RestartGame();
		}
	}
}

void ABlasterGameMode::OnMatchStateSet()
{
	Super::OnMatchStateSet();
	
	for(FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		ABlasterPlayerController* BlasterPlayerController = Cast<ABlasterPlayerController>(*It);
		if(BlasterPlayerController)
		{
			BlasterPlayerController->OnMatchStateSet(MatchState);
		}
	}
}

void ABlasterGameMode::PlayerEliminated(ABlasterCharacter* VictimCharacter, ABlasterPlayerController* VictimController,
                                        ABlasterPlayerController* AttackerController)
{
	ABlasterPlayerState* AttackerPlayerState = AttackerController ? Cast<ABlasterPlayerState>(AttackerController->PlayerState) : nullptr;
	ABlasterPlayerState* VictimPlayerState = VictimController ? Cast<ABlasterPlayerState>(VictimController->PlayerState) : nullptr;


	ABlasterGameState* BlasterGameState = GetGameState<ABlasterGameState>();
	if(AttackerPlayerState && AttackerPlayerState != VictimPlayerState && BlasterGameState)
	{
		AttackerPlayerState->AddToScore(1.f);
		BlasterGameState->UpdateTopScore(AttackerPlayerState);
	}

	if(VictimPlayerState && VictimPlayerState != AttackerPlayerState)
	{
		
		VictimPlayerState->AddToDefeats(AttackerPlayerState->GetPlayerName(),  1);
	}
	
	if(VictimCharacter)
	{
		VictimCharacter->Elim();
	}

	
}

void ABlasterGameMode::RequestRespawn(ACharacter* CharacterToRespawn, AController* ElimmedController)
{
	if(CharacterToRespawn)
	{
		CharacterToRespawn->GetPlayerState<ABlasterPlayerState>()->AddToDefeats("",0);
		
		CharacterToRespawn->Reset();
		CharacterToRespawn->Destroy();

	}

	if(ElimmedController)
	{
		TArray<AActor*> AllPlayerStart;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), AllPlayerStart);
		int32 Selection = FMath::RandRange(0, AllPlayerStart.Num() - 1);
		
		RestartPlayerAtPlayerStart(ElimmedController, AllPlayerStart[Selection]);
	}
		
}


