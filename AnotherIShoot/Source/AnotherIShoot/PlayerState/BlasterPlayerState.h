// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnotherIShoot/BlasterTypes/Team.h"

#include "GameFramework/PlayerState.h"
#include "BlasterPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API ABlasterPlayerState : public APlayerState
{
	GENERATED_BODY()

	
public:
	
	void AddToScore(float ScoreToAdd);
	void AddToDefeats(FString AttackerName, int32 Defeats);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	virtual void OnRep_Defeats();
	virtual void OnRep_Score() override;

	UFUNCTION()
	void OnRep_Team();
private:
	UPROPERTY()
	class ABlasterCharacter* Character;
	
	UPROPERTY()
	class ABlasterPlayerController* Controller;

	float currentScore = 0;

	UPROPERTY(ReplicatedUsing = OnRep_Defeats)
	int32 DefeatsAmount;

	UPROPERTY(Replicated)
	FString AttackerNameToSave;
	
	UPROPERTY(ReplicatedUsing = OnRep_Team)
	ETeam Team = ETeam::ET_NoTeam;

	
public:
	FORCEINLINE ETeam GetTeam() const {return Team;}
	void SetTeam(ETeam TeamToSet);
};
