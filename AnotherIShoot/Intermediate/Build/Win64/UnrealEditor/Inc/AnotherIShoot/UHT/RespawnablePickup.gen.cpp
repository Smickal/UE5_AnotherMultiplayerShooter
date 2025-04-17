// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PickUps/RespawnablePickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnablePickup() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ARespawnablePickup();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ARespawnablePickup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ARespawnablePickup
void ARespawnablePickup::StaticRegisterNativesARespawnablePickup()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARespawnablePickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ARespawnablePickup);
ARespawnablePickup::~ARespawnablePickup() {}
// End Class ARespawnablePickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARespawnablePickup, ARespawnablePickup::StaticClass, TEXT("ARespawnablePickup"), &Z_Registration_Info_UClass_ARespawnablePickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARespawnablePickup), 1552058950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_3406751451(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
