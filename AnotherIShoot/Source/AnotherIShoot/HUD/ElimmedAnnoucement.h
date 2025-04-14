// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "ElimmedAnnoucement.generated.h"

class UTextBlock;
class UHorizontalBox;
class ABlasterPlayerState;
/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API UElimmedAnnoucement : public UUserWidget
{
	GENERATED_BODY()


public:
	void SetElimAnnouncementText(ABlasterPlayerState* AttackerPState, ABlasterPlayerState* VictimPState, UTexture2D* WeaponTexture2D);
	
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* AnnoucementBox;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* AnnoucementTextAttacker;

	UPROPERTY(meta = (BindWidget))
	UImage* AnnoucementImageWeaponType;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* AnnoucementTextVictim;

private:
	FColor GetTeamColor(ABlasterPlayerState* BlasterPlayerState);
};
