// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "DrawDebugHelpers.h"
#include "AnotherIShoot/HUD/BlasterHUD.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "Camera/CameraComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"
#include "AnotherIShoot/Weapon/Projectile.h"
#include "AnotherIShoot/Weapon/ShotgunWeapon.h"
#include "Sound/SoundCue.h"

// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	BaseWalkSpeed = 600.f;
	AimWalkSpeed = 450.f;

	
}


void UCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCombatComponent, EquippedWeapon);
	DOREPLIFETIME(UCombatComponent, bIsAiming);
	DOREPLIFETIME_CONDITION(UCombatComponent, CarriedAmmo, COND_OwnerOnly);
	DOREPLIFETIME(UCombatComponent, CombatState);
	DOREPLIFETIME(UCombatComponent, CurrentGrenade);
	DOREPLIFETIME(UCombatComponent, SecondaryWeapon);
	DOREPLIFETIME(UCombatComponent, bIsCarryingAFlag);
	DOREPLIFETIME(UCombatComponent, Flag);
}


// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();
	CombatState = ECombatState::ECS_Unoccupied;
	
	if(PlayerCharacter)
	{
		PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = BaseWalkSpeed;

		if(PlayerCharacter->GetFollowCamera())
		{
			DefaultFOV = PlayerCharacter->GetFollowCamera()->FieldOfView;
			CurrentFOV = DefaultFOV;
		}

		if(PlayerCharacter->HasAuthority())
		{
			InitializeCarriedAmmo();
			
		}
		UpdateHUDGrenade();
	}
	
	
}

// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
	if(PlayerCharacter && PlayerCharacter->IsLocallyControlled())
	{
		FHitResult HitResult;
		LineTraceUnderCrosshair(HitResult);
		HitTarget = HitResult.ImpactPoint;

		if(EquippedWeapon)
		{
			InterpFOV(DeltaTime);
			SetHUDCrosshair(DeltaTime);

			// GEngine->AddOnScreenDebugMessage(-1,
			// 	15.f,
			// 	FColor::Black,
			// 	FString::Printf(TEXT("%s"), *UEnum::GetValueAsString(CombatState)));
		}
	}


	
}


void UCombatComponent::SetHUDCrosshair(float DeltaTime)
{
	if(PlayerCharacter == nullptr || !PlayerCharacter->Controller) return;

	PlayerController =
		PlayerController == nullptr ? Cast<ABlasterPlayerController>(PlayerCharacter->Controller) : PlayerController;
	
	if(PlayerController)
	{
		HUD = HUD == nullptr ? Cast<ABlasterHUD>(PlayerController->GetHUD()) : HUD;
		if(HUD)
		{
			//Set Crosshair Texture

			if(EquippedWeapon)
			{
				Package.CrosshairCenter = EquippedWeapon->CrosshairCenter;
				Package.CrosshairLeft = EquippedWeapon->CrosshairLeft;
				Package.CrosshairRight = EquippedWeapon->CrosshairRight;
				Package.CrosshairTop = EquippedWeapon->CrosshairTop;
				Package.CrosshairBottom = EquippedWeapon->CrosshairBottom;
			}
			else
			{
				Package.CrosshairCenter = nullptr;
				Package.CrosshairLeft = nullptr;
				Package.CrosshairRight = nullptr;
				Package.CrosshairTop = nullptr;
				Package.CrosshairBottom = nullptr;
			}


			//Calculate Crosshair Spread
			FVector2d WalkSpeedRange(0.f, PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed);
			FVector2d VelocityMultiplierRange(0.f, 1.f);

			FVector Velocity(PlayerCharacter->GetVelocity());
			Velocity.Z = 0.f;

			CrosshairVelocityFactor =
				FMath::GetMappedRangeValueClamped(
					WalkSpeedRange,
					VelocityMultiplierRange,
					Velocity.Size()
					);

			if(PlayerCharacter->GetCharacterMovement()->IsFalling())
			{
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 2.25f, DeltaTime, 2.225f);
			}
			else
			{
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 0.f, DeltaTime, 30.f);
			}

			if(EquippedWeapon)
			{
				if(bIsAiming)
				{
					CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, - .6f, DeltaTime, EquippedWeapon->ZoomInterpSpeed);
				}
				else
				{
					CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0, DeltaTime, EquippedWeapon->ZoomInterpSpeed);
				}


				
			}

			CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0, DeltaTime, 2.f);
			
			Package.CrosshairSpread	=
				0.5f +
					CrosshairVelocityFactor +
						CrosshairInAirFactor +
							CrosshairAimFactor + 
							CrosshairShootingFactor+
								CrosshairAimAtEnemyFactor;
			HUD->SetHUDPackage(Package);
		}
	}
}

