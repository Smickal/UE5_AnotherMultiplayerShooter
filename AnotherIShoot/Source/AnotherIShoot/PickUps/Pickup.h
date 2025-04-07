// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

class USphereComponent;

UCLASS()
class ANOTHERISHOOT_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	APickup();

	virtual void Destroyed() override;
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	

	UFUNCTION()
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* AnotherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);


	UPROPERTY(EditAnywhere)
	float BaseTurnRate = 45.f;

	UPROPERTY(VisibleAnywhere)
	class UNiagaraComponent* PickUpEffectComponent;
	
	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* PickupEffect;
	
private:
	UPROPERTY(EditAnywhere)
	USphereComponent* OverlapSphere;

	UPROPERTY(EditAnywhere)
	USoundCue* PickUpSound;
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* PickupMesh;

	FTimerHandle BindOverlapTimer;

	float BindOverlapTime = 0.25f;

	UFUNCTION()
	void BindOverlapTimeFinished();
	
public:	


	
};
