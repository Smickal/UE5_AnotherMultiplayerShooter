// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BlasterGameSave.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API UBlasterGameSave : public USaveGame
{
	GENERATED_BODY()

	UBlasterGameSave();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SaveSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int UserIndex;
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int GraphicQualitySettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MasterVolume;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float XMouseSensitivity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YMouseSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SniperZoomMultiplier = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ViewDistanceSetting = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int AntiAliasingSetting = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int PostProcessSetting = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ShadowSetting = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int GlobalIlluminationSetting = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int TexturesSetting = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int EffectsSetting = 0;
	
};