void UCombatComponent::InterpFOV(float DeltaTime)
{
	if(EquippedWeapon == nullptr) return;

	if(bIsAiming)
	{
		CurrentFOV = FMath::FInterpTo(CurrentFOV, EquippedWeapon->GetZoomedFOV(), DeltaTime, EquippedWeapon->GetZoomInterpSpeed());
	}
	else
	{
		CurrentFOV = FMath::FInterpTo(CurrentFOV, DefaultFOV, DeltaTime, EquippedWeapon->GetZoomInterpSpeed());
	}

	if(PlayerCharacter && PlayerCharacter->GetFollowCamera())
	{
		PlayerCharacter->GetFollowCamera()->SetFieldOfView(CurrentFOV);
	}
}

void UCombatComponent::StartFireTimer()
{
	if(EquippedWeapon == nullptr || PlayerCharacter == nullptr)
	{
		bCanFire = true;
		return;
	}

	PlayerCharacter->GetWorldTimerManager().SetTimer(FireTimer, this, &UCombatComponent::FireTimerFinished, EquippedWeapon->FireTimerDelay);
	
}

void UCombatComponent::FireTimerFinished()
{
	bCanFire = true;
	if(bIsFireButtonPressed && EquippedWeapon->bIsWeaponAutomatic)
	{
		Fire();
	}
	
	ReloadEmptyWeapon();
}

void UCombatComponent::EquipWeapon(AWeapon* WeaponToEquip)
{
	if(!PlayerCharacter || !WeaponToEquip) return;
	if(CombatState != ECombatState::ECS_Unoccupied) return;

	if(WeaponToEquip->GetWeaponType() == EWeaponType::EWT_Flag)
	{
		bIsCarryingAFlag = true;
		//PlayerCharacter->Crouch();

		Flag = WeaponToEquip;
		WeaponToEquip->SetWeaponState(EWeaponState::EWS_Equipped);
		WeaponToEquip->SetOwner(PlayerCharacter);
		
		AttachFlagToLeftHand(Flag);
	}
	else
	{
		//Checks if there's a primary without a secondary
		if(EquippedWeapon != nullptr && SecondaryWeapon == nullptr)
		{
			EquipSecondaryWeapon(WeaponToEquip);
		}
		else
		{
			EquipPrimaryWeapon(WeaponToEquip);
		}
	}
	
	
	PlayerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
	PlayerCharacter->bUseControllerRotationYaw = true;
}

bool UCombatComponent::ShouldSwapWeapon()
{
	return (EquippedWeapon && SecondaryWeapon);
}


void UCombatComponent::SwapWeapon()
{
	if(CombatState != ECombatState::ECS_Unoccupied || PlayerCharacter == nullptr) return;

	PlayerCharacter->PlaySwapWeaponMontage();
	PlayerCharacter->bFinishedSwapping = false;
	CombatState = ECombatState::ECS_SwappingWeapon;
	
	//Swap wep
	AWeapon* TempWeapon = EquippedWeapon;
	EquippedWeapon = SecondaryWeapon;
	SecondaryWeapon = TempWeapon;

	if(SecondaryWeapon)
	{
		SecondaryWeapon->EnableCustomDepth(false);
	}
	
}

void UCombatComponent::OnRep_bCarryingFlag()
{
	if(bIsCarryingAFlag && PlayerCharacter && PlayerCharacter->IsLocallyControlled())
	{
		//PlayerCharacter->Crouch();
	}
}

