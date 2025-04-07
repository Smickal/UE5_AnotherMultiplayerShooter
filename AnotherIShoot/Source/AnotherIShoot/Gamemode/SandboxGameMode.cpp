// Fill out your copyright notice in the Description page of Project Settings.


#include "SandboxGameMode.h"

#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/HUD/OverheadWidget.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"

void ASandboxGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if(NewPlayer->PlayerState->GetLocalRole() == ROLE_Authority)
	{
		for (auto Element : GameState->PlayerArray)
		{
			ABlasterCharacter* BlasterCharacter =  Cast<ABlasterCharacter>(NewPlayer->GetCharacter());
			if(BlasterCharacter)
			{
				UOverheadWidget* OverheadWidget = Cast<UOverheadWidget>(BlasterCharacter->GetComponentByClass<UWidgetComponent>()->GetUserWidgetObject());
				if(OverheadWidget)
				{
					OverheadWidget->SetDisplayText(NewPlayer->PlayerState->GetPlayerName());	
				}
			}
		}
	}
}
