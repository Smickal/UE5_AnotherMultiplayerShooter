// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletCasing.generated.h"

UCLASS()
class ANOTHERISHOOT_API ABulletCasing : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABulletCasing();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& HitResult);

private:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* CasingMesh;

	UPROPERTY(EditAnywhere)
	float CasingEjectSpeed;

	UPROPERTY(EditAnywhere)
	class USoundCue* CasingSound;

	bool isPlayed;
};
