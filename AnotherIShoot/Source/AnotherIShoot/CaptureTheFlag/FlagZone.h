// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnotherIShoot/BlasterTypes/Team.h"
#include "GameFramework/Actor.h"
#include "FlagZone.generated.h"

class USphereComponent;

UCLASS()
class ANOTHERISHOOT_API AFlagZone : public AActor
{
	GENERATED_BODY()
	
public:	
	AFlagZone();
	
	UPROPERTY(EditAnywhere)
	ETeam TeamZone = ETeam::ET_NoTeam;

protected:
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

private:
	UPROPERTY(EditAnywhere)
	USphereComponent* ZoneSphere;


};
