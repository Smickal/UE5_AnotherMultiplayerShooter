// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PickUps/ShieldPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldPickup() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_APickup();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AShieldPickup();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AShieldPickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class AShieldPickup
void AShieldPickup::StaticRegisterNativesAShieldPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShieldPickup);
UClass* Z_Construct_UClass_AShieldPickup_NoRegister()
{
	return AShieldPickup::StaticClass();
}
struct Z_Construct_UClass_AShieldPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PickUps/ShieldPickup.h" },
		{ "ModuleRelativePath", "PickUps/ShieldPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldRecoverAmount_MetaData[] = {
		{ "Category", "ShieldPickup" },
		{ "ModuleRelativePath", "PickUps/ShieldPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldRecoveryTime_MetaData[] = {
		{ "Category", "ShieldPickup" },
		{ "ModuleRelativePath", "PickUps/ShieldPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldRecoverAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldRecoveryTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldRecoverAmount = { "ShieldRecoverAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldPickup, ShieldRecoverAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldRecoverAmount_MetaData), NewProp_ShieldRecoverAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldRecoveryTime = { "ShieldRecoveryTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldPickup, ShieldRecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldRecoveryTime_MetaData), NewProp_ShieldRecoveryTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldRecoverAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldRecoveryTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShieldPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShieldPickup_Statics::ClassParams = {
	&AShieldPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShieldPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AShieldPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShieldPickup()
{
	if (!Z_Registration_Info_UClass_AShieldPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShieldPickup.OuterSingleton, Z_Construct_UClass_AShieldPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShieldPickup.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<AShieldPickup>()
{
	return AShieldPickup::StaticClass();
}
AShieldPickup::AShieldPickup() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldPickup);
AShieldPickup::~AShieldPickup() {}
// End Class AShieldPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_ShieldPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShieldPickup, AShieldPickup::StaticClass, TEXT("AShieldPickup"), &Z_Registration_Info_UClass_AShieldPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldPickup), 4293019886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_ShieldPickup_h_3783906223(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_ShieldPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_ShieldPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
