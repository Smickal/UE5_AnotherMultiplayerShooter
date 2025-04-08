// Fill out your copyright notice in the Description page of Project Settings.


#include "ElimmedAnnoucement.h"

#include "Components/TextBlock.h"


void UElimmedAnnoucement::SetElimAnnouncementText(FString AttackerName, FString VictimName)
{
	FString ElimText = FString::Printf(TEXT("%s Elimmed %s!"), *AttackerName, *VictimName);

	if(AnnoucementText)
	{
		AnnoucementText->SetText(FText::FromString(ElimText));
	}
}
