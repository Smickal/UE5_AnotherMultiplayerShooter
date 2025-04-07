// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "ShieldPickup.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API AShieldPickup : public APickup
{
	GENERATED_BODY()


public:
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

protected:
	
	UPROPERTY(EditAnywhere)
	float ShieldRecoverAmount = 50.f;

	UPROPERTY(EditAnywhere)
	float ShieldRecoveryTime = 0.5f;
};