void UCombatComponent::EquipPrimaryWeapon(AWeapon* WeaponToEquip)
{
	DropEquippedWeapon();
	
	EquippedWeapon = WeaponToEquip;
	EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);

	AttachAnActorToRightHand(EquippedWeapon);
	EquippedWeapon->SetOwner(PlayerCharacter);
	EquippedWeapon->SetHUDAmmo();
	
	UpdateCarriedAmmo();

	PlayEquipWeaponSound(EquippedWeapon);

	ReloadEmptyWeapon();

	EquippedWeapon->EnableCustomDepth(false);
}

void UCombatComponent::EquipSecondaryWeapon(AWeapon* WeaponToEquip)
{
	SecondaryWeapon = WeaponToEquip;
	SecondaryWeapon->SetWeaponState(EWeaponState::EWS_Secondary);

	AttachAnActorToBackpack(SecondaryWeapon);
	SecondaryWeapon->SetOwner(PlayerCharacter);

	PlayEquipWeaponSound(SecondaryWeapon);
	
}




void UCombatComponent::OnRep_EquippedWeapon()
{
	if(EquippedWeapon && PlayerCharacter)
	{
		EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
		AttachAnActorToRightHand(EquippedWeapon);
		
		PlayerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		PlayerCharacter->bUseControllerRotationYaw = true;

		PlayEquipWeaponSound(EquippedWeapon);
		
		PlayerController = PlayerController == nullptr ? Cast<ABlasterPlayerController>(PlayerCharacter->Controller) : PlayerController;
		if(PlayerController)
		{
			PlayerController->SetHUDWeaponType(EquippedWeapon->WeaponName, EquippedWeapon->WeaponTypeTexture);
			EquippedWeapon->SetHUDAmmo();
		}
		EquippedWeapon->EnableCustomDepth(false); 
	}
}



void UCombatComponent::OnRep_SecondaryWeapon()
{
	if(SecondaryWeapon && PlayerCharacter)
	{
		SecondaryWeapon->SetWeaponState(EWeaponState::EWS_Secondary);
		AttachAnActorToBackpack(SecondaryWeapon);
		PlayEquipWeaponSound(SecondaryWeapon);
	}
}

void UCombatComponent::OnRep_Flag()
{
	
}

void UCombatComponent::DropEquippedWeapon()
{
	if(EquippedWeapon)
	{
		EquippedWeapon->Dropped();
	}
}



void UCombatComponent::AttachAnActorToRightHand(AActor* ActorToAttach)
{
	if(!PlayerCharacter || !ActorToAttach || !PlayerCharacter->GetMesh()) return;
	
	const USkeletalMeshSocket* HandSocket =  PlayerCharacter->GetMesh()->GetSocketByName(FName("RightHandSocket"));
	if(HandSocket)
	{
		HandSocket->AttachActor(ActorToAttach, PlayerCharacter->GetMesh());
	}
}


void UCombatComponent::AttachAnActorToLeftHand(AActor* ActorToAttach)
{
	if(!PlayerCharacter || !ActorToAttach || !PlayerCharacter->GetMesh() || !EquippedWeapon) return;
	bool bUsePistolSocket =
		EquippedWeapon->GetWeaponType() == EWeaponType::EWT_Pistol || EquippedWeapon->GetWeaponType() == EWeaponType::EWT_SubMachineGun;
	FName SocketName = bUsePistolSocket ? FName("PistolSocket") : FName("LeftHandSocket");
	const USkeletalMeshSocket* LeftHandSocket = PlayerCharacter->GetMesh()->GetSocketByName(SocketName);
	if(LeftHandSocket)
	{
		LeftHandSocket->AttachActor(ActorToAttach, PlayerCharacter->GetMesh());
	}
}

void UCombatComponent::AttachAnActorToBackpack(AActor* ActorToAttach)
{
	if(!PlayerCharacter || !ActorToAttach || !PlayerCharacter->GetMesh()) return;
	
	const USkeletalMeshSocket* BackpackSocket =  PlayerCharacter->GetMesh()->GetSocketByName(FName("BackpackSocket"));
	if(BackpackSocket)
	{
		BackpackSocket->AttachActor(ActorToAttach, PlayerCharacter->GetMesh());
	}
	
}

