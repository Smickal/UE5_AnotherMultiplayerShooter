// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Gamemode/CaptureTheFlagGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureTheFlagGameMode() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ACaptureTheFlagGameMode();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ACaptureTheFlagGameMode_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ATeamsGameMode();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ACaptureTheFlagGameMode
void ACaptureTheFlagGameMode::StaticRegisterNativesACaptureTheFlagGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaptureTheFlagGameMode);
UClass* Z_Construct_UClass_ACaptureTheFlagGameMode_NoRegister()
{
	return ACaptureTheFlagGameMode::StaticClass();
}
struct Z_Construct_UClass_ACaptureTheFlagGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode/CaptureTheFlagGameMode.h" },
		{ "ModuleRelativePath", "Gamemode/CaptureTheFlagGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureTheFlagGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATeamsGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::ClassParams = {
	&ACaptureTheFlagGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureTheFlagGameMode()
{
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton, Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ACaptureTheFlagGameMode>()
{
	return ACaptureTheFlagGameMode::StaticClass();
}
ACaptureTheFlagGameMode::ACaptureTheFlagGameMode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureTheFlagGameMode);
ACaptureTheFlagGameMode::~ACaptureTheFlagGameMode() {}
// End Class ACaptureTheFlagGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_CaptureTheFlagGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureTheFlagGameMode, ACaptureTheFlagGameMode::StaticClass, TEXT("ACaptureTheFlagGameMode"), &Z_Registration_Info_UClass_ACaptureTheFlagGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureTheFlagGameMode), 2446382329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_CaptureTheFlagGameMode_h_229812972(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_CaptureTheFlagGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_CaptureTheFlagGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
