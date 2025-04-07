// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoPickup.h"

#include "AnotherIShoot/BlasterComponent/CombatComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"

void AAmmoPickup::BeginPlay()
{
	Super::BeginPlay();

	
}

void AAmmoPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, AnotherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(AnotherActor);
	if(BlasterCharacter)
	{
		UCombatComponent* Combat = BlasterCharacter->GetCombatComponent();
		if(Combat)
		{
			Combat->PickUpAmmo(AmmoWeaponType, AmmoAmmount);
		}
	}

	Destroy();
}
