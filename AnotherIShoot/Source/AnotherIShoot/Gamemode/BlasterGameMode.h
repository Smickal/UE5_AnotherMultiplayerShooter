// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "GameFramework/GameMode.h"
#include "BlasterGameMode.generated.h"

class ABlasterPlayerState;
class ABlasterPlayerController;
class ABlasterCharacter;
/**
 * 
 */

namespace MatchState
{
	extern ANOTHERISHOOT_API const FName Cooldown; //Match Duration has been reach, display winner, begin cooldown timer
	
	
}

UCLASS()
class ANOTHERISHOOT_API ABlasterGameMode : public AGameMode
{
	GENERATED_BODY()


public:
	ABlasterGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void PlayerEliminated(ABlasterCharacter* VictimCharacter, ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController);
	virtual void RequestRespawn(ACharacter* CharacterToRespawn, AController* ElimmedController);
	virtual void PlayerLeftGame(ABlasterPlayerState* PlayerLeaving);
	virtual  float CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage);

public:

	UPROPERTY(EditDefaultsOnly)
	float WarmUpTime = 10.f;
	
	UPROPERTY(EditDefaultsOnly)
	float MatchTime = 120.f;

	UPROPERTY(EditDefaultsOnly)
	float CooldownTime = 10.f;
	
	float LevelStartingTime = 0.f;
	
	UPROPERTY(EditDefaultsOnly)
	bool bTeamsMatch = false;
protected:
	virtual void BeginPlay() override;
	virtual void OnMatchStateSet() override;
	
private:
	float CountdownTime = 0.f;

public:
	FORCEINLINE float GetCountdownTime() const {return CountdownTime;}
};
