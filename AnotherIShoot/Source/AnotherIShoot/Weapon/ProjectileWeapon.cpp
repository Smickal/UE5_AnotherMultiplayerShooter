// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

#include "Engine/SkeletalMeshSocket.h"

AProjectileWeapon::AProjectileWeapon()
{
	
}

void AProjectileWeapon::Fire(const FVector HitTarget)
{
	Super::Fire(HitTarget);
	
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
	UWorld* World = GetWorld();
	APawn* InstigatorPawn = Cast<APawn>(GetOwner());
	if(MuzzleFlashSocket && World)
	{
		FTransform MuzzleTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		//From Muzzle Flash locatiion to the location from the trace under te crisshair;
		FVector ToTarget = HitTarget - MuzzleTransform.GetLocation();
		FRotator TargetRotation = ToTarget.Rotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = InstigatorPawn;

		
		AProjectile* SpawnedProjectile = nullptr;
		//SSR -> Server SIde REwidn
		if(bUseServerSideRewind)
		{
			//Server
			if(InstigatorPawn->HasAuthority())
			{
				//Server - host -> Use Replicated Projectile
				if(InstigatorPawn->IsLocallyControlled())
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(ProjectileClass, MuzzleTransform.GetLocation(), TargetRotation, SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = false;
					SpawnedProjectile->Damage = Damage;
				}
				//Server - NotHost -> SPawn non replicated projectile non SSR
				else
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewind_ProjectileClass, MuzzleTransform.GetLocation(), TargetRotation, SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = true;
				}
			}
			//Client -> SSR Weapon
			else
			{
				//CLinet - Locally Controlled -> SPawn non Replicated Projectile, use SSR
				if(InstigatorPawn->IsLocallyControlled())
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewind_ProjectileClass, MuzzleTransform.GetLocation(), TargetRotation, SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = true;
					SpawnedProjectile->TraceStart = MuzzleTransform.GetLocation();
					SpawnedProjectile->InitialVelocity = SpawnedProjectile->GetActorForwardVector() * SpawnedProjectile->InitialSpeed;
					SpawnedProjectile->Damage = Damage;
				}
				//Client - Simulated -> Spawn NonREplicatedProjectile, no use SSR
				else
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewind_ProjectileClass, MuzzleTransform.GetLocation(), TargetRotation, SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = false;
					
				}
			}
		}
		//Weapon not using SSR
		else
		{
			if(InstigatorPawn->HasAuthority())
			{
				SpawnedProjectile = World->SpawnActor<AProjectile>(ProjectileClass, MuzzleTransform.GetLocation(), TargetRotation, SpawnParams);
				SpawnedProjectile->bUseServerSideRewind = false;
				SpawnedProjectile->Damage = Damage;
			}
		}
		
	}
}
