// Fill out your copyright notice in the Description page of Project Settings.


#include "ElimmedAnnoucement.h"

#include "AnotherIShoot/BlasterTypes/AnnouncementData.h"
#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
#include "Components/TextBlock.h"


void UElimmedAnnoucement::SetElimAnnouncementText(ABlasterPlayerState* AttackerPState, ABlasterPlayerState* VictimPState, UTexture2D* WeaponTexture2D)
{
	if(AttackerPState == nullptr || VictimPState == nullptr) return; 
	
	FString AttackerName(AttackerPState->GetPlayerName());
	FString VictimName(VictimPState->GetPlayerName());

	FColor AttackerColor = GetTeamColor(AttackerPState);
	FColor VictimColor = GetTeamColor(VictimPState);	
	
	
	if(AnnoucementTextAttacker && AnnoucementTextVictim && AnnoucementImageWeaponType)
	{	
		AnnoucementTextAttacker->SetText(FText::FromString(AttackerName));
		AnnoucementTextAttacker->SetColorAndOpacity(AttackerColor);
		
		AnnoucementTextVictim->SetText(FText::FromString(VictimName));
		AnnoucementTextVictim->SetColorAndOpacity(VictimColor);
	}

	if(WeaponTexture2D)
	{
		AnnoucementImageWeaponType->SetBrushFromTexture(WeaponTexture2D);
	}
}

FColor UElimmedAnnoucement::GetTeamColor(ABlasterPlayerState* BlasterPlayerState)
{
	switch (BlasterPlayerState->GetTeam())
	{
		case ETeam::ET_RedTeam:
			return  FColor::Red;
			break;
		case ETeam::ET_BlueTeam:
			return  FColor::Blue;
			break;
			
		case ETeam::ET_NoTeam:
			break;
		case ETeam::ET_MAX:
			break;
	}

	return FColor::White;
}
