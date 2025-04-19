// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnotherIShoot/BlasterTypes/CombatState.h"
#include "AnotherIShoot/Enums/TurningInPlace.h"
#include "AnotherIShoot/Interfaces/InteractWithCrosshairInterface.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Character.h"
#include "Components/WidgetComponent.h"
#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
#include "BlasterCharacter.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class UBoxComponent;
class ABlasterPlayerController;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeftGame);

UCLASS()
class ANOTHERISHOOT_API ABlasterCharacter : public ACharacter, public  IInteractWithCrosshairInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABlasterCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	void SetOverlappingWeapon(class AWeapon* Weapon);
	void SetOverlappingPickupItem(class ARespawnablePickup* RespawnablePickup, bool bIsWeapon);

	bool IsWeaponEquipped();
	bool IsAiming();

	void PlayFireMontage(bool bAiming);
	void PlayReloadMontage();
	void PlayHitReactMontage();
	void PlayElimmedMontage();
	void PlayThrowGrenadeMontage();
	void PlaySwapWeaponMontage();
	
	virtual void OnRep_ReplicatedMovement() override;

	
	void Elim(bool bPlayerLeftGame);
	
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Elim(bool bPlayerLeftGame);

	virtual void Destroyed() override;

	UFUNCTION(BlueprintImplementableEvent)
	void ShowSniperScopeWidget(bool bShowScope);

	void UpdateHUDHealth();
	void UpdateHUDShield();
	void UpdateHUDAmmo();
	void UpdateHUDTeam(ETeam TeamToSet);
	
	void SpawnDefaultWeapon();

	
	UFUNCTION(Server, Reliable)
	void Server_LeaveGame();
	FOnLeftGame OnLeftGame;

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_GainedTheLead();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_LostTheLead();
	
	//HitBoxes For Server-side rewind
	//
	//

	UPROPERTY(EditAnywhere)
	UBoxComponent* head_box;
	
	UPROPERTY(EditAnywhere)
	UBoxComponent* pelvis_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* spine_02_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* spine_03_box;
	UPROPERTY(EditAnywhere)
	
	UBoxComponent* upperarm_l_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* upperarm_r_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* lowerarm_r_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* lowerarm_l_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* hand_l_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* hand_r_box;
	
	UPROPERTY(EditAnywhere)
	UBoxComponent* backpack_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* backpackBlanket_box;

	UPROPERTY(EditAnywhere) 
	UBoxComponent* thigh_l_box;
	UPROPERTY(EditAnywhere) 
	UBoxComponent* thigh_r_box;
	UPROPERTY(EditAnywhere) 
	UBoxComponent* calf_l_box;
	UPROPERTY(EditAnywhere) 
	UBoxComponent* calf_r_box;
	UPROPERTY(EditAnywhere)
	UBoxComponent* foot_l_box;
	UPROPERTY(EditAnywhere) 
	UBoxComponent* foot_r_box;

	UPROPERTY()
	TMap<FName, UBoxComponent*> HitCollisionBoxes;

	bool bFinishedSwapping = false; 

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void RotateInPlace(float DeltaTime);

	virtual void PostInitializeComponents() override;

private:
	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeapon* LastWeapon);

	UFUNCTION()
	void OnRep_OverlappingRespawnablePickUp(ARespawnablePickup* Pickup);

	void HideCharacterIfCameraClose();
	//Variables
	//
	//
private:
	UPROPERTY(VisibleAnywhere, Category = Camera)
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = HUD, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* OverheadWidget;

	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	AWeapon* OverlappingWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_OverlappingRespawnablePickUp)
	ARespawnablePickup* OverlappingPickup;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCombatComponent* CombatComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UBuffComponent* BuffComp;

	UPROPERTY(VisibleAnywhere)
	class ULagCompensationComponent* LagCompensation;

	UPROPERTY(EditAnywhere, Category = Combat)
	class UAnimMontage* FireRifleHipMontage;
	
	UPROPERTY(EditAnywhere, Category = Combat)
	class UAnimMontage* FireRifleAimMontage;

	
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ReloadMontage;
	
	UPROPERTY(EditAnywhere, Category = Combat)
	class UAnimMontage* HitReactMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ElimmedMontage;
	
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ThrowGrenadeMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* SwapWeaponMontage;
	

	float AO_Yaw;
	float AO_Pitch;
	float InterpAO_Yaw;

	FRotator StartingAimRotation;

	ETurningInPlace TurningInPlace;

	UPROPERTY(EditAnywhere)
	float CameraThreshold = 200.f;


	bool bRotateRootBone;
	float TurnTreshold = 0.5f;
	FRotator ProxiesRotationLastFrame;
	FRotator ProxiesRotationCurrentFrame;

	float proxy_Yaw;

	float TimeSinceLastMovementReplicated = 0;

	FTimerHandle ElimTimer;
	void OnElimTimerFinished();

	UPROPERTY(EditDefaultsOnly)
	float ElimDelay = 3.f;

	bool bLeftGame = false;


	
	//Dissolve Effect
	FOnTimelineFloat DissolveTrack;

	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* DissolveTimeline;

	UPROPERTY(EditAnywhere)
	UCurveFloat* DissolveCurve;

	UFUNCTION()
	void UpdateDissolveMaterial(float DissolveValue);
	void StartDissolve();


	//Elim
	
	//Dynamic Instance that we can change at the run time
	UPROPERTY(VisibleAnywhere, Category = "Elim")
	UMaterialInstanceDynamic* DynamicMaterialDissolveInstance;

	//Material instance that we set on the  bluepprint, used with the dynamic material instance
	UPROPERTY(VisibleAnywhere, Category = "Elim")
	UMaterialInstance* DissolvedMaterialInstance;

	//TeamColors
	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* RedMaterial;

	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* BlueMaterial;
	
	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* OriginalMaterial;
	
	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* RedDissolveMatInst;

	UPROPERTY(EditAnywhere, Category = "Elim")
	UMaterialInstance* BlueDissolveMatInst;
	

	UPROPERTY(EditAnywhere, Category = "Elim")
	UParticleSystem* ElimBotEffect;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ElimBotComponent;

	UPROPERTY(EditAnywhere, Category = "Elim")
	USoundCue* ElimBotSound;

	//CrownNiagara
	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CrownSystem;

	UPROPERTY()
	UNiagaraComponent* CrownComponent;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AttachedGrenade;
	
