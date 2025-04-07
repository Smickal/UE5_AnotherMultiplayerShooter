// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedPickup.h"

#include "AnotherIShoot/BlasterComponent/BuffComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"

class UBuffComponent;
class ABlasterCharacter;

void ASpeedPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, AnotherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(AnotherActor);
	if(BlasterCharacter)
	{
		UBuffComponent* buff = BlasterCharacter->GetBuffComponent();

		if(buff)
		{
			buff->BuffSpeed(BaseSpeedBuff, CrouchSpeedBuff, SpeedBuffTime);
		}
	}

	Destroy();
}
