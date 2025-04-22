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
	UPROPERTY(EditAnywhere)
	FString SaveSlotName;

	UPROPERTY(EditAnywhere)
	uint32 UserIndex;
	
public:
	UPROPERTY(EditAnywhere)
	float XMouseSensitivity;
	
	UPROPERTY(EditAnywhere)
	float YMouseSensitivity;
	
};
