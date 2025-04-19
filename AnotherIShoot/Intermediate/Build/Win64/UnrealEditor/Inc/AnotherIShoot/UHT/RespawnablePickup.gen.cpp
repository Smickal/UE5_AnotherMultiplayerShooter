// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PickUps/RespawnablePickup.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnablePickup() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ARespawnablePickup();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ARespawnablePickup_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_URadialCooldown_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ARespawnablePickup Function Multicast_SetTimer
struct RespawnablePickup_eventMulticast_SetTimer_Parms
{
	float Timer;
};
static const FName NAME_ARespawnablePickup_Multicast_SetTimer = FName(TEXT("Multicast_SetTimer"));
void ARespawnablePickup::Multicast_SetTimer(float Timer)
{
	RespawnablePickup_eventMulticast_SetTimer_Parms Parms;
	Parms.Timer=Timer;
	UFunction* Func = FindFunctionChecked(NAME_ARespawnablePickup_Multicast_SetTimer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventMulticast_SetTimer_Parms, Timer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::NewProp_Timer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnablePickup, nullptr, "Multicast_SetTimer", nullptr, nullptr, Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::PropPointers), sizeof(RespawnablePickup_eventMulticast_SetTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(RespawnablePickup_eventMulticast_SetTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARespawnablePickup::execMulticast_SetTimer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SetTimer_Implementation(Z_Param_Timer);
	P_NATIVE_END;
}
// End Class ARespawnablePickup Function Multicast_SetTimer

// Begin Class ARespawnablePickup Function OnRep_SpawnTime
struct Z_Construct_UFunction_ARespawnablePickup_OnRep_SpawnTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnablePickup_OnRep_SpawnTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnablePickup, nullptr, "OnRep_SpawnTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_OnRep_SpawnTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARespawnablePickup_OnRep_SpawnTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARespawnablePickup_OnRep_SpawnTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARespawnablePickup_OnRep_SpawnTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARespawnablePickup::execOnRep_SpawnTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SpawnTime();
	P_NATIVE_END;
}
// End Class ARespawnablePickup Function OnRep_SpawnTime

// Begin Class ARespawnablePickup Function OnSphereEndOverlap
struct Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics
{
	struct RespawnablePickup_eventOnSphereEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* AnotherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnotherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::NewProp_AnotherActor = { "AnotherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereEndOverlap_Parms, AnotherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::NewProp_AnotherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnablePickup, nullptr, "OnSphereEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::RespawnablePickup_eventOnSphereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::RespawnablePickup_eventOnSphereEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARespawnablePickup::execOnSphereEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_AnotherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_AnotherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ARespawnablePickup Function OnSphereEndOverlap

// Begin Class ARespawnablePickup Function OnSphereOverlap
struct Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics
{
	struct RespawnablePickup_eventOnSphereOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* AnotherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnotherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_AnotherActor = { "AnotherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereOverlap_Parms, AnotherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((RespawnablePickup_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RespawnablePickup_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RespawnablePickup_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_AnotherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnablePickup, nullptr, "OnSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::RespawnablePickup_eventOnSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::RespawnablePickup_eventOnSphereOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARespawnablePickup::execOnSphereOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_AnotherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_AnotherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ARespawnablePickup Function OnSphereOverlap

// Begin Class ARespawnablePickup Function SpawnPickUpTimerFinished
struct Z_Construct_UFunction_ARespawnablePickup_SpawnPickUpTimerFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnablePickup_SpawnPickUpTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnablePickup, nullptr, "SpawnPickUpTimerFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_SpawnPickUpTimerFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARespawnablePickup_SpawnPickUpTimerFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARespawnablePickup_SpawnPickUpTimerFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARespawnablePickup_SpawnPickUpTimerFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARespawnablePickup::execSpawnPickUpTimerFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnPickUpTimerFinished();
	P_NATIVE_END;
}
// End Class ARespawnablePickup Function SpawnPickUpTimerFinished

// Begin Class ARespawnablePickup Function StartSpawnPickUpTimer
struct Z_Construct_UFunction_ARespawnablePickup_StartSpawnPickUpTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARespawnablePickup_StartSpawnPickUpTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARespawnablePickup, nullptr, "StartSpawnPickUpTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARespawnablePickup_StartSpawnPickUpTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARespawnablePickup_StartSpawnPickUpTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARespawnablePickup_StartSpawnPickUpTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARespawnablePickup_StartSpawnPickUpTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARespawnablePickup::execStartSpawnPickUpTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSpawnPickUpTimer();
	P_NATIVE_END;
}
// End Class ARespawnablePickup Function StartSpawnPickUpTimer

// Begin Class ARespawnablePickup
void ARespawnablePickup::StaticRegisterNativesARespawnablePickup()
{
	UClass* Class = ARespawnablePickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_SetTimer", &ARespawnablePickup::execMulticast_SetTimer },
		{ "OnRep_SpawnTime", &ARespawnablePickup::execOnRep_SpawnTime },
		{ "OnSphereEndOverlap", &ARespawnablePickup::execOnSphereEndOverlap },
		{ "OnSphereOverlap", &ARespawnablePickup::execOnSphereOverlap },
		{ "SpawnPickUpTimerFinished", &ARespawnablePickup::execSpawnPickUpTimerFinished },
		{ "StartSpawnPickUpTimer", &ARespawnablePickup::execStartSpawnPickUpTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARespawnablePickup);
UClass* Z_Construct_UClass_ARespawnablePickup_NoRegister()
{
	return ARespawnablePickup::StaticClass();
}
struct Z_Construct_UClass_ARespawnablePickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickUps/RespawnablePickup.h" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "RespawnablePickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponPickup_MetaData[] = {
		{ "Category", "RespawnablePickup" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupWeaponClasses_MetaData[] = {
		{ "Category", "RespawnablePickup" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpBuffClassess_MetaData[] = {
		{ "Category", "RespawnablePickup" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPickup_MetaData[] = {
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToSpawnAfterPickUp_MetaData[] = {
		{ "Category", "RespawnablePickup" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupTimeMin_MetaData[] = {
		{ "Category", "RespawnablePickup" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupTimeMax_MetaData[] = {
		{ "Category", "RespawnablePickup" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[] = {
		{ "Category", "RespawnablePickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialCooldownWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTime_MetaData[] = {
		{ "ModuleRelativePath", "PickUps/RespawnablePickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static void NewProp_bIsWeaponPickup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponPickup;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PickupWeaponClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PickupWeaponClasses;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PickUpBuffClassess_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PickUpBuffClassess;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPickup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToSpawnAfterPickUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPickupTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPickupTimeMax;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialCooldownWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARespawnablePickup_Multicast_SetTimer, "Multicast_SetTimer" }, // 4068784312
		{ &Z_Construct_UFunction_ARespawnablePickup_OnRep_SpawnTime, "OnRep_SpawnTime" }, // 1500049545
		{ &Z_Construct_UFunction_ARespawnablePickup_OnSphereEndOverlap, "OnSphereEndOverlap" }, // 595921521
		{ &Z_Construct_UFunction_ARespawnablePickup_OnSphereOverlap, "OnSphereOverlap" }, // 2230580288
		{ &Z_Construct_UFunction_ARespawnablePickup_SpawnPickUpTimerFinished, "SpawnPickUpTimerFinished" }, // 2114886847
		{ &Z_Construct_UFunction_ARespawnablePickup_StartSpawnPickUpTimer, "StartSpawnPickUpTimer" }, // 3799013396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARespawnablePickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
void Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_bIsWeaponPickup_SetBit(void* Obj)
{
	((ARespawnablePickup*)Obj)->bIsWeaponPickup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_bIsWeaponPickup = { "bIsWeaponPickup", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARespawnablePickup), &Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_bIsWeaponPickup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWeaponPickup_MetaData), NewProp_bIsWeaponPickup_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_PickupWeaponClasses_Inner = { "PickupWeaponClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_PickupWeaponClasses = { "PickupWeaponClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, PickupWeaponClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupWeaponClasses_MetaData), NewProp_PickupWeaponClasses_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_PickUpBuffClassess_Inner = { "PickUpBuffClassess", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_PickUpBuffClassess = { "PickUpBuffClassess", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, PickUpBuffClassess), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpBuffClassess_MetaData), NewProp_PickUpBuffClassess_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SpawnedPickup = { "SpawnedPickup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, SpawnedPickup), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedPickup_MetaData), NewProp_SpawnedPickup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_TimeToSpawnAfterPickUp = { "TimeToSpawnAfterPickUp", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, TimeToSpawnAfterPickUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToSpawnAfterPickUp_MetaData), NewProp_TimeToSpawnAfterPickUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SpawnPickupTimeMin = { "SpawnPickupTimeMin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, SpawnPickupTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPickupTimeMin_MetaData), NewProp_SpawnPickupTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SpawnPickupTimeMax = { "SpawnPickupTimeMax", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, SpawnPickupTimeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPickupTimeMax_MetaData), NewProp_SpawnPickupTimeMax_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_RadialCooldownWidget = { "RadialCooldownWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, RadialCooldownWidget), Z_Construct_UClass_URadialCooldown_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialCooldownWidget_MetaData), NewProp_RadialCooldownWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SpawnTime = { "SpawnTime", "OnRep_Spawntime", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARespawnablePickup, SpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTime_MetaData), NewProp_SpawnTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARespawnablePickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_bIsWeaponPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_PickupWeaponClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_PickupWeaponClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_PickUpBuffClassess_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_PickUpBuffClassess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SpawnedPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_TimeToSpawnAfterPickUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SpawnPickupTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SpawnPickupTimeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_WidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_RadialCooldownWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnablePickup_Statics::NewProp_SpawnTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnablePickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARespawnablePickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnablePickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARespawnablePickup_Statics::ClassParams = {
	&ARespawnablePickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARespawnablePickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnablePickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnablePickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ARespawnablePickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARespawnablePickup()
{
	if (!Z_Registration_Info_UClass_ARespawnablePickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARespawnablePickup.OuterSingleton, Z_Construct_UClass_ARespawnablePickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARespawnablePickup.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ARespawnablePickup>()
{
	return ARespawnablePickup::StaticClass();
}
void ARespawnablePickup::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SpawnTime(TEXT("SpawnTime"));
	const bool bIsValid = true
		&& Name_SpawnTime == ClassReps[(int32)ENetFields_Private::SpawnTime].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARespawnablePickup"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARespawnablePickup);
ARespawnablePickup::~ARespawnablePickup() {}
// End Class ARespawnablePickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARespawnablePickup, ARespawnablePickup::StaticClass, TEXT("ARespawnablePickup"), &Z_Registration_Info_UClass_ARespawnablePickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARespawnablePickup), 1035435055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_2735893697(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
