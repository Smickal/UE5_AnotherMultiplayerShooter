// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "BulletCasing.h"
#include "AnotherIShoot/BlasterComponent/CombatComponent.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = false;
	SetReplicateMovement(true);
	bReplicates = true;
	
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon Mesh"));
	WeaponMesh->SetupAttachment(RootComponent);
	WeaponMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Block);
	WeaponMesh->SetCollisionResponseToChannel(ECC_Pawn,  ECR_Ignore);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	
	WeaponMesh->SetCustomDepthStencilValue(CUSTOMDEPTH_BLUE);
	WeaponMesh->MarkRenderStateDirty();
	EnableCustomDepth(true);
	
	SetRootComponent(WeaponMesh);
	
	//Area sphere will only be activated on the server machine
	AreaSphere = CreateDefaultSubobject<USphereComponent>(TEXT("GrabSphere Component"));
	AreaSphere->SetupAttachment(RootComponent);
	AreaSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	
	//construct pickup widget
	PickUpWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PickUp Widget"));
	PickUpWidget->SetupAttachment(WeaponMesh);

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	AreaSphere->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	AreaSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	AreaSphere->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::AWeapon::OnSphereOverlap);
	AreaSphere->OnComponentEndOverlap.AddDynamic(this, &ThisClass::AWeapon::OnSphereEndOverlap);

	if(PickUpWidget)
	{
		PickUpWidget->SetVisibility(false);
	}
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWeapon, WeaponState);
	DOREPLIFETIME_CONDITION(AWeapon, bUseServerSideRewind, COND_OwnerOnly);
}



void AWeapon::SetWeaponState(EWeaponState State)
{
	WeaponState = State;
	OnWeaponStateSet();
}

void AWeapon::OnRep_WeaponStateChange()
{
	OnWeaponStateSet();
}

void AWeapon::OnPingTooHigh(bool bPingTooHigh)
{
	bUseServerSideRewind = !bPingTooHigh;
}


void AWeapon::OnWeaponStateSet()
{
	switch (WeaponState)
	{
	case EWeaponState::EWS_InitialState:
		break;
	case EWeaponState::EWS_Equipped:
		OnEquipHandleState();
		break;
	case EWeaponState::EWS_Secondary:
		OnEquipSecondaryHandleState();
		break;
	case EWeaponState::EWS_Dropped:
		OnDropHandleState();
		break;
	case EWeaponState::EWS_MAX:
		break;
	
	default: ;
	}
}


void AWeapon::OnEquipHandleState()
{
	ShowPickUpWidget(false);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	WeaponMesh->SetSimulatePhysics(false);
	WeaponMesh->SetEnableGravity(false);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

	if(WeaponType == EWeaponType::EWT_SubMachineGun)
	{
		WeaponMesh->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		WeaponMesh->SetEnableGravity(true);
		WeaponMesh->SetCollisionResponseToChannels(ECR_Ignore);
	}

	EnableCustomDepth(false);

	BlasterOwnerCharacter = BlasterOwnerCharacter == nullptr ? Cast<ABlasterCharacter>(GetOwner()) : BlasterOwnerCharacter;
	if(BlasterOwnerCharacter && bUseServerSideRewind)
	{
		BlasterOwnerController = BlasterOwnerController == nullptr ? Cast<ABlasterPlayerController>(BlasterOwnerCharacter->Controller) : BlasterOwnerController;
		if(BlasterOwnerController && HasAuthority() && !BlasterOwnerController->HighPingDelegate.IsBound())
		{
			BlasterOwnerController->HighPingDelegate.AddDynamic(this, &AWeapon::OnPingTooHigh);
		}
	}

	
}

