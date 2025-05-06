// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagZone.h"

#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/Gamemode/CaptureTheFlagGameMode.h"
#include "AnotherIShoot/Weapon/Flag.h"
#include "Components/SphereComponent.h"


AFlagZone::AFlagZone()
{
	PrimaryActorTick.bCanEverTick = false;

	ZoneSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Flag Capture Zone"));
	SetRootComponent(ZoneSphere);

	SphereZoneRadius = ZoneSphere->GetUnscaledSphereRadius();
}

#if WITH_EDITOR
void AFlagZone::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = PropertyChangedEvent.Property != nullptr ? PropertyChangedEvent.GetPropertyName() : NAME_None;
	if(PropertyName == GET_MEMBER_NAME_CHECKED(AFlagZone, SphereZoneRadius))
	{
		if(ZoneSphere)
		{
			ZoneSphere->SetSphereRadius(SphereZoneRadius);
		}
	}
	
}
#endif

void AFlagZone::BeginPlay()
{
	Super::BeginPlay();

	ZoneSphere->OnComponentBeginOverlap.AddDynamic(this, &AFlagZone::OnSphereOverlap); 
}

void AFlagZone::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFlag* OverlappingFlag = Cast<AFlag>(AnotherActor);
	if(OverlappingFlag && OverlappingFlag->GetTeam() != TeamZone)
	{
		ACaptureTheFlagGameMode* GameMode =  GetWorld()->GetAuthGameMode<ACaptureTheFlagGameMode>();
		if(GameMode)
		{
			GameMode->FlagCaptured(OverlappingFlag, this);
			

			OverlappingFlag->ResetFlag();
			
		}
	}
}


void AFlagZone::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}

