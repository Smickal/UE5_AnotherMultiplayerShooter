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
	//this is used so that the gameModeClass will stay at waitingToStart state until StartMatch is called.
	//this will spawn a default spawn for all players, they will be able to fly around the map
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
		TArray<ABlasterPlayerState*> PlayersCurrentlyInTheLead;
		for(auto LeadPlayer : BlasterGameState->TopScoringPlayer)
		{
			PlayersCurrentlyInTheLead.Add(LeadPlayer);
		}
		
		AttackerPlayerState->AddToScore(1.f);
		BlasterGameState->UpdateTopScore(AttackerPlayerState);

		if(BlasterGameState->TopScoringPlayer.Contains(AttackerPlayerState))
		{
			ABlasterCharacter* Leader = Cast<ABlasterCharacter>(AttackerPlayerState->GetPawn());
			if(Leader)
			{
				Leader->Multicast_GainedTheLead();
			}
		}

		for(int32 i = 0; i < PlayersCurrentlyInTheLead.Num(); i++)
		{
			if(!BlasterGameState->TopScoringPlayer.Contains(PlayersCurrentlyInTheLead[i]))
			{
				ABlasterCharacter* Loser = Cast<ABlasterCharacter>(PlayersCurrentlyInTheLead[i]->GetPawn());
				if(Loser)
				{
					Loser->Multicast_LostTheLead();
				}
			}
		}
	}

	if(VictimPlayerState && VictimPlayerState != AttackerPlayerState)
	{
		
		VictimPlayerState->AddToDefeats(AttackerPlayerState->GetPlayerName(),  1);
	}
	
	if(VictimCharacter)
	{
		VictimCharacter->Elim(false);
	}

	
}

void ABlasterGameMode::PlayerLeftGame(ABlasterPlayerState* PlayerLeaving)
{
	//TODO: Call Elim, passing in true for bLeftGame
	ABlasterGameState* BlasterGameState = GetGameState<ABlasterGameState>();
	if(BlasterGameState && BlasterGameState->TopScoringPlayer.Contains(PlayerLeaving))
	{
		BlasterGameState->TopScoringPlayer.Remove(PlayerLeaving);
	}

	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(PlayerLeaving->GetPawn());
	if(BlasterCharacter)
	{
		BlasterCharacter->Elim(true);
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




