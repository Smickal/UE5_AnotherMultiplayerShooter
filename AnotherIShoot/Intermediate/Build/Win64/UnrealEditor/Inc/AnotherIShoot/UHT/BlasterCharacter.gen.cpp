// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterCharacter() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterCharacter();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ARespawnablePickup_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UInteractWithCrosshairInterface_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister();
ANOTHERISHOOT_API UFunction* Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Delegate FOnLeftGame
struct Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnotherIShoot, nullptr, "OnLeftGame__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLeftGame_DelegateWrapper(const FMulticastScriptDelegate& OnLeftGame)
{
	OnLeftGame.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnLeftGame

// Begin Class ABlasterCharacter Function Multicast_Elim
struct BlasterCharacter_eventMulticast_Elim_Parms
{
	bool bPlayerLeftGame;
};
static const FName NAME_ABlasterCharacter_Multicast_Elim = FName(TEXT("Multicast_Elim"));
void ABlasterCharacter::Multicast_Elim(bool bPlayerLeftGame)
{
	BlasterCharacter_eventMulticast_Elim_Parms Parms;
	Parms.bPlayerLeftGame=bPlayerLeftGame ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterCharacter_Multicast_Elim);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPlayerLeftGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerLeftGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::NewProp_bPlayerLeftGame_SetBit(void* Obj)
{
	((BlasterCharacter_eventMulticast_Elim_Parms*)Obj)->bPlayerLeftGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::NewProp_bPlayerLeftGame = { "bPlayerLeftGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlasterCharacter_eventMulticast_Elim_Parms), &Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::NewProp_bPlayerLeftGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::NewProp_bPlayerLeftGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "Multicast_Elim", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::PropPointers), sizeof(BlasterCharacter_eventMulticast_Elim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlasterCharacter_eventMulticast_Elim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execMulticast_Elim)
{
	P_GET_UBOOL(Z_Param_bPlayerLeftGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_Elim_Implementation(Z_Param_bPlayerLeftGame);
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function Multicast_Elim

// Begin Class ABlasterCharacter Function Multicast_GainedTheLead
static const FName NAME_ABlasterCharacter_Multicast_GainedTheLead = FName(TEXT("Multicast_GainedTheLead"));
void ABlasterCharacter::Multicast_GainedTheLead()
{
	UFunction* Func = FindFunctionChecked(NAME_ABlasterCharacter_Multicast_GainedTheLead);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABlasterCharacter_Multicast_GainedTheLead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_Multicast_GainedTheLead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "Multicast_GainedTheLead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Multicast_GainedTheLead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_Multicast_GainedTheLead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterCharacter_Multicast_GainedTheLead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_Multicast_GainedTheLead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execMulticast_GainedTheLead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_GainedTheLead_Implementation();
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function Multicast_GainedTheLead

// Begin Class ABlasterCharacter Function Multicast_LostTheLead
static const FName NAME_ABlasterCharacter_Multicast_LostTheLead = FName(TEXT("Multicast_LostTheLead"));
void ABlasterCharacter::Multicast_LostTheLead()
{
	UFunction* Func = FindFunctionChecked(NAME_ABlasterCharacter_Multicast_LostTheLead);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABlasterCharacter_Multicast_LostTheLead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_Multicast_LostTheLead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "Multicast_LostTheLead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Multicast_LostTheLead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_Multicast_LostTheLead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterCharacter_Multicast_LostTheLead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_Multicast_LostTheLead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execMulticast_LostTheLead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_LostTheLead_Implementation();
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function Multicast_LostTheLead

// Begin Class ABlasterCharacter Function OnRep_CurrentHealth
struct Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics
{
	struct BlasterCharacter_eventOnRep_CurrentHealth_Parms
	{
		float LastHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::NewProp_LastHealth = { "LastHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventOnRep_CurrentHealth_Parms, LastHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::NewProp_LastHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::BlasterCharacter_eventOnRep_CurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::BlasterCharacter_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execOnRep_CurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LastHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth(Z_Param_LastHealth);
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function OnRep_CurrentHealth

// Begin Class ABlasterCharacter Function OnRep_CurrentShield
struct Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics
{
	struct BlasterCharacter_eventOnRep_CurrentShield_Parms
	{
		float LastShield;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::NewProp_LastShield = { "LastShield", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventOnRep_CurrentShield_Parms, LastShield), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::NewProp_LastShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_CurrentShield", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::BlasterCharacter_eventOnRep_CurrentShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::BlasterCharacter_eventOnRep_CurrentShield_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execOnRep_CurrentShield)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LastShield);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentShield(Z_Param_LastShield);
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function OnRep_CurrentShield

// Begin Class ABlasterCharacter Function OnRep_OverlappingRespawnablePickUp
struct Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics
{
	struct BlasterCharacter_eventOnRep_OverlappingRespawnablePickUp_Parms
	{
		ARespawnablePickup* Pickup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventOnRep_OverlappingRespawnablePickUp_Parms, Pickup), Z_Construct_UClass_ARespawnablePickup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::NewProp_Pickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_OverlappingRespawnablePickUp", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::BlasterCharacter_eventOnRep_OverlappingRespawnablePickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::BlasterCharacter_eventOnRep_OverlappingRespawnablePickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execOnRep_OverlappingRespawnablePickUp)
{
	P_GET_OBJECT(ARespawnablePickup,Z_Param_Pickup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_OverlappingRespawnablePickUp(Z_Param_Pickup);
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function OnRep_OverlappingRespawnablePickUp

// Begin Class ABlasterCharacter Function OnRep_OverlappingWeapon
struct Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics
{
	struct BlasterCharacter_eventOnRep_OverlappingWeapon_Parms
	{
		AWeapon* LastWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventOnRep_OverlappingWeapon_Parms, LastWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_OverlappingWeapon", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::BlasterCharacter_eventOnRep_OverlappingWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::BlasterCharacter_eventOnRep_OverlappingWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execOnRep_OverlappingWeapon)
{
	P_GET_OBJECT(AWeapon,Z_Param_LastWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_OverlappingWeapon(Z_Param_LastWeapon);
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function OnRep_OverlappingWeapon

// Begin Class ABlasterCharacter Function ReceiveDamage
struct Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics
{
	struct BlasterCharacter_eventReceiveDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatorController;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//functions\n//\n//\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_InstigatorController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "ReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::BlasterCharacter_eventReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::BlasterCharacter_eventReceiveDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execReceiveDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatorController);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatorController,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function ReceiveDamage

// Begin Class ABlasterCharacter Function Server_EquipButtonPressed
static const FName NAME_ABlasterCharacter_Server_EquipButtonPressed = FName(TEXT("Server_EquipButtonPressed"));
void ABlasterCharacter::Server_EquipButtonPressed()
{
	UFunction* Func = FindFunctionChecked(NAME_ABlasterCharacter_Server_EquipButtonPressed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABlasterCharacter_Server_EquipButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//RPC For clients that want to equip a weapon\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC For clients that want to equip a weapon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_Server_EquipButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "Server_EquipButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Server_EquipButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_Server_EquipButtonPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterCharacter_Server_EquipButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_Server_EquipButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execServer_EquipButtonPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipButtonPressed_Implementation();
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function Server_EquipButtonPressed

// Begin Class ABlasterCharacter Function Server_LeaveGame
static const FName NAME_ABlasterCharacter_Server_LeaveGame = FName(TEXT("Server_LeaveGame"));
void ABlasterCharacter::Server_LeaveGame()
{
	UFunction* Func = FindFunctionChecked(NAME_ABlasterCharacter_Server_LeaveGame);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABlasterCharacter_Server_LeaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_Server_LeaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "Server_LeaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Server_LeaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_Server_LeaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterCharacter_Server_LeaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_Server_LeaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execServer_LeaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_LeaveGame_Implementation();
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function Server_LeaveGame

// Begin Class ABlasterCharacter Function ShowSniperScopeWidget
struct BlasterCharacter_eventShowSniperScopeWidget_Parms
{
	bool bShowScope;
};
static const FName NAME_ABlasterCharacter_ShowSniperScopeWidget = FName(TEXT("ShowSniperScopeWidget"));
void ABlasterCharacter::ShowSniperScopeWidget(bool bShowScope)
{
	BlasterCharacter_eventShowSniperScopeWidget_Parms Parms;
	Parms.bShowScope=bShowScope ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterCharacter_ShowSniperScopeWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowScope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowScope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::NewProp_bShowScope_SetBit(void* Obj)
{
	((BlasterCharacter_eventShowSniperScopeWidget_Parms*)Obj)->bShowScope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::NewProp_bShowScope = { "bShowScope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlasterCharacter_eventShowSniperScopeWidget_Parms), &Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::NewProp_bShowScope_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::NewProp_bShowScope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "ShowSniperScopeWidget", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::PropPointers), sizeof(BlasterCharacter_eventShowSniperScopeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlasterCharacter_eventShowSniperScopeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABlasterCharacter Function ShowSniperScopeWidget

// Begin Class ABlasterCharacter Function UpdateDissolveMaterial
struct Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics
{
	struct BlasterCharacter_eventUpdateDissolveMaterial_Parms
	{
		float DissolveValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DissolveValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue = { "DissolveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventUpdateDissolveMaterial_Parms, DissolveValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "UpdateDissolveMaterial", nullptr, nullptr, Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::BlasterCharacter_eventUpdateDissolveMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::BlasterCharacter_eventUpdateDissolveMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execUpdateDissolveMaterial)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DissolveValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDissolveMaterial(Z_Param_DissolveValue);
	P_NATIVE_END;
}
// End Class ABlasterCharacter Function UpdateDissolveMaterial

// Begin Class ABlasterCharacter
void ABlasterCharacter::StaticRegisterNativesABlasterCharacter()
{
	UClass* Class = ABlasterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_Elim", &ABlasterCharacter::execMulticast_Elim },
		{ "Multicast_GainedTheLead", &ABlasterCharacter::execMulticast_GainedTheLead },
		{ "Multicast_LostTheLead", &ABlasterCharacter::execMulticast_LostTheLead },
		{ "OnRep_CurrentHealth", &ABlasterCharacter::execOnRep_CurrentHealth },
		{ "OnRep_CurrentShield", &ABlasterCharacter::execOnRep_CurrentShield },
		{ "OnRep_OverlappingRespawnablePickUp", &ABlasterCharacter::execOnRep_OverlappingRespawnablePickUp },
		{ "OnRep_OverlappingWeapon", &ABlasterCharacter::execOnRep_OverlappingWeapon },
		{ "ReceiveDamage", &ABlasterCharacter::execReceiveDamage },
		{ "Server_EquipButtonPressed", &ABlasterCharacter::execServer_EquipButtonPressed },
		{ "Server_LeaveGame", &ABlasterCharacter::execServer_LeaveGame },
		{ "UpdateDissolveMaterial", &ABlasterCharacter::execUpdateDissolveMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterCharacter);
UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister()
{
	return ABlasterCharacter::StaticClass();
}
struct Z_Construct_UClass_ABlasterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BlasterCharacter.h" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_head_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HitBoxes For Server-side rewind\n//\n//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HitBoxes For Server-side rewind" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pelvis_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spine_02_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spine_03_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_upperarm_l_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_upperarm_r_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lowerarm_r_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lowerarm_l_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hand_l_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hand_r_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_backpack_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_backpackBlanket_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thigh_l_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thigh_r_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_calf_l_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_calf_r_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_foot_l_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_foot_r_box_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitCollisionBoxes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverheadWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingPickup_MetaData[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LagCompensation_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRifleHipMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRifleAimMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimmedMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowGrenadeMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapWeaponMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraThreshold_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimDelay_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveTimeline_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveCurve_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialDissolveInstance_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dynamic Instance that we can change at the run time\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic Instance that we can change at the run time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolvedMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Material instance that we set on the  bluepprint, used with the dynamic material instance\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material instance that we set on the  bluepprint, used with the dynamic material instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TeamColors\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TeamColors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedDissolveMatInst_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueDissolveMatInst_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotEffect_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotComponent_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotSound_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrownSystem_MetaData[] = {
		{ "Category", "BlasterCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//CrownNiagara\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CrownNiagara" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrownComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedGrenade_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[] = {
		{ "Category", "Player Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Shield\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shield" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShield_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponClass_MetaData[] = {
		{ "Category", "BlasterCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DefaultWeapon\n" },
#endif
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DefaultWeapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableGameplay_MetaData[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_head_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pelvis_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spine_02_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spine_03_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_upperarm_l_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_upperarm_r_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lowerarm_r_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lowerarm_l_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hand_l_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hand_r_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_backpack_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_backpackBlanket_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_thigh_l_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_thigh_r_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_calf_l_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_calf_r_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_foot_l_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_foot_r_box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCollisionBoxes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitCollisionBoxes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitCollisionBoxes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverheadWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingPickup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuffComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LagCompensation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireRifleHipMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireRifleAimMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimmedMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowGrenadeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwapWeaponMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElimDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialDissolveInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolvedMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RedDissolveMatInst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueDissolveMatInst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrownSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrownComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedGrenade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterPlayerController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShield;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentShield;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterGameMode;
	static void NewProp_bDisableGameplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableGameplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterCharacter_Multicast_Elim, "Multicast_Elim" }, // 787184055
		{ &Z_Construct_UFunction_ABlasterCharacter_Multicast_GainedTheLead, "Multicast_GainedTheLead" }, // 1748300467
		{ &Z_Construct_UFunction_ABlasterCharacter_Multicast_LostTheLead, "Multicast_LostTheLead" }, // 2608169735
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 2051116199
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_CurrentShield, "OnRep_CurrentShield" }, // 1024766230
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingRespawnablePickUp, "OnRep_OverlappingRespawnablePickUp" }, // 1527901742
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 2013650438
		{ &Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage, "ReceiveDamage" }, // 4017579604
		{ &Z_Construct_UFunction_ABlasterCharacter_Server_EquipButtonPressed, "Server_EquipButtonPressed" }, // 409215074
		{ &Z_Construct_UFunction_ABlasterCharacter_Server_LeaveGame, "Server_LeaveGame" }, // 2572655062
		{ &Z_Construct_UFunction_ABlasterCharacter_ShowSniperScopeWidget, "ShowSniperScopeWidget" }, // 559336879
		{ &Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial, "UpdateDissolveMaterial" }, // 3633237763
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_head_box = { "head_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, head_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_head_box_MetaData), NewProp_head_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_pelvis_box = { "pelvis_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, pelvis_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pelvis_box_MetaData), NewProp_pelvis_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_spine_02_box = { "spine_02_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, spine_02_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spine_02_box_MetaData), NewProp_spine_02_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_spine_03_box = { "spine_03_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, spine_03_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spine_03_box_MetaData), NewProp_spine_03_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_upperarm_l_box = { "upperarm_l_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, upperarm_l_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_upperarm_l_box_MetaData), NewProp_upperarm_l_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_upperarm_r_box = { "upperarm_r_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, upperarm_r_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_upperarm_r_box_MetaData), NewProp_upperarm_r_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_lowerarm_r_box = { "lowerarm_r_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, lowerarm_r_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lowerarm_r_box_MetaData), NewProp_lowerarm_r_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_lowerarm_l_box = { "lowerarm_l_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, lowerarm_l_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lowerarm_l_box_MetaData), NewProp_lowerarm_l_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_hand_l_box = { "hand_l_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, hand_l_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hand_l_box_MetaData), NewProp_hand_l_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_hand_r_box = { "hand_r_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, hand_r_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hand_r_box_MetaData), NewProp_hand_r_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_backpack_box = { "backpack_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, backpack_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_backpack_box_MetaData), NewProp_backpack_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_backpackBlanket_box = { "backpackBlanket_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, backpackBlanket_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_backpackBlanket_box_MetaData), NewProp_backpackBlanket_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_thigh_l_box = { "thigh_l_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, thigh_l_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thigh_l_box_MetaData), NewProp_thigh_l_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_thigh_r_box = { "thigh_r_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, thigh_r_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thigh_r_box_MetaData), NewProp_thigh_r_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_calf_l_box = { "calf_l_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, calf_l_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_calf_l_box_MetaData), NewProp_calf_l_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_calf_r_box = { "calf_r_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, calf_r_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_calf_r_box_MetaData), NewProp_calf_r_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_foot_l_box = { "foot_l_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, foot_l_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_foot_l_box_MetaData), NewProp_foot_l_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_foot_r_box = { "foot_r_box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, foot_r_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_foot_r_box_MetaData), NewProp_foot_r_box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitCollisionBoxes_ValueProp = { "HitCollisionBoxes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitCollisionBoxes_Key_KeyProp = { "HitCollisionBoxes_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitCollisionBoxes = { "HitCollisionBoxes", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, HitCollisionBoxes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitCollisionBoxes_MetaData), NewProp_HitCollisionBoxes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverheadWidget_MetaData), NewProp_OverheadWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingWeapon_MetaData), NewProp_OverlappingWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingPickup = { "OverlappingPickup", "OnRep_OverlappingRespawnablePickUp", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverlappingPickup), Z_Construct_UClass_ARespawnablePickup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingPickup_MetaData), NewProp_OverlappingPickup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CombatComp = { "CombatComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CombatComp), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComp_MetaData), NewProp_CombatComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BuffComp = { "BuffComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, BuffComp), Z_Construct_UClass_UBuffComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffComp_MetaData), NewProp_BuffComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_LagCompensation = { "LagCompensation", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, LagCompensation), Z_Construct_UClass_ULagCompensationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LagCompensation_MetaData), NewProp_LagCompensation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireRifleHipMontage = { "FireRifleHipMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FireRifleHipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRifleHipMontage_MetaData), NewProp_FireRifleHipMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireRifleAimMontage = { "FireRifleAimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FireRifleAimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRifleAimMontage_MetaData), NewProp_FireRifleAimMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadMontage_MetaData), NewProp_ReloadMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactMontage_MetaData), NewProp_HitReactMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimmedMontage = { "ElimmedMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimmedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimmedMontage_MetaData), NewProp_ElimmedMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ThrowGrenadeMontage = { "ThrowGrenadeMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ThrowGrenadeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowGrenadeMontage_MetaData), NewProp_ThrowGrenadeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_SwapWeaponMontage = { "SwapWeaponMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, SwapWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapWeaponMontage_MetaData), NewProp_SwapWeaponMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraThreshold = { "CameraThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CameraThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraThreshold_MetaData), NewProp_CameraThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDelay = { "ElimDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimDelay_MetaData), NewProp_ElimDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline = { "DissolveTimeline", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DissolveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveTimeline_MetaData), NewProp_DissolveTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve = { "DissolveCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DissolveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveCurve_MetaData), NewProp_DissolveCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicMaterialDissolveInstance = { "DynamicMaterialDissolveInstance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DynamicMaterialDissolveInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterialDissolveInstance_MetaData), NewProp_DynamicMaterialDissolveInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolvedMaterialInstance = { "DissolvedMaterialInstance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DissolvedMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolvedMaterialInstance_MetaData), NewProp_DissolvedMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, RedMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedMaterial_MetaData), NewProp_RedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, BlueMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueMaterial_MetaData), NewProp_BlueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OriginalMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaterial_MetaData), NewProp_OriginalMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_RedDissolveMatInst = { "RedDissolveMatInst", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, RedDissolveMatInst), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedDissolveMatInst_MetaData), NewProp_RedDissolveMatInst_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlueDissolveMatInst = { "BlueDissolveMatInst", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, BlueDissolveMatInst), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueDissolveMatInst_MetaData), NewProp_BlueDissolveMatInst_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotEffect = { "ElimBotEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimBotEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimBotEffect_MetaData), NewProp_ElimBotEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotComponent = { "ElimBotComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimBotComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimBotComponent_MetaData), NewProp_ElimBotComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotSound = { "ElimBotSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimBotSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimBotSound_MetaData), NewProp_ElimBotSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrownSystem = { "CrownSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CrownSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrownSystem_MetaData), NewProp_CrownSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrownComponent = { "CrownComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CrownComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrownComponent_MetaData), NewProp_CrownComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AttachedGrenade = { "AttachedGrenade", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, AttachedGrenade), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedGrenade_MetaData), NewProp_AttachedGrenade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlasterPlayerController = { "BlasterPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, BlasterPlayerController), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterPlayerController_MetaData), NewProp_BlasterPlayerController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxShield = { "MaxShield", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, MaxShield), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShield_MetaData), NewProp_MaxShield_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CurrentShield = { "CurrentShield", "OnRep_CurrentShield", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CurrentShield), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentShield_MetaData), NewProp_CurrentShield_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DefaultWeaponClass = { "DefaultWeaponClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DefaultWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponClass_MetaData), NewProp_DefaultWeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlasterGameMode = { "BlasterGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, BlasterGameMode), Z_Construct_UClass_ABlasterGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterGameMode_MetaData), NewProp_BlasterGameMode_MetaData) };
void Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_bDisableGameplay_SetBit(void* Obj)
{
	((ABlasterCharacter*)Obj)->bDisableGameplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_bDisableGameplay = { "bDisableGameplay", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlasterCharacter), &Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_bDisableGameplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableGameplay_MetaData), NewProp_bDisableGameplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_head_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_pelvis_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_spine_02_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_spine_03_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_upperarm_l_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_upperarm_r_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_lowerarm_r_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_lowerarm_l_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_hand_l_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_hand_r_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_backpack_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_backpackBlanket_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_thigh_l_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_thigh_r_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_calf_l_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_calf_r_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_foot_l_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_foot_r_box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitCollisionBoxes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitCollisionBoxes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitCollisionBoxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CombatComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BuffComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_LagCompensation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireRifleHipMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireRifleAimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ReloadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimmedMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ThrowGrenadeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_SwapWeaponMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicMaterialDissolveInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolvedMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_RedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OriginalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_RedDissolveMatInst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlueDissolveMatInst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrownSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrownComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AttachedGrenade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlasterPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CurrentShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DefaultWeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlasterGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_bDisableGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABlasterCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractWithCrosshairInterface_NoRegister, (int32)VTABLE_OFFSET(ABlasterCharacter, IInteractWithCrosshairInterface), false },  // 2529295765
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams = {
	&ABlasterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterCharacter()
{
	if (!Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton, Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ABlasterCharacter>()
{
	return ABlasterCharacter::StaticClass();
}
void ABlasterCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));
	static const FName Name_OverlappingPickup(TEXT("OverlappingPickup"));
	static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static const FName Name_CurrentShield(TEXT("CurrentShield"));
	static const FName Name_bDisableGameplay(TEXT("bDisableGameplay"));
	const bool bIsValid = true
		&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName()
		&& Name_OverlappingPickup == ClassReps[(int32)ENetFields_Private::OverlappingPickup].Property->GetFName()
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_CurrentShield == ClassReps[(int32)ENetFields_Private::CurrentShield].Property->GetFName()
		&& Name_bDisableGameplay == ClassReps[(int32)ENetFields_Private::bDisableGameplay].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterCharacter);
ABlasterCharacter::~ABlasterCharacter() {}
// End Class ABlasterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterCharacter, ABlasterCharacter::StaticClass, TEXT("ABlasterCharacter"), &Z_Registration_Info_UClass_ABlasterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterCharacter), 1504421114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_2912576787(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