void UCombatComponent::AttachFlagToLeftHand(AWeapon* FlagToAttach)
{
	if(!PlayerCharacter || !FlagToAttach || !PlayerCharacter->GetMesh()) return;
	
	const USkeletalMeshSocket* LeftFlagSocket = PlayerCharacter->GetMesh()->GetSocketByName(FName("FlagSocket"));
	if(LeftFlagSocket)
	{
		LeftFlagSocket->AttachActor(FlagToAttach, PlayerCharacter->GetMesh());
	}
}

void UCombatComponent::UpdateCarriedAmmo()
{
	if(!EquippedWeapon) return;
	
	if(CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}
	
	PlayerController = PlayerController == nullptr ? Cast<ABlasterPlayerController>(PlayerCharacter->Controller) : PlayerController;
	if(PlayerController)
	{
		PlayerController->SetHUDCarriedAmmo(CarriedAmmo);
		PlayerController->SetHUDWeaponType(EquippedWeapon->WeaponName, EquippedWeapon->WeaponTypeTexture);
	}
}

void UCombatComponent::PlayEquipWeaponSound(AWeapon* Weapon)
{
	if(PlayerCharacter && Weapon && EquippedWeapon->EquipSound)
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			Weapon->EquipSound,
			PlayerCharacter->GetActorLocation());
	}
}

void UCombatComponent::ReloadEmptyWeapon()
{
	if(EquippedWeapon && EquippedWeapon->IsEmpty())
	{
		Reload();
	}
}



void UCombatComponent::SetAiming(bool bAiming)
{
	if(PlayerCharacter == nullptr ||EquippedWeapon == nullptr) return;

	
	bIsAiming = bAiming;
	Server_SetAiming(bAiming);

	if(PlayerCharacter)
	{
		PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpeed : BaseWalkSpeed;
	}

	if(PlayerCharacter->IsLocallyControlled() && EquippedWeapon->GetWeaponType() == EWeaponType::EWT_SniperRifle)
	{
		PlayerCharacter->ShowSniperScopeWidget(bIsAiming);
	}

	if(PlayerCharacter->IsLocallyControlled())
	{
		bLocalAimButtonPressed = bAiming;
	}
	
}

void UCombatComponent::OnRep_Aiming()
{
	if(PlayerCharacter && PlayerCharacter->IsLocallyControlled())
	{
		bIsAiming = bLocalAimButtonPressed;
	}
}




void UCombatComponent::Server_SetAiming_Implementation(bool bAiming)
{
	bIsAiming = bAiming;

	if(PlayerCharacter)
	{
		PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpeed : BaseWalkSpeed;
	}
}


void UCombatComponent::Fire()
{
	if(CanFire())
	{
		bCanFire = false;
		
		if(EquippedWeapon)
		{
			CrosshairShootingFactor = .75f;

			switch (EquippedWeapon->FireType) {
			case EFireType::EFT_HitScan:
				FireHitScanWeapon();
				break;
			case EFireType::EFT_Projectile:
				FireProjectileWeapon();
				break;
			case EFireType::EFT_Shotgun:
				FireShotgunWeapon();
				break;

				
			case EFireType::EFT_DefaultMAX:
				
				break;
			}
		}
		StartFireTimer();
		
	}
	
}

void UCombatComponent::FireProjectileWeapon()
{
	if(EquippedWeapon && PlayerCharacter)
	{
		HitTarget = EquippedWeapon->bUseScatter ? EquippedWeapon->TraceEndWithScatter(HitTarget) : HitTarget;

		if(!PlayerCharacter->HasAuthority()) LocalFire(HitTarget);
		Server_Fire(HitTarget, EquippedWeapon->FireTimerDelay);
	}
}

void UCombatComponent::FireHitScanWeapon()
{
	if(EquippedWeapon && PlayerCharacter)
	{
		HitTarget = EquippedWeapon->bUseScatter ? EquippedWeapon->TraceEndWithScatter(HitTarget) : HitTarget;

		if(!PlayerCharacter->HasAuthority())LocalFire(HitTarget);
		Server_Fire(HitTarget, EquippedWeapon->FireTimerDelay);
	}
}

