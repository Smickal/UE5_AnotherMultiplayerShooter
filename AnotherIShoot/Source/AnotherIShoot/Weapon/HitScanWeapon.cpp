// Fill out your copyright notice in the Description page of Project Settings.


#include "HitScanWeapon.h"

#include "AnotherIShoot/BlasterComponent/LagCompensationComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"

void AHitScanWeapon::Fire(const FVector HitTarget)
{
	Super::Fire(HitTarget);

	APawn* OwnerPawn = Cast<APawn>(GetOwner());

	AController* InstigatorController = OwnerPawn->GetController();
	
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");
	if(MuzzleFlashSocket)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());

		FVector Start = SocketTransform.GetLocation();
		
		FHitResult FireHit;
		WeaponTraceHit(Start, HitTarget, FireHit);
		
		UWorld* World = GetWorld();
		ABlasterCharacter* HitCharacter = Cast<ABlasterCharacter>(FireHit.GetActor());
		if(HitCharacter && InstigatorController)
		{
			bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
			if(HasAuthority() && bCauseAuthDamage)
			{
				const float DamageToCause =  FireHit.BoneName.ToString() == FString("head") ? HeadShotDamage : Damage;
				
				UGameplayStatics::ApplyDamage(
				HitCharacter,
				DamageToCause,
				InstigatorController,
				this,
				UDamageType::StaticClass());
			}
			
			if(!HasAuthority() && bUseServerSideRewind)
			{
				BlasterOwnerCharacter = BlasterOwnerCharacter == nullptr ? Cast<ABlasterCharacter>(OwnerPawn) : BlasterOwnerCharacter;
				BlasterOwnerController = BlasterOwnerController == nullptr ? Cast<ABlasterPlayerController>(InstigatorController) : BlasterOwnerController;

				if(BlasterOwnerCharacter && BlasterOwnerController && BlasterOwnerCharacter->GetLapComp() && BlasterOwnerCharacter->IsLocallyControlled())
				{
					BlasterOwnerCharacter->GetLapComp()->Server_ScoreRequest(
						HitCharacter,
						Start,
						FireHit.ImpactPoint,
						BlasterOwnerController->GetServerTime() - BlasterOwnerController->SingleTripTime
						);
				}
			}
			
				
		}
			
		if(ImpactParticles)
		{
			UGameplayStatics::SpawnEmitterAtLocation(
				World,
				ImpactParticles,
				FireHit.ImpactPoint,
				FireHit.ImpactNormal.Rotation()
				);
				
		}

		if(HitSound)
		{
			UGameplayStatics::PlaySoundAtLocation(
				this,
				HitSound,
				FireHit.ImpactPoint);
		}

		if(MuzzleFlash)
		{
			UGameplayStatics::SpawnEmitterAtLocation(
				World,
				MuzzleFlash,
				SocketTransform);
		}

		if(FireSound)
		{
			UGameplayStatics::PlaySoundAtLocation(
				this,
				FireSound,
				GetActorLocation());
		}
	}
}



void AHitScanWeapon::WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHit)
{;
	UWorld* World = GetWorld();

	FVector End =  TraceStart + (HitTarget - TraceStart) * 1.25f;
	

	World->LineTraceSingleByChannel(
		OutHit,
		TraceStart,
		End,
		ECC_Visibility);
	FVector BeamEnd = End;
	if(OutHit.bBlockingHit)
	{
		BeamEnd = OutHit.ImpactPoint;
	}
	else
	{
		OutHit.ImpactPoint = End;
	}

	//DrawDebugSphere(GetWorld(), BeamEnd, 16.f, 12, FColor::Orange, true);
	if(BeamParticles)
	{
		UParticleSystemComponent* BeamParticleSystemComponent =
			UGameplayStatics::SpawnEmitterAtLocation(
				World,
				BeamParticles,
				TraceStart,
				FRotator::ZeroRotator,
				true);

		if(BeamParticleSystemComponent)
		{
			BeamParticleSystemComponent->SetVectorParameter(FName("Target"), BeamEnd);
		}
	}
}
