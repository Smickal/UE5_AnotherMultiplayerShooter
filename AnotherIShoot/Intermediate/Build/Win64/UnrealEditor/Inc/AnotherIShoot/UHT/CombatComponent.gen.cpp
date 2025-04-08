// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/BlasterComponent/CombatComponent.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UCombatComponent();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
ANOTHERISHOOT_API UEnum* Z_Construct_UEnum_AnotherIShoot_ECombatState();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class UCombatComponent Function FinishedSwap
struct Z_Construct_UFunction_UCombatComponent_FinishedSwap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishedSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishedSwap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishedSwap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_FinishedSwap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_FinishedSwap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishedSwap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execFinishedSwap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishedSwap();
	P_NATIVE_END;
}
// End Class UCombatComponent Function FinishedSwap

// Begin Class UCombatComponent Function FinishReloading
struct Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishReloading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_FinishReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execFinishReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishReloading();
	P_NATIVE_END;
}
// End Class UCombatComponent Function FinishReloading

// Begin Class UCombatComponent Function FinishSwapAttachWeapon
struct Z_Construct_UFunction_UCombatComponent_FinishSwapAttachWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishSwapAttachWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishSwapAttachWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishSwapAttachWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_FinishSwapAttachWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_FinishSwapAttachWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishSwapAttachWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execFinishSwapAttachWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishSwapAttachWeapon();
	P_NATIVE_END;
}
// End Class UCombatComponent Function FinishSwapAttachWeapon

// Begin Class UCombatComponent Function LaunchGrenade
struct Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "LaunchGrenade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_LaunchGrenade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execLaunchGrenade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchGrenade();
	P_NATIVE_END;
}
// End Class UCombatComponent Function LaunchGrenade

// Begin Class UCombatComponent Function Multicast_Fire
struct CombatComponent_eventMulticast_Fire_Parms
{
	FVector_NetQuantize TraceHitTarget;
};
static const FName NAME_UCombatComponent_Multicast_Fire = FName(TEXT("Multicast_Fire"));
void UCombatComponent::Multicast_Fire(FVector_NetQuantize const& TraceHitTarget)
{
	CombatComponent_eventMulticast_Fire_Parms Parms;
	Parms.TraceHitTarget=TraceHitTarget;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Multicast_Fire);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventMulticast_Fire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitTarget_MetaData), NewProp_TraceHitTarget_MetaData) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::NewProp_TraceHitTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Multicast_Fire", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::PropPointers), sizeof(CombatComponent_eventMulticast_Fire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComponent_eventMulticast_Fire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_Multicast_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Multicast_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execMulticast_Fire)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_Fire_Implementation(Z_Param_TraceHitTarget);
	P_NATIVE_END;
}
// End Class UCombatComponent Function Multicast_Fire

// Begin Class UCombatComponent Function Multicast_ShotgunFire
struct CombatComponent_eventMulticast_ShotgunFire_Parms
{
	TArray<FVector_NetQuantize> TraceHitTargets;
};
static const FName NAME_UCombatComponent_Multicast_ShotgunFire = FName(TEXT("Multicast_ShotgunFire"));
void UCombatComponent::Multicast_ShotgunFire(TArray<FVector_NetQuantize> const& TraceHitTargets)
{
	CombatComponent_eventMulticast_ShotgunFire_Parms Parms;
	Parms.TraceHitTargets=TraceHitTargets;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Multicast_ShotgunFire);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceHitTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::NewProp_TraceHitTargets_Inner = { "TraceHitTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::NewProp_TraceHitTargets = { "TraceHitTargets", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventMulticast_ShotgunFire_Parms, TraceHitTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitTargets_MetaData), NewProp_TraceHitTargets_MetaData) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::NewProp_TraceHitTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::NewProp_TraceHitTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Multicast_ShotgunFire", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::PropPointers), sizeof(CombatComponent_eventMulticast_ShotgunFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComponent_eventMulticast_ShotgunFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execMulticast_ShotgunFire)
{
	P_GET_TARRAY(FVector_NetQuantize,Z_Param_TraceHitTargets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_ShotgunFire_Implementation(Z_Param_TraceHitTargets);
	P_NATIVE_END;
}
// End Class UCombatComponent Function Multicast_ShotgunFire

// Begin Class UCombatComponent Function OnRep_Aiming
struct Z_Construct_UFunction_UCombatComponent_OnRep_Aiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_Aiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_Aiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_Aiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_Aiming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_Aiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_Aiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_Aiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Aiming();
	P_NATIVE_END;
}
// End Class UCombatComponent Function OnRep_Aiming