void AWeapon::OnEquipSecondaryHandleState()
{
	ShowPickUpWidget(false);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	WeaponMesh->SetSimulatePhysics(false);
	WeaponMesh->SetEnableGravity(false);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

	if(WeaponType == EWeaponType::EWT_SubMachineGun)
	{
		WeaponMesh->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		WeaponMesh->SetEnableGravity(true);
		WeaponMesh->SetCollisionResponseToChannels(ECR_Ignore);
	}

	WeaponMesh->SetCustomDepthStencilValue(CUSTOMDEPTH_TAN);
	WeaponMesh->MarkRenderStateDirty();
	

	BlasterOwnerCharacter = BlasterOwnerCharacter == nullptr ? Cast<ABlasterCharacter>(GetOwner()) : BlasterOwnerCharacter;
	if(BlasterOwnerCharacter && bUseServerSideRewind)
	{
		BlasterOwnerController = BlasterOwnerController == nullptr ? Cast<ABlasterPlayerController>(BlasterOwnerCharacter->Controller) : BlasterOwnerController;
		if(BlasterOwnerController && HasAuthority() && BlasterOwnerController->HighPingDelegate.IsBound())
		{
			BlasterOwnerController->HighPingDelegate.RemoveDynamic(this, &AWeapon::OnPingTooHigh);
		}
	}
}

void AWeapon::OnDropHandleState()
{
	if(HasAuthority())
	{
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::Type::QueryOnly);
	}
	WeaponMesh->SetSimulatePhysics(true);
	WeaponMesh->SetEnableGravity(true);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);

	WeaponMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Block);
	WeaponMesh->SetCollisionResponseToChannel(ECC_Pawn,  ECR_Ignore);
	WeaponMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

	WeaponMesh->SetCustomDepthStencilValue(CUSTOMDEPTH_BLUE);
	WeaponMesh->MarkRenderStateDirty();
	EnableCustomDepth(true);

	BlasterOwnerCharacter = BlasterOwnerCharacter == nullptr ? Cast<ABlasterCharacter>(GetOwner()) : BlasterOwnerCharacter;
	if(BlasterOwnerCharacter && bUseServerSideRewind)
	{
		BlasterOwnerController = BlasterOwnerController == nullptr ? Cast<ABlasterPlayerController>(BlasterOwnerCharacter->Controller) : BlasterOwnerController;
		if(BlasterOwnerController && HasAuthority() && BlasterOwnerController->HighPingDelegate.IsBound())
		{
			BlasterOwnerController->HighPingDelegate.RemoveDynamic(this, &AWeapon::OnPingTooHigh);
		}
	}
}




void AWeapon::Fire(const FVector HitTarget)
{
	if(FireAnimation)
	{
		WeaponMesh->PlayAnimation(FireAnimation, false);
	}

	if(CasingClass)
	{
		const USkeletalMeshSocket* EjectSocket = WeaponMesh->GetSocketByName(FName("AmmoEject"));
		if(EjectSocket)
		{
			FTransform SocketTransform = EjectSocket->GetSocketTransform(GetWeaponMesh());
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.Owner = GetOwner();
			SpawnParameters.Instigator = Cast<APawn>(GetOwner());

			UWorld* World = GetWorld();
			if(World)
			{
				World->SpawnActor<ABulletCasing>(CasingClass, SocketTransform.GetLocation(),
					SocketTransform.GetRotation().Rotator(), SpawnParameters);
			}
			
		}
	}
	
	SpendRound();
}





void AWeapon::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
                              UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(AnotherActor);
	if(BlasterCharacter)
	{
		if(BlasterCharacter->GetTeam() == Team && WeaponType == EWeaponType::EWT_Flag) return;
		
		BlasterCharacter->SetOverlappingWeapon(this);
		
	}
}

void AWeapon::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* AnotherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(AnotherActor);
	if(BlasterCharacter)
	{
		if(BlasterCharacter->GetTeam() == Team && WeaponType == EWeaponType::EWT_Flag) return;
		
		BlasterCharacter->SetOverlappingWeapon(nullptr);
	}
}


void AWeapon::ShowPickUpWidget(bool bShowWidget)
{
	if(!PickUpWidget) return;
	PickUpWidget->SetVisibility(bShowWidget);
}

void AWeapon::Dropped()
{
	SetWeaponState(EWeaponState::EWS_Dropped);
	FDetachmentTransformRules Rules(EDetachmentRule::KeepWorld, true);
	WeaponMesh->DetachFromComponent(Rules);
	SetOwner(nullptr);
	BlasterOwnerCharacter = nullptr;
	BlasterOwnerController = nullptr;
}

