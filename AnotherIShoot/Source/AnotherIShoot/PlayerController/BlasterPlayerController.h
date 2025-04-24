// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnotherIShoot/BlasterTypes/Team.h"
#include "GameFramework/PlayerController.h"
#include "BlasterPlayerController.generated.h"

class UBlasterGameSave;
class ABlasterGameMode;
class UCharacterOverlay;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighPingDelegate, bool, bPingTooHigh);

UCLASS()
class ANOTHERISHOOT_API ABlasterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	
	void SetHUDHealth(float CurrHealth, float MaxHealh);
	void SetHUDShield(float CurrShield, float MaxShield);
	
	void SetHUDScore(float Score);
	void HideTeamScore();
	void InitTeamScore();
	void SetHudRedTeamScore(int32 RedScore);
	void SetHudBlueTeamScore(int32 BlueScore);

	
	void SetHUDDefeatsByAndAmount(FString AttackerName, int Defeats);
	void ActivateEliminatedOverlay(bool bActivated);
	void SetHUDWeaponAmmo(int32 Ammo);
	void SetHUDCarriedAmmo(int32 Ammo);
	void SetHUDWeaponType(FString WeaponName, UTexture2D* WeaponTexture);
	void SetHUDGrenade(int32 Grenade);
	void SetHUDTeam(ETeam TeamToSet);

	UFUNCTION(BlueprintCallable)
	void SetHUDPauseGame(bool bIsActivated);
	
	
	void SetHUDMatchCountdown(float CountdownTime);
	void SetHUDAnnoucementCountdown(float CountdownTime);
	
	virtual void OnPossess(APawn* InPawn) override;
	virtual float GetServerTime(); //Sync with server world Clock
	virtual void ReceivedPlayer() override; //Sync with server clock as soon as possible
	
	void HandleMatchHasStarted(bool bTeamsMatch = false);
	void HandleCooldownHasStarted();
	
	void OnMatchStateSet(FName State, bool bTeamsMatch = false);

	float SingleTripTime = 0.f;

	FHighPingDelegate HighPingDelegate;

	void BroadcastElim(ABlasterPlayerState* Attacker, ABlasterPlayerState* Victim);

	void ShowPlayerOverHead();



	void HideBlasterHUD(bool bIsHide);

	UPROPERTY(BlueprintReadWrite)
	float MouseXSensitivity = 1.f;
	UPROPERTY(BlueprintReadWrite)
	float MouseYSensitivity = 1.f;
	UPROPERTY(BlueprintReadWrite)
	float SniperZoomSensitivity = 1.f;

	
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupInputComponent() override; 
	void CheckPing(float DeltaSeconds);

	void CheckTimeSync(float DeltaSeconds);
	void SetHudCountdownTime();

	UFUNCTION()
	void OnRep_MatchState();

	void PollInit();

	UFUNCTION(Server, Reliable)
	void Server_CheckMatchState();
	
	UFUNCTION(Client, Reliable)
	void Client_JoinMidGame(FName StateOfMatch, float Warmup, float Match, float StartingTime, float Cooldown);

	void HighPingWarning();

	void StopHighPingWarning();

	UFUNCTION(Server, Reliable)
	void Server_ReportPingStatus(bool bHighPing);

	void ShowReturnToMainMenu();

	UFUNCTION(Client, Reliable)
	void Client_ElimAnnouncement(ABlasterPlayerState* Attacker, ABlasterPlayerState* Victim);

	
	UPROPERTY(ReplicatedUsing = OnRep_ShowTeamScore)
	bool bShowTeamScore = false;

	UFUNCTION()
	void OnRep_ShowTeamScore();

	FString GetInfoText(const TArray<ABlasterPlayerState*>& Players);
	FString GetTeamsInfoText(class ABlasterGameState* BlasterGameState);
	
	UPROPERTY(BlueprintReadWrite)
	UBlasterGameSave* BlasterGameSaveInstance;


	void CreatePauseMenuHUD();
private:
	UPROPERTY()
	class ABlasterHUD* BlasterHUD;

	//Return to MainMenu
	UPROPERTY(EditAnywhere, Category = "HUD")
	TSubclassOf<UUserWidget> ReturnToMainMenuWidget;

	UPROPERTY(EditAnywhere, Category = "HUD")
	TSubclassOf<UUserWidget> PauseMenuInGameWidget;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UUserWidget* PauseHUD;
	
	UPROPERTY()
	class UReturnToMainMenu* ReturnToMainMenu;

	bool bIsReturnToMainMenuOpen = false;

	float MatchTime = 0.f;
	float WarmUpTime = 0.f;
	float LevelStartingTime = 0.f;
	float CooldownTime = 0.f;
	
	uint32 CountdownInt = 0;

	UPROPERTY(ReplicatedUsing = OnRep_MatchState)
	FName MatchState;

	UPROPERTY()
	UCharacterOverlay* CharacterOverlay;

	UPROPERTY()
	ABlasterGameMode* BlasterGameMode;

	float HighPingRunningTime = 0.f;
	
	UPROPERTY(EditAnywhere)
	float HighPingDuration = 5.f;

	UPROPERTY(EditAnywhere)
	float CheckPingFrequency = 5.f;

	UPROPERTY(EditAnywhere)
	float HighPingThreshold = 80.f;

	float PingAnimationRunningTime = 0.f;

	

	
protected:
	//
	// Sync time Between client and server
	//

	//Requests the current server time passing in the client's time when the request was sent
	UFUNCTION(Server, Reliable)
	void Server_RequestServerTime(float timeOfClientReq);

	//Reports the current server time to the client in response of client's request
	UFUNCTION(Client, Reliable)
	void Client_ReportServerTIme(float TimeOfClientReq, float TimeOfServerReceivedClientRequest);

	//The diffreence between client and server time
	float ClientServerDelta;

	//Every x-sec tries to sync with server time
	UPROPERTY(EditAnywhere, Category = Time)
	float TimeSyncFrequency = 5.f;

	float TimeSyncRunningTime = 0.f;

	bool bInitializeCharacterHealth = false;
	bool bInitializeCharacterShield = false;
	bool bInitializeCharacterScore = false;
	bool bInitializeCharacterDefeats = false;
	bool bInitializeCarriedAmmo = false;
	bool bInitializeHUDWepAmmo = false;
	bool bInitializeHUDTextureAmmo = false;
	bool bInitializeHUDTeamText = false;
	
	float HUDHealth;
	float HUDMaxHealth;
	float HUDShield;
	float HUDMaxShield;
	float HUDScore;
	int32 HUDDefeats;
	int32 HUDGrenades;
	int32 HUDCarriedAmmo;
	int32 HUDWeapAmmo;
	ETeam HUDTeam{ETeam::ET_NoTeam};
	
	UPROPERTY()
	UTexture2D* HUDWeaponTypeTexture;
	FString HUDWeaponName;

	
};