// Begin Class UCombatComponent Function OnRep_CarriedAmmo
struct Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CarriedAmmo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_CarriedAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CarriedAmmo();
	P_NATIVE_END;
}
// End Class UCombatComponent Function OnRep_CarriedAmmo

// Begin Class UCombatComponent Function OnRep_CombatState
struct Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CombatState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CombatState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_CombatState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CombatState();
	P_NATIVE_END;
}
// End Class UCombatComponent Function OnRep_CombatState

// Begin Class UCombatComponent Function OnRep_EquippedWeapon
struct Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables\n" },
#endif
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_EquippedWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_EquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EquippedWeapon();
	P_NATIVE_END;
}
// End Class UCombatComponent Function OnRep_EquippedWeapon

// Begin Class UCombatComponent Function OnRep_Grenade
struct Z_Construct_UFunction_UCombatComponent_OnRep_Grenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_Grenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_Grenade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_Grenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_Grenade_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_Grenade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_Grenade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_Grenade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Grenade();
	P_NATIVE_END;
}
// End Class UCombatComponent Function OnRep_Grenade

// Begin Class UCombatComponent Function OnRep_SecondaryWeapon
struct Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_SecondaryWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_SecondaryWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SecondaryWeapon();
	P_NATIVE_END;
}
// End Class UCombatComponent Function OnRep_SecondaryWeapon

// Begin Class UCombatComponent Function Server_Fire
struct CombatComponent_eventServer_Fire_Parms
{
	FVector_NetQuantize TraceHitTarget;
	float FireDelay;
};
static const FName NAME_UCombatComponent_Server_Fire = FName(TEXT("Server_Fire"));
void UCombatComponent::Server_Fire(FVector_NetQuantize const& TraceHitTarget, float FireDelay)
{
	CombatComponent_eventServer_Fire_Parms Parms;
	Parms.TraceHitTarget=TraceHitTarget;
	Parms.FireDelay=FireDelay;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Server_Fire);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServer_Fire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitTarget_MetaData), NewProp_TraceHitTarget_MetaData) }; // 1723029535
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServer_Fire_Parms, FireDelay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::NewProp_TraceHitTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::NewProp_FireDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Server_Fire", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::PropPointers), sizeof(CombatComponent_eventServer_Fire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComponent_eventServer_Fire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_Server_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Server_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServer_Fire)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FireDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Fire_Validate(Z_Param_TraceHitTarget,Z_Param_FireDelay))
	{
		RPC_ValidateFailed(TEXT("Server_Fire_Validate"));
		return;
	}
	P_THIS->Server_Fire_Implementation(Z_Param_TraceHitTarget,Z_Param_FireDelay);
	P_NATIVE_END;
}
// End Class UCombatComponent Function Server_Fire

// Begin Class UCombatComponent Function Server_LaunchGrenade
struct CombatComponent_eventServer_LaunchGrenade_Parms
{
	FVector_NetQuantize Target;
};
static const FName NAME_UCombatComponent_Server_LaunchGrenade = FName(TEXT("Server_LaunchGrenade"));
void UCombatComponent::Server_LaunchGrenade(const FVector_NetQuantize Target)
{
	CombatComponent_eventServer_LaunchGrenade_Parms Parms;
	Parms.Target=Target;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Server_LaunchGrenade);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServer_LaunchGrenade_Parms, Target), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Server_LaunchGrenade", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::PropPointers), sizeof(CombatComponent_eventServer_LaunchGrenade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComponent_eventServer_LaunchGrenade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServer_LaunchGrenade)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_LaunchGrenade_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UCombatComponent Function Server_LaunchGrenade

// Begin Class UCombatComponent Function Server_Reload
static const FName NAME_UCombatComponent_Server_Reload = FName(TEXT("Server_Reload"));
void UCombatComponent::Server_Reload()
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Server_Reload);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCombatComponent_Server_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Server_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Server_Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Server_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_Server_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Server_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServer_Reload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Reload_Implementation();
	P_NATIVE_END;
}
// End Class UCombatComponent Function Server_Reload

