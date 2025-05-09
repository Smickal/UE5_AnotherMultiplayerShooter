// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Flag.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERISHOOT_API AFlag : public AWeapon
{
	GENERATED_BODY()
public:
	AFlag();

	virtual void Dropped() override;
	void ResetFlag();

protected:
	virtual void BeginPlay() override;
	
	virtual void OnEquipHandleState() override;
	virtual void OnDropHandleState() override;
private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FlagMesh;

	FTransform InitialTransform;

public:

	FORCEINLINE FTransform GetInitialTransform() const {return InitialTransform;}
};
