// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterOverlay.h"

#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"

void UCharacterOverlay::DisableImage()
{
	WeaponTypeImage->SetBrushFromTexture(InvisibleImage);
}

void UCharacterOverlay::PlayBlinkAnimation(bool bisPlaying)
{
	if(bisPlaying)
	{
		PlayAnimation(RedBlinkingAnimation, 0.f, 0);
	}
	else
	{
		StopAnimation(RedBlinkingAnimation);
		PlayAnimation(ResetBlinkingAnimation);
	}
}
