// Fill out your copyright notice in the Description page of Project Settings.


#include "ShieldPickup.h"

#include "AnotherIShoot/BlasterComponent/BuffComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"

void AShieldPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
                                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, AnotherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(AnotherActor);
	if(BlasterCharacter)
	{
		UBuffComponent* BuffComponent = BlasterCharacter->GetBuffComponent();
		if(BuffComponent)
		{
			BuffComponent->RecoverShield(ShieldRecoverAmount, ShieldRecoveryTime);
		}
		
	}

	Destroy();
}
