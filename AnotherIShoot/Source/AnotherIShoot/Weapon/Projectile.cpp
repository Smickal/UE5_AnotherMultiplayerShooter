// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

#include "AnotherIShoot/AnotherIShoot.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "Particles/ParticleSystem.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Projectile Collision Box"));
	SetRootComponent(CollisionBox);
	CollisionBox->SetCollisionObjectType(ECC_WorldDynamic);
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	CollisionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	CollisionBox->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	CollisionBox->SetCollisionResponseToChannel(ECC_SkeletalMesh, ECR_Block);

	

	bReplicates = true;

	
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	if(Tracer)
	{
		TracerComponent = UGameplayStatics::SpawnEmitterAttached(Tracer, CollisionBox, FName(""), GetActorLocation(),
			GetActorRotation(), EAttachLocation::KeepWorldPosition);
	}

	//Bind hit events only on server
	if(CollisionBox && HasAuthority())
	{
		CollisionBox->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	}
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                        FVector NormalImpulse, const FHitResult& HitResult)
{
	OnHitPlayerCharacter = Cast<ABlasterCharacter>(OtherActor);
	
	Server_PlayParticleAndSound(OnHitPlayerCharacter);
	Destroy();
}

void AProjectile::PlayParticleAndSound(ABlasterCharacter* Character)
{
	if(Character != nullptr && BloodSpurtParticles && BloodSound)
	{
		if(BloodSpurtParticles)
		{
			//UNiagaraFunctionLibrary::SpawnSystemAttached(BloodSpurtParticles, GetRootComponent(), FName(""), GetActorLocation(), GetActorRotation(),
				//EAttachLocation::Type::SnapToTarget, true);
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), BloodSpurtParticles, GetActorLocation(), GetActorRotation() );
		}

		if(BloodSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, BloodSound, GetActorLocation());
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Play boom particles!"));
		if(ImpactParticles)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticles, GetActorTransform());
			
		}
		if(ImpactSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());
		}
	}

}

void AProjectile::SpawnTrailSystem()
{
	if(TrailSystem)
	{
		TrailSystemComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(TrailSystem,
			GetRootComponent(),
			FName(),
			GetActorLocation(),
			GetActorRotation(),
			EAttachLocation::Type::KeepWorldPosition,
			false);
	}
}

void AProjectile::ExplodeDamage()
{
	APawn* FiringPawn =  GetInstigator();
	
	if(FiringPawn && HasAuthority())
	{
		AController* FiringController = FiringPawn->GetController();
		if(FiringController)
		{
			UGameplayStatics::ApplyRadialDamageWithFalloff(
				this,
				Damage,
				Damage / 2.f,
				GetActorLocation(),
				DamageInnerRadius,
				DamageOuterRadius,
				1.f,
				UDamageType::StaticClass(),
				TArray<AActor*>(),
				this,
				FiringController);
			
		}
	}
}

void AProjectile::StartDestroyTimer()
{
	GetWorldTimerManager().SetTimer(
		DestroyTimerHandle,
		this,
		&AProjectile::OnDestroyTimerFinished,
		DestroyTime);
}


void AProjectile::OnDestroyTimerFinished()
{
	Destroy();
}

void AProjectile::Destroyed()
{
	Super::Destroyed();
}

void AProjectile::Server_PlayParticleAndSound_Implementation(ABlasterCharacter* Character)
{
	PlayParticleAndSound(Character);
}