void UCombatComponent::FireShotgunWeapon()
{
	if(EquippedWeapon == nullptr || PlayerCharacter == nullptr) return;
	
	AShotgunWeapon* Shotgun = Cast<AShotgunWeapon>(EquippedWeapon);
	if(Shotgun)
	{
		TArray<FVector_NetQuantize> HitTargets;
		Shotgun->ShotgunTraceEndWithScatter(HitTarget, HitTargets);

		if(!PlayerCharacter->HasAuthority()) LocalShotgunFire(HitTargets);
		Server_ShotgunFire(HitTargets, EquippedWeapon->FireTimerDelay);
	}
}



void UCombatComponent::FireButtonPressed(bool bIsPressed)
{
	bIsFireButtonPressed = bIsPressed;
	
	
	if(bIsFireButtonPressed)
	{
		Fire();
	}
}

void UCombatComponent::ResetGrenadeCarried()
{
	CurrentGrenade = MaxGrenade;
	UpdateHUDGrenade();
}

void UCombatComponent::PickUpAmmo(EWeaponType WeaponType, int32 AmmoAmmount)
{
	if(CarriedAmmoMap.Contains(WeaponType))
	{
		CarriedAmmoMap[WeaponType] += FMath::Clamp(AmmoAmmount, 0, MaxCarriedAmmo);
		UpdateCarriedAmmo();
	}

	if(EquippedWeapon && EquippedWeapon->IsEmpty() && EquippedWeapon->GetWeaponType() == WeaponType)
	{
		Reload();
	}
}




void UCombatComponent::Server_Fire_Implementation(const FVector_NetQuantize& TraceHitTarget, float FireDelay)
{
	Multicast_Fire(TraceHitTarget);	
}

bool UCombatComponent::Server_Fire_Validate(const FVector_NetQuantize& TraceHitTarget, float FireDelay)
{
	if(EquippedWeapon)
	{
		bool bNearlyEqual = FMath::IsNearlyEqual(EquippedWeapon->FireTimerDelay, FireDelay, 0.001f);
		return bNearlyEqual;
	}

	return true;
}

void UCombatComponent::Server_ShotgunFire_Implementation(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay)
{
	Multicast_ShotgunFire(TraceHitTargets);
}

bool UCombatComponent::Server_ShotgunFire_Validate(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay)
{
	if(EquippedWeapon)
	{
		bool bNearlyEqual = FMath::IsNearlyEqual(EquippedWeapon->FireTimerDelay, FireDelay, 0.001f);
		return bNearlyEqual;
	}

	return true;
}

void UCombatComponent::Multicast_Fire_Implementation(const FVector_NetQuantize& TraceHitTarget)
{
	if(PlayerCharacter && PlayerCharacter->IsLocallyControlled() && !PlayerCharacter->HasAuthority())return;

	LocalFire(TraceHitTarget);
}


void UCombatComponent::Multicast_ShotgunFire_Implementation(const TArray<FVector_NetQuantize>& TraceHitTargets)
{
	if(PlayerCharacter && PlayerCharacter->IsLocallyControlled() && !PlayerCharacter->HasAuthority()) return;

	LocalShotgunFire(TraceHitTargets);
}	

void UCombatComponent::LocalFire(const FVector_NetQuantize& TraceHitTarget)
{
	if(EquippedWeapon == nullptr) return;
	if(PlayerCharacter && CombatState == ECombatState::ECS_Unoccupied)
	{
		PlayerCharacter->PlayFireMontage(bIsAiming);
		EquippedWeapon->Fire(TraceHitTarget);
	}
}

void UCombatComponent::LocalShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets)
{
	if(EquippedWeapon == nullptr || PlayerCharacter ==  nullptr) return;
	if(CombatState == ECombatState::ECS_Reloading || CombatState == ECombatState::ECS_Unoccupied)
	{
		PlayerCharacter->PlayFireMontage(bIsAiming);
		AShotgunWeapon* Shotgun = Cast<AShotgunWeapon>(EquippedWeapon);
		if(Shotgun)
		{
			bIsLocallyReloading = false;
			Shotgun->FireShotgun(TraceHitTargets);
			CombatState = ECombatState::ECS_Unoccupied;
		}
	}
	
}

