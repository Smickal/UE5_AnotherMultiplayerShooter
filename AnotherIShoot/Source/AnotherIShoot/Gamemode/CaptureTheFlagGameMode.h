// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TeamsGameMode.h"
#include "AnotherIShoot/Weapon/Flag.h"
#include "CaptureTheFlagGameMode.generated.h"

class AFlagZone;
class AFlag;
/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API ACaptureTheFlagGameMode : public ATeamsGameMode
{
	GENERATED_BODY()


public:
	virtual void PlayerEliminated(ABlasterCharacter* VictimCharacter, ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController) override;

	void FlagCaptured(AFlag* Flag, AFlagZone* FlagZone);
};
