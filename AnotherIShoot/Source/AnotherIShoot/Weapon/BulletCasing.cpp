// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletCasing.h"

#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

// Sets default values
ABulletCasing::ABulletCasing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CasingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Casing Mesh"));
	SetRootComponent(CasingMesh);

	CasingMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	CasingMesh->SetSimulatePhysics(true);
	CasingMesh->SetEnableGravity(true);
	CasingMesh->SetNotifyRigidBodyCollision(true);
	
	CasingEjectSpeed = 1000.f;

	InitialLifeSpan = 5.f;

	isPlayed = false;
}	

// Called when the game starts or when spawned
void ABulletCasing::BeginPlay()
{
	Super::BeginPlay();

	CasingMesh->AddImpulse(GetActorForwardVector() *  CasingEjectSpeed);
	CasingMesh->OnComponentHit.AddDynamic(this, &ABulletCasing::OnHit);
}

void ABulletCasing::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& HitResult)
{
	if(CasingSound && !isPlayed)
	{
		isPlayed = true;
		UGameplayStatics::PlaySoundAtLocation(this, CasingSound,GetActorLocation());
	}

	CasingMesh->OnComponentHit.RemoveDynamic(this, &ABulletCasing::OnHit );
}