void UCombatComponent::LineTraceUnderCrosshair(FHitResult& HitResult)
{
	FVector2d ViewportSize;
	if(GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}
	
	
	//get Center Location with Crosshair
	FVector2d CrosshairLocation = FVector2d(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;

	//Project the crosshair Loc+Dir from camera position, from screen to worldd
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation, CrosshairWorldPosition, CrosshairWorldDirection);

	
	
	if(bScreenToWorld)
	{
		FVector Start = CrosshairWorldPosition;
		if(PlayerCharacter)
		{
			float DistanceToCharacter = FVector::Distance(PlayerCharacter->GetActorLocation(),Start);
			Start += CrosshairWorldDirection * (DistanceToCharacter + 100.f);
		}
		
		FVector End = Start + CrosshairWorldDirection * Trace_Length ;
		GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);
		
		
		if(HitResult.GetActor() && HitResult.GetActor()->Implements<UInteractWithCrosshairInterface>())
		{
			Package.CrosshairColor = FLinearColor::Red;
			CrosshairAimAtEnemyFactor = -.1f;
		}
		else
		{
			Package.CrosshairColor = FLinearColor::White;
			CrosshairAimAtEnemyFactor = 0.f;
		}
		
		if(!HitResult.bBlockingHit)
		{
			HitResult.ImpactPoint = End;
		}
	}
	
	
}
bool UCombatComponent::CanFire()
{
	if(EquippedWeapon == nullptr) return false;
	if(EquippedWeapon && bCanFire && EquippedWeapon->GetWeaponType() == EWeaponType::EWT_ShotGun && CombatState == ECombatState::ECS_Reloading)
	{
		return true;
	}
	if(bIsLocallyReloading) return false;
	return (!EquippedWeapon->IsEmpty() && bCanFire) && CombatState == ECombatState::ECS_Unoccupied ;
	
}

void UCombatComponent::OnRep_CarriedAmmo()
{
	PlayerController = PlayerController == nullptr ? Cast<ABlasterPlayerController>(PlayerCharacter->Controller) : PlayerController;
	if(PlayerController)
	{
		PlayerController->SetHUDCarriedAmmo(CarriedAmmo);
	}

	bool bJumpToShotgunEnd =
		CombatState == ECombatState::ECS_Reloading &&
			EquippedWeapon != nullptr &&
				EquippedWeapon->GetWeaponType() == EWeaponType::EWT_ShotGun &&
					CarriedAmmo == 0;
	if(bJumpToShotgunEnd)
	{
		JumpToShotgunEndMontageSection();
	}
		
}

int32 UCombatComponent::AmountToReload()
{
	if(EquippedWeapon == nullptr) return 0;
	int32 RoomInMag = EquippedWeapon->GetMagCapacity() - EquippedWeapon->GetCurrentAmmo();

	if(CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		int32 AmmountCarried = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
		int32 Least = FMath::Min(RoomInMag, AmmountCarried);

		return FMath::Clamp(RoomInMag, 0, Least);
	}

	
	return 0;
}


void UCombatComponent::ShotgunShellReload()
{
	if(PlayerCharacter->HasAuthority())
	{
		UpdateShotgunAmmoValues();
		//UE_LOG(LogTemp, Warning, TEXT("reload"));
	}
		
}



void UCombatComponent::InitializeCarriedAmmo()
{
	CarriedAmmoMap.Emplace(EWeaponType::EWT_AssaultRifle, StartingARAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_RocketLauncher, StartingRocketAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_Pistol, StartingPistolAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_SubMachineGun, StartingSMGAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_ShotGun, StartingShotgunAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_SniperRifle, StartingSniperAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_GrenadeLauncher, StartingGrenadeLauncherAmmo);

	
	
}


