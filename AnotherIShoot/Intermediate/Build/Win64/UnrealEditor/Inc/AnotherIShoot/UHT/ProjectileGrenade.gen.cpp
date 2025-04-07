// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Weapon/ProjectileGrenade.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileGrenade() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectile();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectileGrenade();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class AProjectileGrenade Function OnBounce
struct Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics
{
	struct ProjectileGrenade_eventOnBounce_Parms
	{
		FHitResult ImpactResult;
		FVector ImpactVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/ProjectileGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileGrenade_eventOnBounce_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileGrenade_eventOnBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVelocity_MetaData), NewProp_ImpactVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileGrenade, nullptr, "OnBounce", nullptr, nullptr, Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::ProjectileGrenade_eventOnBounce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::ProjectileGrenade_eventOnBounce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileGrenade_OnBounce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileGrenade::execOnBounce)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBounce(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity);
	P_NATIVE_END;
}
// End Class AProjectileGrenade Function OnBounce

// Begin Class AProjectileGrenade
void AProjectileGrenade::StaticRegisterNativesAProjectileGrenade()
{
	UClass* Class = AProjectileGrenade::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBounce", &AProjectileGrenade::execOnBounce },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileGrenade);
UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister()
{
	return AProjectileGrenade::StaticClass();
}
struct Z_Construct_UClass_AProjectileGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/ProjectileGrenade.h" },
		{ "ModuleRelativePath", "Weapon/ProjectileGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "ProjectileGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/ProjectileGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceSound_MetaData[] = {
		{ "Category", "ProjectileGrenade" },
		{ "ModuleRelativePath", "Weapon/ProjectileGrenade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BounceSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileGrenade_OnBounce, "OnBounce" }, // 2619760300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileGrenade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileGrenade, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData), NewProp_ProjectileMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_BounceSound = { "BounceSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileGrenade, BounceSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceSound_MetaData), NewProp_BounceSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_ProjectileMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_BounceSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectileGrenade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileGrenade_Statics::ClassParams = {
	&AProjectileGrenade::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileGrenade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileGrenade()
{
	if (!Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton, Z_Construct_UClass_AProjectileGrenade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<AProjectileGrenade>()
{
	return AProjectileGrenade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileGrenade);
AProjectileGrenade::~AProjectileGrenade() {}
// End Class AProjectileGrenade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_ProjectileGrenade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileGrenade, AProjectileGrenade::StaticClass, TEXT("AProjectileGrenade"), &Z_Registration_Info_UClass_AProjectileGrenade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileGrenade), 3183868648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_ProjectileGrenade_h_2638705589(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_ProjectileGrenade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_ProjectileGrenade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
