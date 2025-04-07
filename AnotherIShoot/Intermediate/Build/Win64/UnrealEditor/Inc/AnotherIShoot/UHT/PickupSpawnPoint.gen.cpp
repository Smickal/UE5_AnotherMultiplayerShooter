// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PickUps/PickupSpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupSpawnPoint() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_APickup_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_APickupSpawnPoint();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_APickupSpawnPoint_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class APickupSpawnPoint Function StartSpawnPickUpTimer
struct Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics
{
	struct PickupSpawnPoint_eventStartSpawnPickUpTimer_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickUps/PickupSpawnPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupSpawnPoint_eventStartSpawnPickUpTimer_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupSpawnPoint, nullptr, "StartSpawnPickUpTimer", nullptr, nullptr, Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::PickupSpawnPoint_eventStartSpawnPickUpTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::PickupSpawnPoint_eventStartSpawnPickUpTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickupSpawnPoint::execStartSpawnPickUpTimer)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSpawnPickUpTimer(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class APickupSpawnPoint Function StartSpawnPickUpTimer

// Begin Class APickupSpawnPoint
void APickupSpawnPoint::StaticRegisterNativesAPickupSpawnPoint()
{
	UClass* Class = APickupSpawnPoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartSpawnPickUpTimer", &APickupSpawnPoint::execStartSpawnPickUpTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupSpawnPoint);
UClass* Z_Construct_UClass_APickupSpawnPoint_NoRegister()
{
	return APickupSpawnPoint::StaticClass();
}
struct Z_Construct_UClass_APickupSpawnPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickUps/PickupSpawnPoint.h" },
		{ "ModuleRelativePath", "PickUps/PickupSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupClasses_MetaData[] = {
		{ "Category", "PickupSpawnPoint" },
		{ "ModuleRelativePath", "PickUps/PickupSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPickup_MetaData[] = {
		{ "ModuleRelativePath", "PickUps/PickupSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupTimeMin_MetaData[] = {
		{ "Category", "PickupSpawnPoint" },
		{ "ModuleRelativePath", "PickUps/PickupSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupTimeMax_MetaData[] = {
		{ "Category", "PickupSpawnPoint" },
		{ "ModuleRelativePath", "PickUps/PickupSpawnPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PickupClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PickupClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPickup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPickupTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPickupTimeMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickUpTimer, "StartSpawnPickUpTimer" }, // 2096257270
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupSpawnPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses_Inner = { "PickupClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses = { "PickupClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupSpawnPoint, PickupClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupClasses_MetaData), NewProp_PickupClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnedPickup = { "SpawnedPickup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupSpawnPoint, SpawnedPickup), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedPickup_MetaData), NewProp_SpawnedPickup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMin = { "SpawnPickupTimeMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupSpawnPoint, SpawnPickupTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPickupTimeMin_MetaData), NewProp_SpawnPickupTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMax = { "SpawnPickupTimeMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupSpawnPoint, SpawnPickupTimeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPickupTimeMax_MetaData), NewProp_SpawnPickupTimeMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupSpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnedPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickupSpawnPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupSpawnPoint_Statics::ClassParams = {
	&APickupSpawnPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickupSpawnPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupSpawnPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickupSpawnPoint()
{
	if (!Z_Registration_Info_UClass_APickupSpawnPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupSpawnPoint.OuterSingleton, Z_Construct_UClass_APickupSpawnPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickupSpawnPoint.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<APickupSpawnPoint>()
{
	return APickupSpawnPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickupSpawnPoint);
APickupSpawnPoint::~APickupSpawnPoint() {}
// End Class APickupSpawnPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_PickupSpawnPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickupSpawnPoint, APickupSpawnPoint::StaticClass, TEXT("APickupSpawnPoint"), &Z_Registration_Info_UClass_APickupSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupSpawnPoint), 1619894125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_PickupSpawnPoint_h_880178498(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_PickupSpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_PickupSpawnPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
