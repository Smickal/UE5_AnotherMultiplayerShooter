// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnotherIShoot/BlasterTypes/CombatState.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/HUD/BlasterHUD.h"
#include "AnotherIShoot/Weapon/Weapon.h"
#include "AnotherIShoot/Weapon/WeaponTypes.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"



class ABlasterHUD;
class ABlasterPlayerController;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANOTHERISHOOT_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	friend class ABlasterCharacter;
	
	// Sets default values for this component's properties
	UCombatComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	void EquipWeapon(AWeapon* WeaponToEquip);
	void SwapWeapon();
	
	void Reload();

	UFUNCTION(Server, Reliable)
	void Server_Reload();

	void UpdateAmmoValues();
	void UpdateShotgunAmmoValues();
	void HandleReload();
	
	UFUNCTION(BlueprintCallable)
	void FinishReloading();

	UFUNCTION(BlueprintCallable)
	void FinishedSwap();

	UFUNCTION(BlueprintCallable)
	void FinishSwapAttachWeapon();
	
	void FireButtonPressed(bool bIsPressed);

	void ResetGrenadeCarried();

	void PickUpAmmo(EWeaponType WeaponType, int32 AmmoAmmount);
	void LocalFire(const FVector_NetQuantize& TraceHitTarget);
	void LocalShotgunFire(const TArray<FVector_NetQuantize>&  TraceHitTargets);
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void SetAiming(bool bAiming);

	UFUNCTION(Server, Reliable)
	void Server_SetAiming(bool bAiming);
	//Variables
	UFUNCTION()
	void OnRep_EquippedWeapon();
	
	UFUNCTION()
	void OnRep_SecondaryWeapon();

	UFUNCTION()
	void OnRep_Flag();
	
	void Fire();
	void FireProjectileWeapon();
	void FireHitScanWeapon();
	void FireShotgunWeapon();

	UFUNCTION()
	void OnRep_Aiming();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Fire(const FVector_NetQuantize& TraceHitTarget, float FireDelay);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Fire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

	void LineTraceUnderCrosshair(FHitResult& HitResult);

	void SetHUDCrosshair(float DeltaTime);

	void InterpFOV(float DeltaTime);

	void StartFireTimer();
	
	void FireTimerFinished();
	void ReloadEmptyWeapon();
	void PlayEquipWeaponSound(AWeapon* Weapon);
	void UpdateCarriedAmmo();
	
	void AttachAnActorToRightHand(AActor* ActorToAttach);
	void AttachAnActorToLeftHand(AActor* ActorToAttach);
	void AttachAnActorToBackpack(AActor* ActorToAttach);
	void AttachFlagToLeftHand(AWeapon* FlagToAttach);
	
	void DropEquippedWeapon();
	void ShowAttachedGrenade(bool bShowGrenade);
	
	
	bool CanFire();


	UFUNCTION()
	void OnRep_CarriedAmmo();

	int32 AmountToReload();

	void ThrowGrenade();

	UFUNCTION(Server, Reliable)
	void Server_ThrowGrenade();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectile> GrenadeClass;
public:
	UFUNCTION(BlueprintCallable)
	void ShotgunShellReload();

	void JumpToShotgunEndMontageSection();

	UFUNCTION(BlueprintCallable)
	void ThrowGrenadeFinished();

	UFUNCTION(BlueprintCallable)
	void LaunchGrenade();

	UFUNCTION(Server, Reliable)
	void Server_LaunchGrenade(const FVector_NetQuantize Target);

	bool bIsLocallyReloading = false;

private:
	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AWeapon* EquippedWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_SecondaryWeapon)
	AWeapon* SecondaryWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_Flag)
	AWeapon* Flag;
		
	UPROPERTY()
	ABlasterCharacter* PlayerCharacter;
	UPROPERTY()
	ABlasterPlayerController* PlayerController;
	UPROPERTY()
	ABlasterHUD* HUD;

	UPROPERTY(ReplicatedUsing = OnRep_Aiming, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsAiming = false;

	bool bLocalAimButtonPressed = false;

	UPROPERTY(EditAnywhere)
	float BaseWalkSpeed;
	
	UPROPERTY(EditAnywhere)
	float AimWalkSpeed;

	bool bIsFireButtonPressed;

	//HUD AND CROSSHAIRS
	float CrosshairVelocityFactor;
	float CrosshairInAirFactor;
	float CrosshairAimFactor;
	float CrosshairShootingFactor;
	float CrosshairAimAtEnemyFactor;

	FVector HitTarget;

	//Aiming and FOV

	//FOV when not aiming, set to the camera base FOV at begin play
	float DefaultFOV;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float ZoomedFOV = 30.f;

	float CurrentFOV;
	
	UPROPERTY(EditAnywhere, Category = "Combat")
	float ZoomInterpSped = 20.f;

	FHUDPackage Package;

	//
	//Automatic FIre
	//

	FTimerHandle FireTimer;

	bool bCanFire = true;

	//Carried ammo for the currently Equipped Weapon
	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo)
	int32 CarriedAmmo;

	TMap<EWeaponType, int32> CarriedAmmoMap;

	UPROPERTY(EditAnywhere)
	int32 StartingARAmmo = 60;
	
	UPROPERTY(EditAnywhere)
	int32 StartingRocketAmmo = 2;

	UPROPERTY(EditAnywhere)
	int32 StartingPistolAmmo = 45;
	
	UPROPERTY(EditAnywhere)
	int32 StartingSMGAmmo = 45;

	UPROPERTY(EditAnywhere)
	int32 StartingShotgunAmmo = 20;

	UPROPERTY(EditAnywhere)
	int32 StartingSniperAmmo = 10;
	
	UPROPERTY(EditAnywhere)
	int32 StartingGrenadeLauncherAmmo = 16;

	UPROPERTY(EditAnywhere)
	int32 MaxCarriedAmmo = 500;

	UPROPERTY(EditAnywhere)
	int32 MaxGrenade = 4;

	UPROPERTY(ReplicatedUsing = OnRep_Grenade)
	int32 CurrentGrenade = 4;

	UFUNCTION()
	void OnRep_Grenade();
	
	void InitializeCarriedAmmo();

	UPROPERTY(ReplicatedUsing =  OnRep_CombatState, VisibleAnywhere)
	ECombatState CombatState;

	UFUNCTION()
	void OnRep_CombatState();

	void UpdateHUDGrenade();

	UPROPERTY(ReplicatedUsing = OnRep_bCarryingFlag)
	bool bIsCarryingAFlag = false;

	
	UFUNCTION()
	void OnRep_bCarryingFlag();
protected:

	void EquipPrimaryWeapon(AWeapon* WeaponToEquip);
	void EquipSecondaryWeapon(AWeapon* WeaponToEquip);
	
public:
	FORCEINLINE int32 GetGrenades() const {return CurrentGrenade;}
	bool ShouldSwapWeapon();
};
