// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Gamemode/SandboxGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandboxGameMode() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ASandboxGameMode();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ASandboxGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ASandboxGameMode
void ASandboxGameMode::StaticRegisterNativesASandboxGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASandboxGameMode);
UClass* Z_Construct_UClass_ASandboxGameMode_NoRegister()
{
	return ASandboxGameMode::StaticClass();
}
struct Z_Construct_UClass_ASandboxGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode/SandboxGameMode.h" },
		{ "ModuleRelativePath", "Gamemode/SandboxGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASandboxGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASandboxGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASandboxGameMode_Statics::ClassParams = {
	&ASandboxGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASandboxGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASandboxGameMode()
{
	if (!Z_Registration_Info_UClass_ASandboxGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASandboxGameMode.OuterSingleton, Z_Construct_UClass_ASandboxGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASandboxGameMode.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ASandboxGameMode>()
{
	return ASandboxGameMode::StaticClass();
}
ASandboxGameMode::ASandboxGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASandboxGameMode);
ASandboxGameMode::~ASandboxGameMode() {}
// End Class ASandboxGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Gamemode_SandboxGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASandboxGameMode, ASandboxGameMode::StaticClass, TEXT("ASandboxGameMode"), &Z_Registration_Info_UClass_ASandboxGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASandboxGameMode), 557572920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Gamemode_SandboxGameMode_h_3416923168(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Gamemode_SandboxGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Gamemode_SandboxGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
