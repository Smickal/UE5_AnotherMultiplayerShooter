// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBullet.h"

#include "AnotherIShoot/BlasterComponent/LagCompensationComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"


AProjectileBullet::AProjectileBullet()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->SetIsReplicated(true);
	ProjectileMovementComponent->InitialSpeed = InitialSpeed;
	ProjectileMovementComponent->MaxSpeed = InitialSpeed;
}

#if WITH_EDITOR
void AProjectileBullet::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = PropertyChangedEvent.Property != nullptr ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if(PropertyName == GET_MEMBER_NAME_CHECKED(AProjectileBullet, InitialSpeed))
	{
		if(ProjectileMovementComponent)
		{
			ProjectileMovementComponent->InitialSpeed = InitialSpeed;
			ProjectileMovementComponent->MaxSpeed = InitialSpeed;
		}
	}
}
#endif

void AProjectileBullet::BeginPlay()
{
	Super::BeginPlay();
	
	// FPredictProjectilePathParams PathParams;
	// PathParams.bTraceWithChannel = true;
	// PathParams.bTraceWithCollision = true;
	// PathParams.DrawDebugTime = 5.f;
	// PathParams.DrawDebugType = EDrawDebugTrace::ForDuration;
	// PathParams.LaunchVelocity = GetActorForwardVector() * InitialSpeed;
	// PathParams.MaxSimTime = 4.f;
	// PathParams.ProjectileRadius = 5.f;
	// PathParams.SimFrequency = 30.f;
	// PathParams.StartLocation = GetActorLocation();
	// PathParams.TraceChannel = ECC_Visibility;
	// PathParams.ActorsToIgnore.Add(this);
	//
	// FPredictProjectilePathResult PathResult;
	//
	// UGameplayStatics::PredictProjectilePath(this, PathParams, PathResult);
}


void AProjectileBullet::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                              FVector NormalImpulse, const FHitResult& HitResult)
{
	ABlasterCharacter* OwnerCharacter =  Cast<ABlasterCharacter>(GetOwner());
	if(OwnerCharacter)
	{
		ABlasterPlayerController* OwnerController = Cast<ABlasterPlayerController>(OwnerCharacter->GetController());
		if(OwnerController)
		{
			if(OwnerCharacter->HasAuthority() && !bUseServerSideRewind)
			{
				UGameplayStatics::ApplyDamage(OtherActor, Damage, OwnerController, this, UDamageType::StaticClass());
				Super::OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, HitResult);
				return;
			}

			if(bUseServerSideRewind && OwnerCharacter->GetLapComp() && OwnerCharacter->IsLocallyControlled())
			{
				ABlasterCharacter* HitCharacter = Cast<ABlasterCharacter>(OtherActor);
				if(HitCharacter)
				{
					OwnerCharacter->GetLapComp()->Server_ProjectileScoreRequest(
						HitCharacter,
						TraceStart,
						InitialVelocity,
						OwnerController->GetServerTime() - OwnerController->SingleTripTime);
				}
			}
			
		}
		
	}
	
	

	Super::OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, HitResult);
}


