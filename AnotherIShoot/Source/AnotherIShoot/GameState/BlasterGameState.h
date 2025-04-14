// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "BlasterGameState.generated.h"

class ABlasterPlayerState;
/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API ABlasterGameState : public AGameState
{
	GENERATED_BODY()

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void UpdateTopScore(ABlasterPlayerState* ScoringPlayer);

	void RedTeamScores();

	void BlueTeamScores();
public:

	UPROPERTY(Replicated)
	TArray<ABlasterPlayerState*> TopScoringPlayer;

	//
	// Team GameMode
	//
	
	TArray<ABlasterPlayerState* > RedTeam;
	TArray<ABlasterPlayerState* > BlueTeam;

	UPROPERTY(ReplicatedUsing = OnRepRedTeamScore)
	float RedTeamScore = 0.f;

	UFUNCTION()
	void OnRepRedTeamScore();

	UPROPERTY(ReplicatedUsing = OnRepBlueTeamScore)
	float BlueTeamScore = 0.f;

	UFUNCTION()
	void OnRepBlueTeamScore();
private:
	
	float TopScore = 0;
};	