public:
	
	void SetTeamColor(ETeam Team);
protected:
	//functions
	//
	//
	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatorController, AActor* DamageCauser);
	
private:
	//RPC For clients that want to equip a weapon
	UFUNCTION(Server, Reliable)
	void Server_EquipButtonPressed();


	//Health
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	float MaxHealth = 100.f;

	UPROPERTY()
	ABlasterPlayerController* BlasterPlayerController;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth, VisibleAnywhere, Category = "Player Stats")
	float CurrentHealth = 100.f;

	UFUNCTION()
	void OnRep_CurrentHealth(float LastHealth);

	bool bEliminated = false;
	
	//Shield
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	float MaxShield = 100.f;
	
	UPROPERTY(ReplicatedUsing = OnRep_CurrentShield, EditAnywhere, Category = "Player Stats")
	float CurrentShield = 0.f;

	UFUNCTION()
	void OnRep_CurrentShield(float LastShield);

	//DefaultWeapon
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AWeapon> DefaultWeaponClass;

	UPROPERTY()
	class ABlasterGameMode* BlasterGameMode;

public:
	ABlasterPlayerState* PlayerState;

	UPROPERTY(Replicated)
	bool bDisableGameplay = false;
	
	//Poll for any relevant classes and initilize HUD
	void PollInit();

	void ActivateOverheadWidget();

protected:
	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void CalculateAO_Pitch();
	void EquipButtonPressed();
	void CrouchButtonPressed();
	void AimButtonPressed();
	void AimButtonReleased();
	void FireButtonPressed();
	void FireButtonReleased();
	void ReloadButtonPressed();
	void AimOffset(float DeltaTime);
	void TurnInPlace(float DeltaTime);
	void SimProxiesTurn();
	void GrenadeButtonPressed();
	virtual void Jump() override;

	

	void SetSpawnPoint();
	void OnPlayerStateInitialized();
	
	//Setters
public:
	FORCEINLINE float GetAO_Yaw() const {return AO_Yaw;}
	FORCEINLINE float GetAO_Pitch() const {return AO_Pitch;}
	FORCEINLINE ETurningInPlace GetTurningInPlace() const {return TurningInPlace;}
	FORCEINLINE UCameraComponent* GetFollowCamera() const {return Camera;}
	FORCEINLINE bool ShouldRotateRootBone() const {return bRotateRootBone;}
	FORCEINLINE bool IsEliminated() const {return bEliminated;}
	FORCEINLINE float GetCurrentHealth() const {return CurrentHealth;}
	FORCEINLINE float GetCurrentShield() const {return CurrentShield;}
	FORCEINLINE float GetMaxHealth() const {return MaxHealth;}
	FORCEINLINE float GetMaxShield() const {return MaxShield;}
	FORCEINLINE void SetHealth(float Amount) {CurrentHealth = Amount;}
	FORCEINLINE void SetShield(float Amount) {CurrentShield = Amount;}
	FORCEINLINE UCombatComponent* GetCombatComponent() const {return CombatComp;}
	FORCEINLINE bool GetDisableGameplay() const {return bDisableGameplay;}
	FORCEINLINE UAnimMontage* GetReloadMontage() const {return ReloadMontage;}
	FORCEINLINE UStaticMeshComponent* GetAttachedGrenade() const {return AttachedGrenade;}
	FORCEINLINE UBuffComponent* GetBuffComponent() const {return BuffComp;}
	FORCEINLINE ULagCompensationComponent* GetLapComp() const {return LagCompensation;}
	FORCEINLINE UWidgetComponent* GetOverheadWidget() const {return OverheadWidget;}
	FORCEINLINE bool IsHoldingAFlag() const;
	void SetHoldingTheFlag(bool bHolding);
	bool IsLocallyReloading();
	ETeam GetTeam();
	
	
	ECombatState GetCombatState() const ;
	FVector GetHitTarget() const;
	AWeapon* GetEquippedWeapon();
	AWeapon* GetSecondaryWeapon();	
	AWeapon* GetFlag();
};
