// Fill out your copyright notice in the Description page of Project Settings.

#include "LobbyGameMode.h"

#include "MultiplayerSessionsSubsystem.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
#include "GameFramework/GameStateBase.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	UGameInstance* GameInstance = GetGameInstance();
	if(GameInstance)
	{
		UMultiplayerSessionsSubsystem* Subsystem = GameInstance->GetSubsystem<UMultiplayerSessionsSubsystem>();
		check(Subsystem);

		int32 NumOfPlayer = GameState.Get()->PlayerArray.Num();
		if(NumOfPlayer == Subsystem->DesiredNumPublicConnections)
		{
			UWorld* World = GetWorld();
			if(World)
			{
				bUseSeamlessTravel = true;

				FString MatchType = Subsystem->DesiredMatchType;
				if(MatchType == "FreeForAll")
				{
					World->ServerTravel(FString("Game/Maps/BlasterMap?listen"));
				}
				else if(MatchType == "Teams")
				{
					World->ServerTravel(FString("Game/Maps/TeamBlasterMap?listen"));
				}
				else if(MatchType == "CTF")
				{
					World->ServerTravel(FString("Game/Maps/CTFBlasterMap?listen"));
				}
				
			}
		}
	}

	
	
}

void ALobbyGameMode::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	Super::HandleStartingNewPlayer_Implementation(NewPlayer);

	ABlasterPlayerController* BlasterPlayerController = Cast<ABlasterPlayerController>(NewPlayer);
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetIsLobby(true);
	}

	GEngine->AddOnScreenDebugMessage(
		-1,
		10.f,
		FColor::Red,
		FString::Printf(TEXT("%s is successfully joining a lobby!"), *NewPlayer->GetPlayerState<ABlasterPlayerState>()->GetPlayerName()));
}


