// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RespawnablePickup.generated.h"

class URadialCooldown;
class UWidgetComponent;
class USphereComponent;
class AWeapon;

UCLASS()
class ANOTHERISHOOT_API ARespawnablePickup : public AActor
{
	GENERATED_BODY()
	
public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	// Sets default values for this actor's properties
	ARespawnablePickup();

	void SpawnPickup();

	UFUNCTION()
	void StartSpawnPickUpTimer();

	UFUNCTION()
	void SpawnPickUpTimerFinished();

	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComponent;

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
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	bool bIsWeaponPickup = true;
	
	UPROPERTY(EditAnywhere)
	TArray <TSubclassOf<AWeapon>> PickupWeaponClasses;
	
	UPROPERTY(EditAnywhere)
	TArray <TSubclassOf<AWeapon>> PickUpBuffClassess;
	
	UPROPERTY()
	AWeapon* SpawnedPickup;
	
	UPROPERTY(EditAnywhere)
	float TimeToSpawnAfterPickUp = 5.f;
	
	FTimerHandle SpawnPickupTimer;
	
	UPROPERTY(EditAnywhere)
	float SpawnPickupTimeMin = 0.1f;
	
	UPROPERTY(EditAnywhere)
	float SpawnPickupTimeMax = 1.f;

	UPROPERTY(VisibleAnywhere)
	UWidgetComponent* WidgetComponent;

	UPROPERTY()
	URadialCooldown* RadialCooldownWidget;
	
	bool bIsTimerStart = false;

	UFUNCTION()
	void OnRep_SpawnTime();
	
	UPROPERTY(ReplicatedUsing = OnRep_Spawntime)
	float SpawnTime;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetRadialVisibility(bool bActivated);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetTimer(float Timer);
};
