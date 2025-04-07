
// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffComponent.h"

#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UBuffComponent::UBuffComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}


// Called when the game starts
void UBuffComponent::BeginPlay()
{
	Super::BeginPlay();
	
	
}

void UBuffComponent::SetInitialSpeed(float BaseSpeed, float CrouchSpeed)
{
	InitialBaseSpeed = BaseSpeed;
	InitialCrouchSpeed = CrouchSpeed;
}

void UBuffComponent::SetInitialJumpVelocity(float Velocity)
{
	InitialBaseJumpZVelocity = Velocity;
}

// Called every frame
void UBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HealRampUp(DeltaTime);
	ShieldRampUp(DeltaTime);
}

void UBuffComponent::Heal(float HealAmount, float HealTime)
{
	bIsHealing = true;
	HealingRate = HealAmount / HealTime;
	AmountToHeal += HealAmount;
}


void UBuffComponent::HealRampUp(float DeltaTime)
{
	if(bIsHealing == false || Character == nullptr || Character->IsEliminated()) return;

	const float HealThisFrame = HealingRate*DeltaTime;
	Character->SetHealth(FMath::Clamp(Character->GetCurrentHealth() + HealThisFrame, 0, Character->GetMaxHealth()));
	AmountToHeal -= HealThisFrame;

	
	Character->UpdateHUDHealth();
	
	if(AmountToHeal <= 0.f || Character->GetCurrentHealth() >= Character->GetMaxHealth())
	{
		bIsHealing = false;
		AmountToHeal = 0.f;
	}
}

void UBuffComponent::RecoverShield(float ShieldAmount, float ShieldRecoverTime)
{
	bIsShieldRecover = true;
	ShieldRecoverRate = ShieldAmount / ShieldRecoverTime;
	AmountOfShieldToRecover += ShieldAmount;
}



void UBuffComponent::ShieldRampUp(float DeltaTime)
{
	if(bIsShieldRecover == false || Character ==nullptr || Character->IsEliminated()) return;

	const float ShieldRecoverThisFrame = ShieldRecoverRate * DeltaTime;
	Character->SetShield(FMath::Clamp(ShieldRecoverThisFrame + Character->GetCurrentShield(), 0, Character->GetMaxShield()));
	AmountOfShieldToRecover-= ShieldRecoverThisFrame;
	
	Character->UpdateHUDShield();

	if(AmountOfShieldToRecover <= 0 || Character->GetCurrentShield() >= Character->GetMaxShield())
	{
		bIsShieldRecover = false;
		AmountOfShieldToRecover = 0.f;
	}
}


void UBuffComponent::BuffSpeed(float BuffBaseSpeed, float BuffCrouchSpeed, float BuffTime)
{
	if(Character == nullptr) return;

	Character->GetWorldTimerManager().SetTimer(
		SpeedBuffTimerHandle,
		this, &UBuffComponent::ResetSpeed,
		BuffTime);

	Character->GetCharacterMovement()->MaxWalkSpeed = BuffBaseSpeed;
	Character->GetCharacterMovement()->MaxWalkSpeedCrouched = BuffCrouchSpeed;
	
	if(Character->GetCharacterMovement())
	{
		MultiCast_SpeedBuff(BuffBaseSpeed, BuffCrouchSpeed);
	}
}



void UBuffComponent::ResetSpeed()
{
	if(Character && Character->GetCharacterMovement())
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = InitialBaseSpeed;
		Character->GetCharacterMovement()->MaxWalkSpeedCrouched = InitialCrouchSpeed;
		
		MultiCast_SpeedBuff(InitialBaseSpeed, InitialCrouchSpeed);
	}
}



void UBuffComponent::MultiCast_SpeedBuff_Implementation(float BaseSpeed, float CrouchSpeed)
{
	Character->GetCharacterMovement()->MaxWalkSpeed = BaseSpeed;
	Character->GetCharacterMovement()->MaxWalkSpeedCrouched = CrouchSpeed;
}

void UBuffComponent::BuffJump(float JumpVelocity, float BuffTime)
{
	if(Character == nullptr || Character->GetCharacterMovement() == nullptr) return;

	Character->GetWorldTimerManager().SetTimer(
		JumpBuffTimerHandle,
		this,
		&UBuffComponent::ResetJumpVelocity,
		BuffTime
	);

	Character->GetCharacterMovement()->JumpZVelocity = JumpVelocity;
	Multicast_JumpBuff(JumpVelocity);
}


void UBuffComponent::ResetJumpVelocity()
{
	Character->GetCharacterMovement()->JumpZVelocity = InitialBaseJumpZVelocity;
	Multicast_JumpBuff(InitialBaseJumpZVelocity);
}

void UBuffComponent::Multicast_JumpBuff_Implementation(float JumpVelocity)
{
	Character->GetCharacterMovement()->JumpZVelocity = JumpVelocity;
}