void UCombatComponent::Reload()
{
	if(CarriedAmmo > 0 && CombatState == ECombatState::ECS_Unoccupied && EquippedWeapon && !EquippedWeapon->IsFull() && !bIsLocallyReloading)
	{
		HandleReload();
		Server_Reload();

		bIsLocallyReloading = true;
	}
}

void UCombatComponent::FinishReloading()
{
	if(PlayerCharacter == nullptr) return;
	if(PlayerCharacter->HasAuthority())
	{
		CombatState = ECombatState::ECS_Unoccupied;
		UpdateAmmoValues();
	}
	
	
	if(bIsFireButtonPressed)
	{
		Fire();
	}

	bIsLocallyReloading = false;
}

void UCombatComponent::FinishedSwap()
{
	if(PlayerCharacter && PlayerCharacter->HasAuthority())
	{
		CombatState = ECombatState::ECS_Unoccupied;
	}

	if(PlayerCharacter)
	{
		PlayerCharacter->bFinishedSwapping = true;
	}

	if(SecondaryWeapon)
	{
		SecondaryWeapon->EnableCustomDepth(true);
	}
}

void UCombatComponent::FinishSwapAttachWeapon()
{
	//1st wep - Behaviour
	EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);

	AttachAnActorToRightHand(EquippedWeapon);
	EquippedWeapon->SetHUDAmmo();
	UpdateCarriedAmmo();
	PlayEquipWeaponSound(EquippedWeapon);
	ReloadEmptyWeapon();
	EquippedWeapon->EnableCustomDepth(false);

	//2nd Wep - Behaviour
	SecondaryWeapon->SetWeaponState(EWeaponState::EWS_Secondary);
	AttachAnActorToBackpack(SecondaryWeapon);

	
}


void UCombatComponent::Server_Reload_Implementation()
{
	if(PlayerCharacter == nullptr && EquippedWeapon == nullptr) return;
	CombatState = ECombatState::ECS_Reloading;
	
	if(!PlayerCharacter->IsLocallyControlled()) HandleReload();
}

void UCombatComponent::HandleReload()
{
	if(PlayerCharacter == nullptr && EquippedWeapon == nullptr) return;
	
	PlayerCharacter->PlayReloadMontage();
	
}

void UCombatComponent::UpdateAmmoValues()
{
	if(PlayerCharacter == nullptr || EquippedWeapon == nullptr) return;
	int32 AmounToReload = AmountToReload();
	if(CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmoMap[EquippedWeapon->GetWeaponType()] -= AmounToReload;
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}
	EquippedWeapon->AddAmmo(AmounToReload);

	PlayerController = PlayerController == nullptr ? Cast<ABlasterPlayerController>(PlayerCharacter->Controller) : PlayerController;
	if(PlayerController)
	{
		PlayerController->SetHUDCarriedAmmo(CarriedAmmo);
	}
}

void UCombatComponent::UpdateShotgunAmmoValues()
{
	if(PlayerCharacter == nullptr || EquippedWeapon == nullptr || !PlayerCharacter->HasAuthority()) return;
	if(CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmoMap[EquippedWeapon->GetWeaponType()] -= 1;
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}

	PlayerController = PlayerController == nullptr ? Cast<ABlasterPlayerController>(PlayerCharacter->Controller) : PlayerController;
	if(PlayerController)
	{
		PlayerController->SetHUDCarriedAmmo(CarriedAmmo);
	}
	
	EquippedWeapon->AddAmmo(1);
	bCanFire = true;
	if(EquippedWeapon->IsFull() || CarriedAmmo == 0)
	{
		JumpToShotgunEndMontageSection();
	}
}
void UCombatComponent::JumpToShotgunEndMontageSection()
{
	//Jump to Shotgun end Section
	UAnimInstance* AnimInstance = PlayerCharacter->GetMesh()->GetAnimInstance();
	if(AnimInstance && PlayerCharacter->GetReloadMontage())
	{
		AnimInstance->Montage_JumpToSection(FName("ShotgunEnd"));
	}
}



