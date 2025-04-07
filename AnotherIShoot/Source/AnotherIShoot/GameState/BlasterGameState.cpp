// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterGameState.h"

#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
#include "Net/UnrealNetwork.h"


void ABlasterGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


	DOREPLIFETIME(ABlasterGameState, TopScoringPlayer);
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



