// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuffComponent.generated.h"


class ABlasterCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANOTHERISHOOT_API UBuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBuffComponent();
	friend  class ABlasterCharacter;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	

	void Heal(float HealAmount, float HealTime);
	void RecoverShield(float ShieldAmount, float ShieldRecoverTime);
	void BuffSpeed(float BuffBaseSpeed, float BuffCrouchSpeed, float BuffTime);
	void BuffJump(float JumpVelocity, float BuffTime);
	

	void SetInitialSpeed(float BaseSpeed, float CrouchSpeed);
	void SetInitialJumpVelocity(float Velocity);
protected:
	virtual void BeginPlay() override;

	void HealRampUp(float DeltaTime);
	void ShieldRampUp(float DeltaTime);
private:
	UPROPERTY()
	ABlasterCharacter* Character;

	//Health BUFF
	bool bIsHealing = false;
	float HealingRate = 0.f;
	float AmountToHeal = 0.f;
	
	//Speed BUFF
	FTimerHandle SpeedBuffTimerHandle;
	void ResetSpeed();
	float InitialBaseSpeed;
	float InitialCrouchSpeed;

	UFUNCTION(NetMulticast, Reliable)
	void MultiCast_SpeedBuff(float BaseSpeed, float CrouchSpeed);
	
	//Jump BUFF
	
	FTimerHandle JumpBuffTimerHandle;
	void ResetJumpVelocity();
	float InitialBaseJumpZVelocity;

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_JumpBuff(float JumpVelocity);
	
	//Shield Buff
	bool bIsShieldRecover =false;
	float ShieldRecoverRate = 0.f;
	float AmountOfShieldToRecover = 0.f;
	
};