// Begin Class UCombatComponent Function Server_SetAiming
struct CombatComponent_eventServer_SetAiming_Parms
{
	bool bAiming;
};
static const FName NAME_UCombatComponent_Server_SetAiming = FName(TEXT("Server_SetAiming"));
void UCombatComponent::Server_SetAiming(bool bAiming)
{
	CombatComponent_eventServer_SetAiming_Parms Parms;
	Parms.bAiming=bAiming ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Server_SetAiming);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::NewProp_bAiming_SetBit(void* Obj)
{
	((CombatComponent_eventServer_SetAiming_Parms*)Obj)->bAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComponent_eventServer_SetAiming_Parms), &Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::NewProp_bAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Server_SetAiming", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::PropPointers), sizeof(CombatComponent_eventServer_SetAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComponent_eventServer_SetAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_Server_SetAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Server_SetAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServer_SetAiming)
{
	P_GET_UBOOL(Z_Param_bAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetAiming_Implementation(Z_Param_bAiming);
	P_NATIVE_END;
}
// End Class UCombatComponent Function Server_SetAiming

// Begin Class UCombatComponent Function Server_ShotgunFire
struct CombatComponent_eventServer_ShotgunFire_Parms
{
	TArray<FVector_NetQuantize> TraceHitTargets;
	float FireDelay;
};
static const FName NAME_UCombatComponent_Server_ShotgunFire = FName(TEXT("Server_ShotgunFire"));
void UCombatComponent::Server_ShotgunFire(TArray<FVector_NetQuantize> const& TraceHitTargets, float FireDelay)
{
	CombatComponent_eventServer_ShotgunFire_Parms Parms;
	Parms.TraceHitTargets=TraceHitTargets;
	Parms.FireDelay=FireDelay;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Server_ShotgunFire);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceHitTargets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::NewProp_TraceHitTargets_Inner = { "TraceHitTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::NewProp_TraceHitTargets = { "TraceHitTargets", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServer_ShotgunFire_Parms, TraceHitTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitTargets_MetaData), NewProp_TraceHitTargets_MetaData) }; // 1723029535
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServer_ShotgunFire_Parms, FireDelay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::NewProp_TraceHitTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::NewProp_TraceHitTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::NewProp_FireDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Server_ShotgunFire", nullptr, nullptr, Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::PropPointers), sizeof(CombatComponent_eventServer_ShotgunFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComponent_eventServer_ShotgunFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServer_ShotgunFire)
{
	P_GET_TARRAY(FVector_NetQuantize,Z_Param_TraceHitTargets);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FireDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ShotgunFire_Validate(Z_Param_TraceHitTargets,Z_Param_FireDelay))
	{
		RPC_ValidateFailed(TEXT("Server_ShotgunFire_Validate"));
		return;
	}
	P_THIS->Server_ShotgunFire_Implementation(Z_Param_TraceHitTargets,Z_Param_FireDelay);
	P_NATIVE_END;
}
// End Class UCombatComponent Function Server_ShotgunFire

// Begin Class UCombatComponent Function Server_ThrowGrenade
static const FName NAME_UCombatComponent_Server_ThrowGrenade = FName(TEXT("Server_ThrowGrenade"));
void UCombatComponent::Server_ThrowGrenade()
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Server_ThrowGrenade);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Server_ThrowGrenade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServer_ThrowGrenade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ThrowGrenade_Implementation();
	P_NATIVE_END;
}
// End Class UCombatComponent Function Server_ThrowGrenade

// Begin Class UCombatComponent Function ShotgunShellReload
struct Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ShotgunShellReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_ShotgunShellReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execShotgunShellReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShotgunShellReload();
	P_NATIVE_END;
}
// End Class UCombatComponent Function ShotgunShellReload

// Begin Class UCombatComponent Function ThrowGrenadeFinished
struct Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ThrowGrenadeFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execThrowGrenadeFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowGrenadeFinished();
	P_NATIVE_END;
}
// End Class UCombatComponent Function ThrowGrenadeFinished

