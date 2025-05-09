// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWidget.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()

	//Variables
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* DisplayText;

	
protected:

private:
	
	//functions
protected:
	virtual void NativeDestruct() override;

public:
	void SetDisplayText(FString TextToDisplay);

	UFUNCTION(BlueprintCallable)
	void ShowPlayerNetRoler(APawn* InPawn);
	
	UFUNCTION(BlueprintCallable)
	void ShowPlayerName(APawn* InPawn);
};
