// Fill out your copyright notice in the Description page of Project Settings.


#include "RespawnablePickup.h"

#include "Pickup.h"
#include "PickupSpawnPoint.h"
#include "AnotherIShoot/HUD/RadialCooldown.h"
#include "AnotherIShoot/Weapon/Weapon.h"
#include "TimerManager.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "Components/RadialSlider.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

void ARespawnablePickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ARespawnablePickup, SpawnTime);
}

// Sets default values
ARespawnablePickup::ARespawnablePickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Component"));
	SetRootComponent(SphereComponent);

	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Component"));
	WidgetComponent->SetupAttachment(GetRootComponent());
}


// Called when the game starts or when spawned
void ARespawnablePickup::BeginPlay()
{
	Super::BeginPlay();

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ARespawnablePickup::OnSphereOverlap);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &ARespawnablePickup::OnSphereEndOverlap);

	if(WidgetComponent)
	{
		RadialCooldownWidget = Cast<URadialCooldown>(WidgetComponent->GetUserWidgetObject());
	}
	WidgetComponent->SetVisibility(false);

	//Spawn initial weapon/item
	SpawnPickUpTimerFinished();
}


// Called every frame
void ARespawnablePickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(bIsTimerStart)
	{
		if(WidgetComponent && RadialCooldownWidget)
		{
			float currentTime = GetWorldTimerManager().GetTimerElapsed(SpawnPickupTimer);
			RadialCooldownWidget->RadialSlider->SetValue(currentTime / SpawnTime);
		}
	}
}

void ARespawnablePickup::SetRadialVisibility(bool bActivated)
{
	if(WidgetComponent)
	{
		WidgetComponent->SetVisibility(bActivated);
	}
}



void ARespawnablePickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
                                         UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(!bIsTimerStart) return;
	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(AnotherActor);
	if(BlasterCharacter)
	{
		BlasterCharacter->SetOverlappingPickupItem(this, bIsWeaponPickup);
	}
}

void ARespawnablePickup::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(AnotherActor);
	if(BlasterCharacter)
	{
		BlasterCharacter->SetOverlappingPickupItem(nullptr, bIsWeaponPickup);
	}
}


void ARespawnablePickup::SpawnPickup()
{
	int32 NumPickupClass = PickupWeaponClasses.Num();
	if(NumPickupClass > 0)
	{
		int32 Selection = FMath::RandRange(0, NumPickupClass - 1);
		
		SpawnedPickup = GetWorld()->SpawnActor<AWeapon>(PickupWeaponClasses[Selection], GetActorTransform());

		if(HasAuthority() && SpawnedPickup)
		{
			SpawnedPickup->PickUpDelegate.AddDynamic(this, &ARespawnablePickup::StartSpawnPickUpTimer);
		}

		
		

	}
}

void ARespawnablePickup::StartSpawnPickUpTimer()
{
	SpawnTime = FMath::RandRange(SpawnPickupTimeMin, SpawnPickupTimeMax);

	bIsTimerStart = true;
	GetWorldTimerManager().SetTimer(
			SpawnPickupTimer,
			this,
			&ARespawnablePickup::SpawnPickUpTimerFinished,
			SpawnTime
			);
	RadialCooldownWidget->RadialSlider->SetValue(0.f);
	
	//Enable when TimerStart
	TArray<AActor*> ActorsOverlaping;
	SphereComponent->GetOverlappingActors(ActorsOverlaping);
	for (auto Overlaping : ActorsOverlaping)
	{
		ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(Overlaping);
		if(BlasterCharacter && BlasterCharacter->IsLocallyControlled())
		{
			BlasterCharacter->SetOverlappingPickupItem(this, bIsWeaponPickup);
		}
	}
}

void ARespawnablePickup::OnRep_SpawnTime()
{
	if(HasAuthority()) return;

	bIsTimerStart = true;
	
	GetWorldTimerManager().SetTimer(
			SpawnPickupTimer,
			this,
			&ARespawnablePickup::SpawnPickUpTimerFinished,
			SpawnTime
			);

	//Enable when TimerStart
	TArray<AActor*> ActorsOverlaping;
	SphereComponent->GetOverlappingActors(ActorsOverlaping);
	for (auto Overlaping : ActorsOverlaping)
	{
		ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(Overlaping);
		if(BlasterCharacter && BlasterCharacter->IsLocallyControlled())
		{
			BlasterCharacter->SetOverlappingPickupItem(this, bIsWeaponPickup);
		}
	}
}


void ARespawnablePickup::Multicast_SetTimer_Implementation(float Timer)
{
	
}

void ARespawnablePickup::SpawnPickUpTimerFinished()
{
	if(HasAuthority())
	{
		SpawnPickup();
	}
	bIsTimerStart = false;
	
	//Enable when TimerStop
	TArray<AActor*> ActorsOverlaping;
	SphereComponent->GetOverlappingActors(ActorsOverlaping);
	for (auto Overlaping : ActorsOverlaping)
	{
			
		ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(Overlaping);
		if(BlasterCharacter && BlasterCharacter->IsLocallyControlled())
		{
			BlasterCharacter->SetOverlappingPickupItem(nullptr, bIsWeaponPickup);
		}
	}
}