void UCombatComponent::OnRep_CombatState()
{
	switch (CombatState)
	{
		case ECombatState::ECS_Unoccupied:
			if(bIsFireButtonPressed)
			{
				Fire();
			}
			break;
		case ECombatState::ECS_Reloading:
			if(PlayerCharacter && !PlayerCharacter->IsLocallyControlled())
				HandleReload();
			break;
		case ECombatState::ECS_ThrowingGrenade:
			if(PlayerCharacter && !PlayerCharacter->IsLocallyControlled())
			{
				PlayerCharacter->PlayThrowGrenadeMontage();
				AttachAnActorToLeftHand(EquippedWeapon);
				ShowAttachedGrenade(true);
			}
			break;
		case ECombatState::ECS_SwappingWeapon:
			if(PlayerCharacter && !PlayerCharacter->IsLocallyControlled())
			{
				PlayerCharacter->PlaySwapWeaponMontage();
			}
			break;

		
		case ECombatState::ECS_MAX:
			break;

		
		default: ;
	}
}



void UCombatComponent::ThrowGrenade()
{
	if(CombatState != ECombatState::ECS_Unoccupied  || EquippedWeapon == nullptr) return;
	if(CurrentGrenade <= 0) return;
	
	CombatState = ECombatState::ECS_ThrowingGrenade;
	if(PlayerCharacter)
	{
		PlayerCharacter->PlayThrowGrenadeMontage();
		AttachAnActorToLeftHand(EquippedWeapon);
		ShowAttachedGrenade(true);
	}
	if(PlayerCharacter && !PlayerCharacter->HasAuthority())
	{
		Server_ThrowGrenade();
	}

	if(PlayerCharacter && PlayerCharacter->HasAuthority())
	{
		CurrentGrenade = FMath::Clamp(CurrentGrenade - 1, 0, MaxGrenade);
		UpdateHUDGrenade();
	}
}

void UCombatComponent::Server_ThrowGrenade_Implementation()
{
	if(CurrentGrenade == 0 )return;
	
	CombatState = ECombatState::ECS_ThrowingGrenade;
	if(PlayerCharacter)
	{
		PlayerCharacter->PlayThrowGrenadeMontage();
		AttachAnActorToLeftHand(EquippedWeapon);
		ShowAttachedGrenade(true);
	}

	CurrentGrenade = FMath::Clamp(CurrentGrenade - 1, 0, MaxGrenade);
	UpdateHUDGrenade();
}

void UCombatComponent::UpdateHUDGrenade()
{
	PlayerController = PlayerController == nullptr ? Cast<ABlasterPlayerController>(PlayerCharacter->Controller) : PlayerController;
	if(PlayerController)
	{
		PlayerController->SetHUDGrenade(CurrentGrenade);
	}
}



void UCombatComponent::ShowAttachedGrenade(bool bShowGrenade)
{
	if(PlayerCharacter && PlayerCharacter->GetAttachedGrenade())
	{
		PlayerCharacter->GetAttachedGrenade()->SetVisibility(bShowGrenade);
	}
}

void UCombatComponent::ThrowGrenadeFinished()
{
	CombatState = ECombatState::ECS_Unoccupied;
	AttachAnActorToRightHand(EquippedWeapon);
}

void UCombatComponent::LaunchGrenade()
{
	ShowAttachedGrenade(false);

	if(PlayerCharacter && PlayerCharacter->IsLocallyControlled())
	{
		Server_LaunchGrenade(HitTarget);
	}
}

void UCombatComponent::Server_LaunchGrenade_Implementation(const FVector_NetQuantize Target)
{
	if(PlayerCharacter  && GrenadeClass && PlayerCharacter->GetAttachedGrenade())
	{
		const FVector StartingLocation = PlayerCharacter->GetAttachedGrenade()->GetComponentLocation();
		FVector ToTarget = Target - StartingLocation;

		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = PlayerCharacter;
		SpawnParameters.Instigator = PlayerCharacter;
		
		UWorld* World = GetWorld();
		if(World)
		{
			World->SpawnActor<AProjectile>(GrenadeClass, StartingLocation, ToTarget.Rotation() , SpawnParameters);
			
		}
	}
}


void UCombatComponent::OnRep_Grenade()
{
	UpdateHUDGrenade();
}
