// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "AnotherIShoot/Weapon/Weapon.h"
#include "AmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API AAmmoPickup : public APickup
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	UPROPERTY(EditAnywhere, Category = "Ammo Properties")
	int32 AmmoAmmount = 30;

	UPROPERTY(EditAnywhere, Category = "Ammo Properties")
	EWeaponType AmmoWeaponType;
};
