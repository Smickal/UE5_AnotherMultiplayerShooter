// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterAnimInstance.h"
#include "BlasterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"


void UBlasterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	PlayerCharacter = Cast<ABlasterCharacter>(TryGetPawnOwner());
}

void UBlasterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	//Force Re-ccheck to get the reference to the player character
	if(PlayerCharacter == nullptr)
	{
		PlayerCharacter = Cast<ABlasterCharacter>(TryGetPawnOwner());
	}
	if(PlayerCharacter == nullptr) return;

	//Set Speed
	FVector Velocity = PlayerCharacter->GetVelocity();
	Velocity.Z = 0.f;
	
	Speed = Velocity.Size();

	//Set Bool is in air
	UCharacterMovementComponent* MovementComponent = PlayerCharacter->GetCharacterMovement();
	if(MovementComponent)
	{
		bIsInAir = MovementComponent->IsFalling();
	}

	//Set bIsAccelerating
	if(MovementComponent)
	{
		bIsAccelerating = MovementComponent->GetCurrentAcceleration().Size() > 0.f ? true : false;
	}

	bIsWeaponEquipped = PlayerCharacter->IsWeaponEquipped();
	EquippedWeapon = PlayerCharacter->GetEquippedWeapon();
	bIsAiming = PlayerCharacter->IsAiming();
	bIsCrouch = PlayerCharacter->bIsCrouched;
	TurningInPlace = PlayerCharacter->GetTurningInPlace();
	bLocallyControlled =PlayerCharacter->IsLocallyControlled();
	bRotateRootBone = PlayerCharacter->ShouldRotateRootBone();
	bIsEliminated = PlayerCharacter->IsEliminated();
	
	bUseFABRIK = PlayerCharacter->GetCombatState() == ECombatState::ECS_Unoccupied;
	if(PlayerCharacter->IsLocallyControlled() && PlayerCharacter->GetCombatState() != ECombatState::ECS_ThrowingGrenade  && PlayerCharacter->bFinishedSwapping)
	{
		bUseFABRIK = !PlayerCharacter->IsLocallyReloading();
	}
	bUseAimOffsets = PlayerCharacter->GetCombatState() == ECombatState::ECS_Unoccupied && !PlayerCharacter->GetDisableGameplay();
	bTransformRightHand =PlayerCharacter->GetCombatState() == ECombatState::ECS_Unoccupied && !PlayerCharacter->GetDisableGameplay();
	
	FRotator AimRotation = PlayerCharacter->GetBaseAimRotation();
	FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(PlayerCharacter->GetVelocity());
	
	FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation);
	DeltaRotation = FMath::RInterpTo(DeltaRotation, DeltaRot, DeltaSeconds, 6.f);
	YawOffset = DeltaRotation.Yaw;

	CharacterRotationLastFrame = CharacterRotation;
	CharacterRotation = PlayerCharacter->GetActorRotation();

	const FRotator delta = UKismetMathLibrary::NormalizedDeltaRotator(CharacterRotation, CharacterRotationLastFrame);
	const float Target = delta.Yaw / DeltaSeconds;
	const float Interp = FMath::FInterpTo(LeanValue, Target, DeltaSeconds, 6.f);
	LeanValue = FMath::Clamp(Interp, -90.f, 90.f);

	AO_Yaw = PlayerCharacter->GetAO_Yaw();
	AO_Pitch = PlayerCharacter->GetAO_Pitch();

	if(bIsWeaponEquipped && EquippedWeapon && EquippedWeapon->GetWeaponMesh()  && PlayerCharacter->GetMesh())
	{
		LeftHandTransform = EquippedWeapon->GetWeaponMesh()->GetSocketTransform(FName("LeftHandSocket"));
		FVector OutPosition;
		FRotator OutRotation;
		PlayerCharacter->GetMesh()->TransformToBoneSpace(FName("hand_r"), LeftHandTransform.GetLocation(), FRotator::ZeroRotator, OutPosition, OutRotation);

		LeftHandTransform.SetLocation(OutPosition);
		LeftHandTransform.SetRotation(FQuat(OutRotation));

		if(PlayerCharacter->IsLocallyControlled())
		{
			FTransform RightHandTransform(EquippedWeapon->GetWeaponMesh()->GetSocketTransform(FName("hand_r")));
			FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(RightHandTransform.GetLocation() ,  RightHandTransform.GetLocation() +( RightHandTransform.GetLocation()- PlayerCharacter->GetHitTarget()));
			RightHandRotation = FMath::RInterpTo(RightHandRotation, LookAtRotation, DeltaSeconds, 30.f);
		}
		

		
		//FTransform MuzzleTipTransform(EquippedWeapon->GetWeaponMesh()->GetSocketTransform("MuzzleFlash", RTS_World));
		//FVector MuzzleX = FRotationMatrix(MuzzleTipTransform.GetRotation().Rotator()).GetUnitAxis(EAxis::X);
		//DrawDebugLine(GetWorld(), MuzzleTipTransform.GetLocation(), MuzzleTipTransform.GetLocation() + MuzzleX * 1000.f, FColor::Red);


		//DrawDebugLine(GetWorld(), MuzzleTipTransform.GetLocation(), PlayerCharacter->GetHitTarget(), FColor::Orange);
	}

	
}
