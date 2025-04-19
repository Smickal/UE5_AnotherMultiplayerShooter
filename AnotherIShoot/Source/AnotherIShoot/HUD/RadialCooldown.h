// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RadialCooldown.generated.h"

class URadialSlider;
/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API URadialCooldown : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	URadialSlider* RadialSlider;
	
};
