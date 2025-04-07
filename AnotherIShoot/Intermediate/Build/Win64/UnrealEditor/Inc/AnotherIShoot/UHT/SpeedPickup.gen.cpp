// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PickUps/SpeedPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedPickup() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_APickup();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ASpeedPickup();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ASpeedPickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ASpeedPickup
void ASpeedPickup::StaticRegisterNativesASpeedPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpeedPickup);
UClass* Z_Construct_UClass_ASpeedPickup_NoRegister()
{
	return ASpeedPickup::StaticClass();
}
struct Z_Construct_UClass_ASpeedPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PickUps/SpeedPickup.h" },
		{ "ModuleRelativePath", "PickUps/SpeedPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpeedBuff_MetaData[] = {
		{ "Category", "SpeedPickup" },
		{ "ModuleRelativePath", "PickUps/SpeedPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeedBuff_MetaData[] = {
		{ "Category", "SpeedPickup" },
		{ "ModuleRelativePath", "PickUps/SpeedPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBuffTime_MetaData[] = {
		{ "Category", "SpeedPickup" },
		{ "ModuleRelativePath", "PickUps/SpeedPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeedBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeedBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedBuffTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedPickup_Statics::NewProp_BaseSpeedBuff = { "BaseSpeedBuff", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeedPickup, BaseSpeedBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSpeedBuff_MetaData), NewProp_BaseSpeedBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedPickup_Statics::NewProp_CrouchSpeedBuff = { "CrouchSpeedBuff", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeedPickup, CrouchSpeedBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchSpeedBuff_MetaData), NewProp_CrouchSpeedBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedPickup_Statics::NewProp_SpeedBuffTime = { "SpeedBuffTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeedPickup, SpeedBuffTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedBuffTime_MetaData), NewProp_SpeedBuffTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpeedPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedPickup_Statics::NewProp_BaseSpeedBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedPickup_Statics::NewProp_CrouchSpeedBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedPickup_Statics::NewProp_SpeedBuffTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpeedPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpeedPickup_Statics::ClassParams = {
	&ASpeedPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpeedPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpeedPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpeedPickup()
{
	if (!Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton, Z_Construct_UClass_ASpeedPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ASpeedPickup>()
{
	return ASpeedPickup::StaticClass();
}
ASpeedPickup::ASpeedPickup() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedPickup);
ASpeedPickup::~ASpeedPickup() {}
// End Class ASpeedPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_SpeedPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpeedPickup, ASpeedPickup::StaticClass, TEXT("ASpeedPickup"), &Z_Registration_Info_UClass_ASpeedPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpeedPickup), 332837703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_SpeedPickup_h_3565547847(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_SpeedPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_SpeedPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
