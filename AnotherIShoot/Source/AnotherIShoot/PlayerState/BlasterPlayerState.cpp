// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterPlayerState.h"

#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "Net/UnrealNetwork.h"

void ABlasterPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABlasterPlayerState, DefeatsAmount);
	DOREPLIFETIME(ABlasterPlayerState, AttackerNameToSave);
	DOREPLIFETIME(ABlasterPlayerState, Team);
}




void ABlasterPlayerState::OnRep_Score()
{
	Super::OnRep_Score();

	Character = Character == nullptr ? Cast<ABlasterCharacter>(GetPawn()) : Character;
	if(Character)
	{
		Controller = Controller == nullptr ? Cast<ABlasterPlayerController>(Character->Controller) : Controller;
		if(Controller)
		{
			Controller->SetHUDScore(GetScore());
		}
	}
	
}

void ABlasterPlayerState::AddToDefeats(FString AttackerName, int32 Defeats)
{
	DefeatsAmount += Defeats;
	AttackerNameToSave = AttackerName;
	
	Character = Character == nullptr ? Cast<ABlasterCharacter>(GetPawn()) : Character;
	if(Character)
	{
		Controller = Controller == nullptr ? Cast<ABlasterPlayerController>(Character->Controller) : Controller;
		if(Controller)
		{
			Controller->SetHUDDefeatsByAndAmount(AttackerNameToSave, DefeatsAmount);
		}
	}
}

void ABlasterPlayerState::AddToScore(float ScoreToAdd)
{
	currentScore += ScoreToAdd;
	SetScore(currentScore);
	Character = Character == nullptr ? Cast<ABlasterCharacter>(GetPawn()) : Character;
	if(Character)
	{
		Controller = Controller == nullptr ? Cast<ABlasterPlayerController>(Character->Controller) : Controller;
		if(Controller)
		{
			Controller->SetHUDScore(GetScore());
		}
	}
}



void ABlasterPlayerState::OnRep_Defeats()
{
	Character = Character == nullptr ? Cast<ABlasterCharacter>(GetPawn()) : Character;
	if(Character)
	{
		Controller = Controller == nullptr ? Cast<ABlasterPlayerController>(Character->Controller) : Controller;
		if(Controller)
		{
			Controller->SetHUDDefeatsByAndAmount( AttackerNameToSave, DefeatsAmount);
		}
	}
}