// Begin Class UCombatComponent
void UCombatComponent::StaticRegisterNativesUCombatComponent()
{
	UClass* Class = UCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishedSwap", &UCombatComponent::execFinishedSwap },
		{ "FinishReloading", &UCombatComponent::execFinishReloading },
		{ "FinishSwapAttachWeapon", &UCombatComponent::execFinishSwapAttachWeapon },
		{ "LaunchGrenade", &UCombatComponent::execLaunchGrenade },
		{ "Multicast_Fire", &UCombatComponent::execMulticast_Fire },
		{ "Multicast_ShotgunFire", &UCombatComponent::execMulticast_ShotgunFire },
		{ "OnRep_Aiming", &UCombatComponent::execOnRep_Aiming },
		{ "OnRep_CarriedAmmo", &UCombatComponent::execOnRep_CarriedAmmo },
		{ "OnRep_CombatState", &UCombatComponent::execOnRep_CombatState },
		{ "OnRep_EquippedWeapon", &UCombatComponent::execOnRep_EquippedWeapon },
		{ "OnRep_Grenade", &UCombatComponent::execOnRep_Grenade },
		{ "OnRep_SecondaryWeapon", &UCombatComponent::execOnRep_SecondaryWeapon },
		{ "Server_Fire", &UCombatComponent::execServer_Fire },
		{ "Server_LaunchGrenade", &UCombatComponent::execServer_LaunchGrenade },
		{ "Server_Reload", &UCombatComponent::execServer_Reload },
		{ "Server_SetAiming", &UCombatComponent::execServer_SetAiming },
		{ "Server_ShotgunFire", &UCombatComponent::execServer_ShotgunFire },
		{ "Server_ThrowGrenade", &UCombatComponent::execServer_ThrowGrenade },
		{ "ShotgunShellReload", &UCombatComponent::execShotgunShellReload },
		{ "ThrowGrenadeFinished", &UCombatComponent::execThrowGrenadeFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent);
UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
{
	return UCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BlasterComponent/CombatComponent.h" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeClass_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSped_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Carried ammo for the currently Equipped Weapon\n" },
#endif
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Carried ammo for the currently Equipped Weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingARAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingRocketAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingPistolAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingSMGAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingShotgunAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingSniperAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingGrenadeLauncherAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCarriedAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrenade_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGrenade_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatState_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponent/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GrenadeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSped;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CarriedAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingARAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingRocketAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingPistolAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingSMGAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingShotgunAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingSniperAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingGrenadeLauncherAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCarriedAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGrenade;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGrenade;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombatState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_FinishedSwap, "FinishedSwap" }, // 107761284
		{ &Z_Construct_UFunction_UCombatComponent_FinishReloading, "FinishReloading" }, // 3233109038
		{ &Z_Construct_UFunction_UCombatComponent_FinishSwapAttachWeapon, "FinishSwapAttachWeapon" }, // 2708096249
		{ &Z_Construct_UFunction_UCombatComponent_LaunchGrenade, "LaunchGrenade" }, // 2133835375
		{ &Z_Construct_UFunction_UCombatComponent_Multicast_Fire, "Multicast_Fire" }, // 2253917351
		{ &Z_Construct_UFunction_UCombatComponent_Multicast_ShotgunFire, "Multicast_ShotgunFire" }, // 1607091445
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_Aiming, "OnRep_Aiming" }, // 105150701
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo, "OnRep_CarriedAmmo" }, // 1006875674
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CombatState, "OnRep_CombatState" }, // 2700311886
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon, "OnRep_EquippedWeapon" }, // 4116278674
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_Grenade, "OnRep_Grenade" }, // 1073353748
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_SecondaryWeapon, "OnRep_SecondaryWeapon" }, // 4290192520
		{ &Z_Construct_UFunction_UCombatComponent_Server_Fire, "Server_Fire" }, // 621465073
		{ &Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade, "Server_LaunchGrenade" }, // 3484384137
		{ &Z_Construct_UFunction_UCombatComponent_Server_Reload, "Server_Reload" }, // 3499619291
		{ &Z_Construct_UFunction_UCombatComponent_Server_SetAiming, "Server_SetAiming" }, // 1949959833
		{ &Z_Construct_UFunction_UCombatComponent_Server_ShotgunFire, "Server_ShotgunFire" }, // 2874637717
		{ &Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade, "Server_ThrowGrenade" }, // 4211615430
		{ &Z_Construct_UFunction_UCombatComponent_ShotgunShellReload, "ShotgunShellReload" }, // 4046490671
		{ &Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished, "ThrowGrenadeFinished" }, // 2316588341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass = { "GrenadeClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, GrenadeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeClass_MetaData), NewProp_GrenadeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquippedWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", "OnRep_SecondaryWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, SecondaryWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryWeapon_MetaData), NewProp_SecondaryWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, PlayerCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, PlayerController), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, HUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_MetaData), NewProp_HUD_MetaData) };
