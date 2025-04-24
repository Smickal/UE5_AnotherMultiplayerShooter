// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "ProjectileGrenade.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API AProjectileGrenade : public AProjectile
{
	GENERATED_BODY()


public:
	AProjectileGrenade();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere)
	class UProjectileMovementComponent* ProjectileMovementComponent;

	UFUNCTION()
	void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);

	virtual void Destroyed() override;

	virtual void DisableCollisionAFewSecondAfterThrow();

	UFUNCTION()
	virtual void OnTimerHandleEnd();
private:

	UPROPERTY(EditAnywhere)
	class USoundCue* BounceSound;


	UPROPERTY(EditAnywhere)
	float TimeToEnableCollision = 0.1f;

	FTimerHandle EnableCollisiontimerHandle;
};
