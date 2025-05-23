// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureTheFlagGameMode.h"

#include "AnotherIShoot/CaptureTheFlag/FlagZone.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/GameState/BlasterGameState.h"
#include "AnotherIShoot/HUD/OverheadWidget.h"
#include "Kismet/GameplayStatics.h"

void ACaptureTheFlagGameMode::PlayerEliminated(ABlasterCharacter* VictimCharacter,
                                               ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController)
{
	ABlasterGameMode::PlayerEliminated(VictimCharacter, VictimController, AttackerController);

	
	
}

void ACaptureTheFlagGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(NewPlayer->GetPawn());
	if(BlasterCharacter)
	{
		UOverheadWidget* OverheadWidget = Cast<UOverheadWidget> (BlasterCharacter->GetOverheadWidget()->GetWidget());
		if(OverheadWidget)
		{
			OverheadWidget->ShowPlayerName(NewPlayer->GetPawn());
		}
	}
}

void ACaptureTheFlagGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	
}

void ACaptureTheFlagGameMode::FlagCaptured(AFlag* Flag, AFlagZone* FlagZone)
{
	bool bValidCapture = Flag->GetTeam() != FlagZone->TeamZone;
	ABlasterGameState* BGameState = Cast<ABlasterGameState>(GameState);
	if(BGameState)
	{
		if(FlagZone->TeamZone == ETeam::ET_BlueTeam)
		{
			BGameState->BlueTeamScores();
		}
		if(FlagZone->TeamZone == ETeam::ET_RedTeam)
		{
			BGameState->RedTeamScores();
		}
	}
	
}


