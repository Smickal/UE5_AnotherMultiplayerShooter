// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterGameState.h"

#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
#include "Net/UnrealNetwork.h"


void ABlasterGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


	DOREPLIFETIME(ABlasterGameState, TopScoringPlayer);
	DOREPLIFETIME(ABlasterGameState, RedTeamScore);
	DOREPLIFETIME(ABlasterGameState, BlueTeamScore);
}

void ABlasterGameState::UpdateTopScore(ABlasterPlayerState* ScoringPlayer)
{
	if(TopScoringPlayer.Num() == 0)
	{
		TopScoringPlayer.Add(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
	else if(ScoringPlayer->GetScore() == TopScore)
	{
		TopScoringPlayer.AddUnique(ScoringPlayer);
	}
	else if(ScoringPlayer->GetScore() > TopScore)
	{
		TopScoringPlayer.Empty();
		TopScoringPlayer.Add(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
}

void ABlasterGameState::RedTeamScores()
{
	++RedTeamScore;

	ABlasterPlayerController* BlasterPlayerController = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetHudRedTeamScore(RedTeamScore);
	}
}

void ABlasterGameState::BlueTeamScores()
{
	++BlueTeamScore;

	ABlasterPlayerController* BlasterPlayerController = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetHudBlueTeamScore(BlueTeamScore);
	}
}

void ABlasterGameState::OnRepRedTeamScore()
{
	ABlasterPlayerController* BlasterPlayerController = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetHudRedTeamScore(RedTeamScore);
	}
}

void ABlasterGameState::OnRepBlueTeamScore()
{
	ABlasterPlayerController* BlasterPlayerController = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetHudBlueTeamScore(BlueTeamScore);
	}
}



