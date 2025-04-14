// Fill out your copyright notice in the Description page of Project Settings.


#include "Flag.h"

#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"

AFlag::AFlag()
{
	FlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flag Mesh"));
	FlagMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	FlagMesh->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	SetRootComponent(FlagMesh);

	GetSphereComponent()->SetupAttachment(FlagMesh);
	GetPickUpWidget()->SetupAttachment(FlagMesh);
	
}

void AFlag::Dropped()
{
	//Super::Dropped();

	SetWeaponState(EWeaponState::EWS_Dropped);
	FDetachmentTransformRules Rules(EDetachmentRule::KeepWorld, true);
	
	//WeaponMesh->DetachFromComponent(Rules);
	FlagMesh->DetachFromComponent(Rules);
	
	SetOwner(nullptr);
	BlasterOwnerCharacter = nullptr;
	BlasterOwnerController = nullptr;
	
}

void AFlag::OnEquipHandleState()
{
	ShowPickUpWidget(false);
	GetSphereComponent()->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	
	FlagMesh->SetSimulatePhysics(false);
	FlagMesh->SetEnableGravity(false);
	FlagMesh->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

	EnableCustomDepth(false);
	

}

void AFlag::OnDropHandleState()
{
	if(HasAuthority())
	{
		GetSphereComponent()->SetCollisionEnabled(ECollisionEnabled::Type::QueryOnly);
	}
	
	FlagMesh->SetSimulatePhysics(true);
	FlagMesh->SetEnableGravity(true);
	FlagMesh->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);

	FlagMesh->SetCollisionResponseToChannels(ECollisionResponse::ECR_Block);
	FlagMesh->SetCollisionResponseToChannel(ECC_Pawn,  ECR_Ignore);
	FlagMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
}


