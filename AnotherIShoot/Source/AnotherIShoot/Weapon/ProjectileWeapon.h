// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "Weapon.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API AProjectileWeapon : public AWeapon
{
	GENERATED_BODY()
public:
	AProjectileWeapon();

	virtual void Fire(const FVector HitTarget) override;

protected:

	
private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> ProjectileClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> ServerSideRewind_ProjectileClass;
};
