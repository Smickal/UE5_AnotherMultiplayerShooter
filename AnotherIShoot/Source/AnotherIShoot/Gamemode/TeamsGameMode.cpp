// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamsGameMode.h"

#include "AnotherIShoot/GameState/BlasterGameState.h"
#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
#include "Kismet/GameplayStatics.h"

ATeamsGameMode::ATeamsGameMode()
{
	bTeamsMatch = true;
}

void ATeamsGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	ABlasterGameState* BlasterGameState = Cast<ABlasterGameState>(UGameplayStatics::GetGameState(this));
	if(BlasterGameState)
	{
		ABlasterPlayerState* BPState = NewPlayer->GetPlayerState<ABlasterPlayerState>();
		if(BPState && BPState->GetTeam() == ETeam::ET_NoTeam)
		{
			if(BlasterGameState->BlueTeam.Num() >= BlasterGameState->RedTeam.Num())
			{
				BlasterGameState->RedTeam.AddUnique(BPState);
				BPState->SetTeam(ETeam::ET_RedTeam);
			}
			else
			{
				BlasterGameState->BlueTeam.AddUnique(BPState);
				BPState->SetTeam(ETeam::ET_BlueTeam);
			}
		}
	}
	
}

void ATeamsGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	ABlasterGameState* BlasterGameState = Cast<ABlasterGameState>(UGameplayStatics::GetGameState(this));
	ABlasterPlayerState* PState = Exiting->GetPlayerState<ABlasterPlayerState>();
	if(PState && BlasterGameState)
	{
		if(BlasterGameState->RedTeam.Contains(PState))
		{
			BlasterGameState->RedTeam.Remove(PState);
		}

		if(BlasterGameState->BlueTeam.Contains(PState))
		{
			BlasterGameState->BlueTeam.Remove(PState);
		}
	}
}


void ATeamsGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	ABlasterGameState* BlasterGameState = Cast<ABlasterGameState>(UGameplayStatics::GetGameState(this));
	if(BlasterGameState)
	{
		for(auto PState : BlasterGameState->PlayerArray)
		{
			ABlasterPlayerState* BPState = Cast<ABlasterPlayerState>(PState.Get());
			if(BPState && BPState->GetTeam() == ETeam::ET_NoTeam)
			{
				if(BlasterGameState->BlueTeam.Num() >= BlasterGameState->RedTeam.Num())
				{
					BlasterGameState->RedTeam.AddUnique(BPState);
					BPState->SetTeam(ETeam::ET_RedTeam);
				}
				else
				{
					BlasterGameState->BlueTeam.AddUnique(BPState);
					BPState->SetTeam(ETeam::ET_BlueTeam);
				}
			}
		}
	}
}

float ATeamsGameMode::CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage)
{
	ABlasterPlayerState* AttackerPState = Attacker->GetPlayerState<ABlasterPlayerState>();
	ABlasterPlayerState* VictimPState = Victim->GetPlayerState<ABlasterPlayerState>();
	
	if(AttackerPState == nullptr || VictimPState == nullptr) return BaseDamage;
	if(AttackerPState == VictimPState) return BaseDamage;

	if(AttackerPState->GetTeam() == VictimPState->GetTeam())
	{
		return 0.f;
	}

	return BaseDamage;
	
}

void ATeamsGameMode::PlayerEliminated(ABlasterCharacter* VictimCharacter, ABlasterPlayerController* VictimController,
	ABlasterPlayerController* AttackerController)
{
	Super::PlayerEliminated(VictimCharacter, VictimController, AttackerController);

	ABlasterGameState* BlasterGameState = Cast<ABlasterGameState>(UGameplayStatics::GetGameState(this));
	ABlasterPlayerState* AttackerPState = AttackerController != nullptr ? AttackerController->GetPlayerState<ABlasterPlayerState>() : nullptr;


	//UE_LOG(LogTemp, Warning, TEXT("SetTeamScore"));
	
	if(BlasterGameState && AttackerPState)
	{
		if(AttackerPState->GetTeam() == ETeam::ET_BlueTeam)
		{
			BlasterGameState->BlueTeamScores();
		}
		if(AttackerPState->GetTeam() == ETeam::ET_RedTeam)
		{
			BlasterGameState->RedTeamScores();
		}
	}
}
