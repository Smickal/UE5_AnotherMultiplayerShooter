// Fill out your copyright notice in the Description page of Project Settings.


#include "ShotgunWeapon.h"

#include "AnotherIShoot/BlasterComponent/LagCompensationComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"


void AShotgunWeapon::FireShotgun(const TArray<FVector_NetQuantize> HitTargets)
{
	AWeapon::Fire(FVector());
	
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	AController* InstigatorController = OwnerPawn->GetController();

	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");
	if(MuzzleFlashSocket)
	{
		const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		const FVector Start = SocketTransform.GetLocation();

		//Maps hit character of, number of time hits
		TMap<ABlasterCharacter*, uint32> HitMap;
		for(auto HitTarget : HitTargets)
		{
			FHitResult FireHit;
			WeaponTraceHit(Start, HitTarget, FireHit);

			ABlasterCharacter* HitCharacter = Cast<ABlasterCharacter>(FireHit.GetActor());
			if(HitCharacter)
			{
				if(HitMap.Contains(HitCharacter))
				{
					HitMap[HitCharacter]++;
				}
				else
				{
					HitMap.Emplace(HitCharacter, 1);
				}

			}

			if(ImpactParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(
					GetWorld(),
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
					FireHit.ImpactPoint,
					.5f,
					FMath::FRandRange(-.5f, .5f));
			}
			
		}

		TArray<ABlasterCharacter*> HitCharacters;
		
		for(auto HitPair : HitMap)
		{
			if(HitPair.Key && InstigatorController)
			{
				bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
				if(HasAuthority() && bCauseAuthDamage)
				{
					UGameplayStatics::ApplyDamage(
						HitPair.Key, // Character that will behit withh eachh of the pellet
						Damage * HitPair.Value, // Multiply damage with each pellet
						InstigatorController,
						this,
						UDamageType::StaticClass());
				}
			}

			HitCharacters.Add(HitPair.Key);
		}
		if(!HasAuthority() && bUseServerSideRewind)
		{
			BlasterOwnerCharacter = BlasterOwnerCharacter == nullptr ? Cast<ABlasterCharacter>(OwnerPawn) : BlasterOwnerCharacter;
			BlasterOwnerController = BlasterOwnerController == nullptr ? Cast<ABlasterPlayerController>(InstigatorController) : BlasterOwnerController;

			if(BlasterOwnerCharacter && BlasterOwnerController && BlasterOwnerCharacter->GetLapComp() && BlasterOwnerCharacter->IsLocallyControlled())
			{
				BlasterOwnerCharacter->GetLapComp()->Server_ShotgunScoreRequest(
						HitCharacters,
						Start,
						HitTargets,
						BlasterOwnerController->GetServerTime() - BlasterOwnerController->SingleTripTime
				);
			}
		}

		
	}
}

void AShotgunWeapon::ShotgunTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets)
{
	auto WeaponSocket = WeaponMesh->GetSocketByName("MuzzleFlash");
	if(WeaponSocket ==  nullptr) return ;

	//Get StartTraceloc from weaponMuzzleflash Socket Location
	const FTransform SocketTransform = WeaponSocket->GetSocketTransform(WeaponMesh);
	const FVector TraceStart = SocketTransform.GetLocation();

	//Create Sphere as the scatter center
	const FVector ToTargetNormalized = (HitTarget - TraceStart).GetSafeNormal();
	const FVector SphereCenter = TraceStart + ToTargetNormalized * DistanceToSphere;
	
	
	for(uint32 i = 0; i < NumberOfPellets; i++)
	{
		//Create RAndomnese witin the speher as the scatter location
		const FVector RandVec = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
		const FVector EndLoc = SphereCenter + RandVec;
		FVector ToEndLoc = EndLoc - TraceStart;

		ToEndLoc = TraceStart + ToEndLoc * Trace_Length / ToEndLoc.Size();
		
		HitTargets.Add(ToEndLoc);
	}

	
}


