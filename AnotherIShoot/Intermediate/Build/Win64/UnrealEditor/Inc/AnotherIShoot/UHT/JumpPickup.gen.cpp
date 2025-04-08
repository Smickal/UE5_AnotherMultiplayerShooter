// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PickUps/JumpPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpPickup() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AJumpPickup();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AJumpPickup_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_APickup();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class AJumpPickup
void AJumpPickup::StaticRegisterNativesAJumpPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJumpPickup);
UClass* Z_Construct_UClass_AJumpPickup_NoRegister()
{
	return AJumpPickup::StaticClass();
}
struct Z_Construct_UClass_AJumpPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PickUps/JumpPickup.h" },
		{ "ModuleRelativePath", "PickUps/JumpPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpZVelocityBuff_MetaData[] = {
		{ "Category", "JumpPickup" },
		{ "ModuleRelativePath", "PickUps/JumpPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpBuffTime_MetaData[] = {
		{ "Category", "JumpPickup" },
		{ "ModuleRelativePath", "PickUps/JumpPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpZVelocityBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpBuffTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumpPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpZVelocityBuff = { "JumpZVelocityBuff", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpPickup, JumpZVelocityBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpZVelocityBuff_MetaData), NewProp_JumpZVelocityBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpBuffTime = { "JumpBuffTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpPickup, JumpBuffTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpBuffTime_MetaData), NewProp_JumpBuffTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJumpPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpZVelocityBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpBuffTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJumpPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumpPickup_Statics::ClassParams = {
	&AJumpPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AJumpPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AJumpPickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AJumpPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJumpPickup()
{
	if (!Z_Registration_Info_UClass_AJumpPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumpPickup.OuterSingleton, Z_Construct_UClass_AJumpPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJumpPickup.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<AJumpPickup>()
{
	return AJumpPickup::StaticClass();
}
AJumpPickup::AJumpPickup() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpPickup);
AJumpPickup::~AJumpPickup() {}
// End Class AJumpPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_JumpPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJumpPickup, AJumpPickup::StaticClass, TEXT("AJumpPickup"), &Z_Registration_Info_UClass_AJumpPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumpPickup), 3284057611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_JumpPickup_h_22279416(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_JumpPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_JumpPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
