// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPickup.h"

#include "NiagaraFunctionLibrary.h"
#include "AnotherIShoot/BlasterComponent/BuffComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"

AHealthPickup::AHealthPickup()
{
	bReplicates = true;


}


void AHealthPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
                                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, AnotherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(AnotherActor);
	if(BlasterCharacter)
	{
		UBuffComponent* buff = BlasterCharacter->GetBuffComponent();

		if(buff)
		{
			buff->Heal(HealAmount, HealingTime);
		}
	}


	Destroy();
}

void AHealthPickup::Destroyed()
{

	
	
		
	Super::Destroyed();
}
