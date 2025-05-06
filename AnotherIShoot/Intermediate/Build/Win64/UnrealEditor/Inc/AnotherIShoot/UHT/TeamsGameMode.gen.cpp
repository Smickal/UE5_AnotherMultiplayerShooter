// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Gamemode/TeamsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamsGameMode() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterGameMode();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ATeamsGameMode();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ATeamsGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ATeamsGameMode
void ATeamsGameMode::StaticRegisterNativesATeamsGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeamsGameMode);
UClass* Z_Construct_UClass_ATeamsGameMode_NoRegister()
{
	return ATeamsGameMode::StaticClass();
}
struct Z_Construct_UClass_ATeamsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode/TeamsGameMode.h" },
		{ "ModuleRelativePath", "Gamemode/TeamsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATeamsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABlasterGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamsGameMode_Statics::ClassParams = {
	&ATeamsGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeamsGameMode()
{
	if (!Z_Registration_Info_UClass_ATeamsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamsGameMode.OuterSingleton, Z_Construct_UClass_ATeamsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeamsGameMode.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ATeamsGameMode>()
{
	return ATeamsGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamsGameMode);
ATeamsGameMode::~ATeamsGameMode() {}
// End Class ATeamsGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_TeamsGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeamsGameMode, ATeamsGameMode::StaticClass, TEXT("ATeamsGameMode"), &Z_Registration_Info_UClass_ATeamsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamsGameMode), 4239116329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_TeamsGameMode_h_3076742345(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_TeamsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_TeamsGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
