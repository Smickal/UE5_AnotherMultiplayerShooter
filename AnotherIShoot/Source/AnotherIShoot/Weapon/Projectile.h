// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "Projectile.generated.h"

class ABlasterCharacter;

UCLASS()
class ANOTHERISHOOT_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Destroyed() override;

	UFUNCTION(NetMulticast, Reliable)
	void Server_PlayParticleAndSound(ABlasterCharacter* Character);


	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& HitResult);

	void PlayParticleAndSound(ABlasterCharacter* Character);



	UPROPERTY()
	ABlasterCharacter* OnHitPlayerCharacter;
	
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* TrailSystem;

	UPROPERTY()
	UNiagaraComponent* TrailSystemComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ProjectileMesh;
	
	void SpawnTrailSystem();

	UFUNCTION()
	virtual void OnDestroyTimerFinished();

	virtual  void StartDestroyTimer();

	void ExplodeDamage();

	UPROPERTY(EditAnywhere)
	float DamageInnerRadius = 200.f;

	UPROPERTY(EditAnywhere)
	float DamageOuterRadius =500.f;
	
private:
	

	UPROPERTY(EditAnywhere)
	class UParticleSystem* Tracer;

	UPROPERTY()
	class UParticleSystemComponent* TracerComponent;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactParticles;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* BloodSpurtParticles;

	UPROPERTY(EditAnywhere)
	class USoundCue* ImpactSound;

	UPROPERTY(EditAnywhere)
	USoundCue* BloodSound;

	FTimerHandle DestroyTimerHandle;

	UPROPERTY(EditAnywhere)
	float DestroyTime = 3.f;

public:
	//Use with server side rewind
	bool bUseServerSideRewind = false;
	FVector_NetQuantize TraceStart;
	FVector_NetQuantize100 InitialVelocity;

	UPROPERTY(EditAnywhere)
	float InitialSpeed = 15000.f;

	//Only Set this for Grenades, Rocket
	UPROPERTY(EditAnywhere)
	float Damage = 20.f;

	//Doesn't matter for grenades and rockets
	UPROPERTY(EditAnywhere)
	float HeadShotDamage = 40.f;
	
	
};
