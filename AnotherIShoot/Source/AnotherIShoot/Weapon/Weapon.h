// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponTypes.h"
#include "AnotherIShoot/BlasterTypes/Team.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

enum class EWeaponType : uint8;
class ABulletCasing;

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	EWS_InitialState UMETA(DisplayName = "InitialState"),
	EWS_Equipped UMETA(DisplayName = "Equipped"),
	EWS_Secondary UMETA(DisplayName = "Equipped Secondary"),
	EWS_Dropped UMETA(DisplayName = "Dropped"),

	EWS_MAX UMETA(DisplaName = "Default_MAX")
};


UENUM(BlueprintType)
enum class EFireType: uint8
{
	EFT_HitScan UMETA(DisplayName = "Hitscan Weapon"),
	EFT_Projectile UMETA(DisplayName = "Projectile Weapon"),
	EFT_Shotgun UMETA(DisplayName = "Shotgun Weapon"),

	EFT_DefaultMAX UMETA(DisplayName = "Default_Max")
};

UCLASS()
class ANOTHERISHOOT_API AWeapon : public AActor
{
	GENERATED_BODY()

	//functioms
public:	
	// Sets default values for this actor's properties
	AWeapon();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ShowPickUpWidget(bool bShowWidget);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual  void OnRep_Owner() override;
	void SetHUDAmmo();
	void SetWeaponState(EWeaponState State);

	virtual void Fire(const FVector HitTarget);

	virtual void Dropped();

	void SpendRound();
	void AddAmmo(int32 AmmoToAdd);

	//
	//Enable or Disable Custom Depth
	//
	void EnableCustomDepth(bool bEnable);

	FVector TraceEndWithScatter(const FVector& HitTarget);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* AnotherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	virtual  void OnSphereEndOverlap(
		UPrimitiveComponent* OverlappedComponent,
	AActor* AnotherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex);

	UFUNCTION()
	void OnRep_WeaponStateChange();
	

	UPROPERTY(EditAnywhere, Category = "WeaponScatter")
	float DistanceToSphere = 800.f;

	UPROPERTY(EditAnywhere, Category = "WeaponScatter")
	float SphereRadius = 75.f;

	UFUNCTION(Client, Reliable)
	void Client_UpdateAmmo(int32 ServerAmmo);

	UFUNCTION(Client, Reliable)
	void Client_AddAmmo(int32 AmmoToAdd);

	//The  Number of un-processed server request for ammo,
	//Increment in in spendround, decrement it on Client_Spendround
	int32 Sequence = 0;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	float Damage = 20.f;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	float HeadShotDamage = 40.f;

	UPROPERTY(EditAnywhere, Replicated)
	bool bUseServerSideRewind = false;

	UPROPERTY()
	class ABlasterCharacter* BlasterOwnerCharacter;
	
	UPROPERTY()
	class ABlasterPlayerController* BlasterOwnerController;

	UFUNCTION()
	void OnPingTooHigh(bool bPingTooHigh);

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	ETeam Team;

	UPROPERTY(EditAnywhere, Category = "WeaponProperties")
	float TimeToDissolveWeaponAfterDropped = 5.f;

	FTimerHandle WeaponDissolveTHandler;

	UFUNCTION()
	void OnTimerWeaponDissolveEnd();
public:
	//Variables
	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	EWeaponType WeaponType = EWeaponType::EWT_AssaultRifle;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	FString WeaponName;
	
	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	USphereComponent* AreaSphere;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	UWidgetComponent* PickUpWidget;
	
	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties", ReplicatedUsing = OnRep_WeaponStateChange)
	EWeaponState WeaponState;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	UAnimationAsset* FireAnimation;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	TSubclassOf<ABulletCasing> CasingClass;
	
	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	float FireTimerDelay = 0.15f;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	bool bIsWeaponAutomatic = true;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	USoundCue* EquipSound;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	UTexture2D* WeaponTypeTexture;
	//Public setter/Getter
public:
	FORCEINLINE USphereComponent* GetSphereComponent ()const {return AreaSphere;}
	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() const {return WeaponMesh;}
	FORCEINLINE UTexture2D* GetWeaponTexture() const {return  WeaponTypeTexture;}
	
	//Textures of the crosshairs
	UPROPERTY(EditAnywhere, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	UTexture2D* CrosshairCenter;

	UPROPERTY(EditAnywhere, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	UTexture2D* CrosshairLeft;
	
	UPROPERTY(EditAnywhere, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	UTexture2D* CrosshairRight;
	
	UPROPERTY(EditAnywhere, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	UTexture2D* CrosshairTop;
	
	UPROPERTY(EditAnywhere, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	UTexture2D* CrosshairBottom;


	//Zoom FOV while Aiming
	UPROPERTY(EditAnywhere)
	float ZoomedFOV = 30.f;

	UPROPERTY(EditAnywhere)
	float ZoomInterpSpeed = 20.f;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties" )
	EFireType FireType;

	UPROPERTY(EditAnywhere, Category = "WeaponScatter")
	bool bUseScatter = false;

private:
	UPROPERTY(EditAnywhere, Category = "Ammo")
	int32 Ammo;
	
	UPROPERTY(EditAnywhere, Category = "Ammo")
	int32 MagCapacity;


public:
	FORCEINLINE float GetZoomedFOV() const {return ZoomedFOV;}
	FORCEINLINE float GetZoomInterpSpeed() const {return ZoomInterpSpeed;}
	FORCEINLINE EWeaponType GetWeaponType() const {return WeaponType;}
	FORCEINLINE int32 GetCurrentAmmo() const {return Ammo;}
	FORCEINLINE int32 GetMagCapacity() const {return MagCapacity;}
	FORCEINLINE float GetDamage() const {return Damage;}
	FORCEINLINE float GetHeadShotDamage() const {return HeadShotDamage;}
	FORCEINLINE UWidgetComponent* GetPickUpWidget() const {return PickUpWidget;}
	FORCEINLINE ETeam GetTeam() const {return  Team;}
	bool IsEmpty();
	bool IsFull();

protected:
	virtual void OnWeaponStateSet();
	virtual void OnEquipHandleState();
	virtual void OnDropHandleState();
	virtual void OnEquipSecondaryHandleState();
};