void AWeapon::OnRep_Owner()
{
	Super::OnRep_Owner();

	if(Owner == nullptr)
	{
		BlasterOwnerCharacter = nullptr;
		BlasterOwnerController = nullptr;
	}
	else
	{
		BlasterOwnerCharacter = BlasterOwnerCharacter == nullptr ? Cast<ABlasterCharacter>(Owner) : BlasterOwnerCharacter;
		if(BlasterOwnerCharacter && BlasterOwnerCharacter->GetEquippedWeapon() && BlasterOwnerCharacter->GetEquippedWeapon() == this)
		{
			SetHUDAmmo();
		}
	}
}

void AWeapon::SpendRound()
{
	Ammo = FMath::Clamp(Ammo - 1, 0, MagCapacity);
	SetHUDAmmo();

	if(HasAuthority())
	{
		Client_UpdateAmmo(Ammo);
	}
	else
	{
		++Sequence;
	}
}

void AWeapon::Client_UpdateAmmo_Implementation(int32 ServerAmmo)
{
	if(HasAuthority()) return;
	
	Ammo = ServerAmmo;
	--Sequence;

	Ammo -= Sequence;
	SetHUDAmmo();
}

void AWeapon::AddAmmo(int32 AmmoToAdd)
{
	Ammo = FMath::Clamp(Ammo + AmmoToAdd, 0, MagCapacity);
	SetHUDAmmo();

	Client_AddAmmo(AmmoToAdd);
}

void AWeapon::Client_AddAmmo_Implementation(int32 AmmoToAdd)
{
	if(HasAuthority()) return;
	
	Ammo = FMath::Clamp(Ammo + AmmoToAdd, 0, MagCapacity);
	BlasterOwnerCharacter = BlasterOwnerCharacter == nullptr ? Cast<ABlasterCharacter>(GetOwner()) :  BlasterOwnerCharacter;
	if(BlasterOwnerCharacter && BlasterOwnerCharacter->GetCombatComponent() && IsFull())
	{
		BlasterOwnerCharacter->GetCombatComponent()->JumpToShotgunEndMontageSection();
	}

	SetHUDAmmo();
}

void AWeapon::EnableCustomDepth(bool bEnable)
{
	if(WeaponMesh)
	{
		WeaponMesh->SetRenderCustomDepth(bEnable);
		
	}
}




void AWeapon::SetHUDAmmo()
{
	BlasterOwnerCharacter = BlasterOwnerCharacter == nullptr ? Cast<ABlasterCharacter>(GetOwner()) : BlasterOwnerCharacter;
	if(BlasterOwnerCharacter)
	{
		BlasterOwnerController = BlasterOwnerController == nullptr ? Cast<ABlasterPlayerController>(BlasterOwnerCharacter->Controller) : BlasterOwnerController;
		if(BlasterOwnerController)
		{
			BlasterOwnerController->SetHUDWeaponAmmo(Ammo);
		}
	}
}

bool AWeapon::IsEmpty()
{
	if(Ammo <= 0) return true;
	else return false;
}

bool AWeapon::IsFull()
{
	return Ammo == MagCapacity;
}

FVector AWeapon::TraceEndWithScatter( const FVector& HitTarget)
{
	auto WeaponSocket = WeaponMesh->GetSocketByName("MuzzleFlash");
	if(WeaponSocket ==  nullptr) return FVector();

	FTransform SocketTransform = WeaponSocket->GetSocketTransform(WeaponMesh);
	FVector TraceStart = SocketTransform.GetLocation();
		
	
	FVector ToTargetNormalized = (HitTarget - TraceStart).GetSafeNormal();
	FVector SphereCenter = TraceStart + ToTargetNormalized * DistanceToSphere;
	FVector RandVec = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
	FVector EndLoc = SphereCenter + RandVec;
	FVector ToEndLoc = EndLoc - TraceStart;
	
	//DrawDebugSphere(GetWorld(), SphereCenter, SphereRadius, 12, FColor::Green, true);
	//DrawDebugSphere(GetWorld(), EndLoc, 4.f, 12.f, FColor::Blue, true);
	//DrawDebugLine(GetWorld(), TraceStart, TraceStart + ToEndLoc * Trace_Length / ToEndLoc.Size(), FColor::Red, true);
	
	return FVector(TraceStart + ToEndLoc * Trace_Length / ToEndLoc.Size());
}