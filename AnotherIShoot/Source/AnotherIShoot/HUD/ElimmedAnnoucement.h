// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ElimmedAnnoucement.generated.h"

class UTextBlock;
class UHorizontalBox;
/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API UElimmedAnnoucement : public UUserWidget
{
	GENERATED_BODY()


public:
	void SetElimAnnouncementText(FString AttackerName, FString VictimName);
	
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* AnnoucementBox;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* AnnoucementText;
};
