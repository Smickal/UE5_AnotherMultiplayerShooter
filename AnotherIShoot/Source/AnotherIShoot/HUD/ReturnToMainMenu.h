// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MultiplayerSessionsSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "ReturnToMainMenu.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API UReturnToMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable )
	void MenuSetup();
	void MenuTearDown();


	UFUNCTION(BlueprintCallable)
	void TravelServer(FString MapName, FString MatchType);
	
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	UButton* ReturnButton;

	UPROPERTY(BlueprintReadWrite)
	bool bIsMainMenu = false;
	
protected:
	virtual bool Initialize() override;

	UFUNCTION()
	void OnDestroySessionComplete(bool bWasSuccessfull);

	UFUNCTION()
	void OnPlayerLeftGame();

	UFUNCTION(BlueprintCallable)
	void ServerTravelToLobby();

	
private:

	UFUNCTION(BlueprintCallable)
	void OnReturnButtonPressed();

	UPROPERTY()
	UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;

	UPROPERTY()
	APlayerController* PlayerController;
};
