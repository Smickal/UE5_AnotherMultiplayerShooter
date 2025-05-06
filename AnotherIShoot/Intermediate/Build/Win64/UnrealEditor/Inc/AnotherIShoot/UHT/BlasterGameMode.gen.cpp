// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Gamemode/BlasterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterGameMode() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterGameMode();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ABlasterGameMode
void ABlasterGameMode::StaticRegisterNativesABlasterGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterGameMode);
UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister()
{
	return ABlasterGameMode::StaticClass();
}
struct Z_Construct_UClass_ABlasterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode/BlasterGameMode.h" },
		{ "ModuleRelativePath", "Gamemode/BlasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmUpTime_MetaData[] = {
		{ "Category", "BlasterGameMode" },
		{ "ModuleRelativePath", "Gamemode/BlasterGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchTime_MetaData[] = {
		{ "Category", "BlasterGameMode" },
		{ "ModuleRelativePath", "Gamemode/BlasterGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[] = {
		{ "Category", "BlasterGameMode" },
		{ "ModuleRelativePath", "Gamemode/BlasterGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeamsMatch_MetaData[] = {
		{ "Category", "BlasterGameMode" },
		{ "ModuleRelativePath", "Gamemode/BlasterGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmUpTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
	static void NewProp_bTeamsMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeamsMatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_WarmUpTime = { "WarmUpTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameMode, WarmUpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmUpTime_MetaData), NewProp_WarmUpTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_MatchTime = { "MatchTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameMode, MatchTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchTime_MetaData), NewProp_MatchTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameMode, CooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTime_MetaData), NewProp_CooldownTime_MetaData) };
void Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_bTeamsMatch_SetBit(void* Obj)
{
	((ABlasterGameMode*)Obj)->bTeamsMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_bTeamsMatch = { "bTeamsMatch", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlasterGameMode), &Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_bTeamsMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeamsMatch_MetaData), NewProp_bTeamsMatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_WarmUpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_MatchTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_CooldownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_bTeamsMatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterGameMode_Statics::ClassParams = {
	&ABlasterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABlasterGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterGameMode()
{
	if (!Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton, Z_Construct_UClass_ABlasterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ABlasterGameMode>()
{
	return ABlasterGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterGameMode);
ABlasterGameMode::~ABlasterGameMode() {}
// End Class ABlasterGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_BlasterGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterGameMode, ABlasterGameMode::StaticClass, TEXT("ABlasterGameMode"), &Z_Registration_Info_UClass_ABlasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterGameMode), 4174237373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_BlasterGameMode_h_351435037(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_BlasterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Gamemode_BlasterGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
