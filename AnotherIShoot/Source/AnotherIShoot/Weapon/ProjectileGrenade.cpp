// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileGrenade.h"

#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

AProjectileGrenade::AProjectileGrenade()
{
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Grenade Mesh"));
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->SetIsReplicated(true);
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->InitialSpeed = InitialSpeed;
	ProjectileMovementComponent->MaxSpeed = InitialSpeed;
}

#if WITH_EDITOR
void AProjectileGrenade::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = PropertyChangedEvent.Property != nullptr ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	if(PropertyName == GET_MEMBER_NAME_CHECKED(AProjectileGrenade, InitialSpeed))
	{
		if(ProjectileMovementComponent)
		{
			ProjectileMovementComponent->InitialSpeed = InitialSpeed;
			ProjectileMovementComponent->MaxSpeed = InitialSpeed;
		}
	}
}
#endif
void AProjectileGrenade::BeginPlay()
{
	AActor::BeginPlay();
	DisableCollisionAFewSecondAfterThrow();

	
	StartDestroyTimer();
	SpawnTrailSystem();
	ProjectileMovementComponent->OnProjectileBounce.AddDynamic(this, &AProjectileGrenade::OnBounce);
}

void AProjectileGrenade::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
	if(BounceSound)
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			BounceSound,
			GetActorLocation());
	}
}

void AProjectileGrenade::Destroyed()
{
	ExplodeDamage();

	PlayParticleAndSound(nullptr);
	
	Super::Destroyed();
}

void AProjectileGrenade::DisableCollisionAFewSecondAfterThrow()
{
	if(HasAuthority())
	{
		CollisionBox->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
		GetWorldTimerManager().SetTimer(
			EnableCollisiontimerHandle,
			this,
			&AProjectileGrenade::OnTimerHandleEnd,
			TimeToEnableCollision
			);
	}
}

void AProjectileGrenade::OnTimerHandleEnd()
{
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);	
}

