// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "HitScanWeapon.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API AHitScanWeapon : public AWeapon
{
	GENERATED_BODY()

public:
	virtual void Fire(const FVector HitTarget) override;
	
protected:
	
	void WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHit);

	
protected:


	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactParticles;
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* BeamParticles;
	

	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
	class USoundCue* FireSound;

	UPROPERTY(EditAnywhere)
	class USoundCue* HitSound;

	//
	//Trace end with Scatetr
	//
	
	
	


	
};