void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((UCombatComponent*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsAiming = { "bIsAiming", "OnRep_Aiming", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAiming_MetaData), NewProp_bIsAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed = { "BaseWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, BaseWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseWalkSpeed_MetaData), NewProp_BaseWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed = { "AimWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, AimWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimWalkSpeed_MetaData), NewProp_AimWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ZoomedFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomedFOV_MetaData), NewProp_ZoomedFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSped = { "ZoomInterpSped", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ZoomInterpSped), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpSped_MetaData), NewProp_ZoomInterpSped_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo = { "CarriedAmmo", "OnRep_CarriedAmmo", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, CarriedAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedAmmo_MetaData), NewProp_CarriedAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo = { "StartingARAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingARAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingARAmmo_MetaData), NewProp_StartingARAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo = { "StartingRocketAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingRocketAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingRocketAmmo_MetaData), NewProp_StartingRocketAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo = { "StartingPistolAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingPistolAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingPistolAmmo_MetaData), NewProp_StartingPistolAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo = { "StartingSMGAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingSMGAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingSMGAmmo_MetaData), NewProp_StartingSMGAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo = { "StartingShotgunAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingShotgunAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingShotgunAmmo_MetaData), NewProp_StartingShotgunAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo = { "StartingSniperAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingSniperAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingSniperAmmo_MetaData), NewProp_StartingSniperAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo = { "StartingGrenadeLauncherAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingGrenadeLauncherAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingGrenadeLauncherAmmo_MetaData), NewProp_StartingGrenadeLauncherAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxCarriedAmmo = { "MaxCarriedAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, MaxCarriedAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCarriedAmmo_MetaData), NewProp_MaxCarriedAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenade = { "MaxGrenade", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, MaxGrenade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGrenade_MetaData), NewProp_MaxGrenade_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CurrentGrenade = { "CurrentGrenade", "OnRep_Grenade", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, CurrentGrenade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGrenade_MetaData), NewProp_CurrentGrenade_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState = { "CombatState", "OnRep_CombatState", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, CombatState), Z_Construct_UEnum_AnotherIShoot_ECombatState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatState_MetaData), NewProp_CombatState_MetaData) }; // 805346639
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_SecondaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxCarriedAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CurrentGrenade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
	&UCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatComponent()
{
	if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UCombatComponent>()
{
	return UCombatComponent::StaticClass();
}
void UCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
	static const FName Name_SecondaryWeapon(TEXT("SecondaryWeapon"));
	static const FName Name_bIsAiming(TEXT("bIsAiming"));
	static const FName Name_CarriedAmmo(TEXT("CarriedAmmo"));
	static const FName Name_CurrentGrenade(TEXT("CurrentGrenade"));
	static const FName Name_CombatState(TEXT("CombatState"));
	const bool bIsValid = true
		&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
		&& Name_SecondaryWeapon == ClassReps[(int32)ENetFields_Private::SecondaryWeapon].Property->GetFName()
		&& Name_bIsAiming == ClassReps[(int32)ENetFields_Private::bIsAiming].Property->GetFName()
		&& Name_CarriedAmmo == ClassReps[(int32)ENetFields_Private::CarriedAmmo].Property->GetFName()
		&& Name_CurrentGrenade == ClassReps[(int32)ENetFields_Private::CurrentGrenade].Property->GetFName()
		&& Name_CombatState == ClassReps[(int32)ENetFields_Private::CombatState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCombatComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
UCombatComponent::~UCombatComponent() {}
// End Class UCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 1265564323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_2890264703(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
