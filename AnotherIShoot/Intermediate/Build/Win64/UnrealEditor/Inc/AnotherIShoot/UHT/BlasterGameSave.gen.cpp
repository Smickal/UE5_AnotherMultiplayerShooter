// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/SaveGame/BlasterGameSave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterGameSave() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UBlasterGameSave();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UBlasterGameSave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class UBlasterGameSave
void UBlasterGameSave::StaticRegisterNativesUBlasterGameSave()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlasterGameSave);
UClass* Z_Construct_UClass_UBlasterGameSave_NoRegister()
{
	return UBlasterGameSave::StaticClass();
}
struct Z_Construct_UClass_UBlasterGameSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveGame/BlasterGameSave.h" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicQualitySettings_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XMouseSensitivity_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YMouseSensitivity_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SniperZoomMultiplier_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceSetting_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingSetting_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSetting_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowSetting_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIlluminationSetting_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturesSetting_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectsSetting_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphicQualitySettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XMouseSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YMouseSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SniperZoomMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDistanceSetting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AntiAliasingSetting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PostProcessSetting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShadowSetting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalIlluminationSetting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TexturesSetting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffectsSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlasterGameSave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotName_MetaData), NewProp_SaveSlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_GraphicQualitySettings = { "GraphicQualitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, GraphicQualitySettings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicQualitySettings_MetaData), NewProp_GraphicQualitySettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, MasterVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterVolume_MetaData), NewProp_MasterVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_XMouseSensitivity = { "XMouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, XMouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XMouseSensitivity_MetaData), NewProp_XMouseSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_YMouseSensitivity = { "YMouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, YMouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YMouseSensitivity_MetaData), NewProp_YMouseSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_SniperZoomMultiplier = { "SniperZoomMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, SniperZoomMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SniperZoomMultiplier_MetaData), NewProp_SniperZoomMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_ViewDistanceSetting = { "ViewDistanceSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, ViewDistanceSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDistanceSetting_MetaData), NewProp_ViewDistanceSetting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_AntiAliasingSetting = { "AntiAliasingSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, AntiAliasingSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiAliasingSetting_MetaData), NewProp_AntiAliasingSetting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_PostProcessSetting = { "PostProcessSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, PostProcessSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSetting_MetaData), NewProp_PostProcessSetting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_ShadowSetting = { "ShadowSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, ShadowSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowSetting_MetaData), NewProp_ShadowSetting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_GlobalIlluminationSetting = { "GlobalIlluminationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, GlobalIlluminationSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalIlluminationSetting_MetaData), NewProp_GlobalIlluminationSetting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_TexturesSetting = { "TexturesSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, TexturesSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturesSetting_MetaData), NewProp_TexturesSetting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_EffectsSetting = { "EffectsSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, EffectsSetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectsSetting_MetaData), NewProp_EffectsSetting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlasterGameSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_SaveSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_GraphicQualitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_MasterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_XMouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_YMouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_SniperZoomMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_ViewDistanceSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_AntiAliasingSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_PostProcessSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_ShadowSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_GlobalIlluminationSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_TexturesSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_EffectsSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterGameSave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlasterGameSave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterGameSave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlasterGameSave_Statics::ClassParams = {
	&UBlasterGameSave::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlasterGameSave_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterGameSave_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterGameSave_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlasterGameSave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlasterGameSave()
{
	if (!Z_Registration_Info_UClass_UBlasterGameSave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlasterGameSave.OuterSingleton, Z_Construct_UClass_UBlasterGameSave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlasterGameSave.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UBlasterGameSave>()
{
	return UBlasterGameSave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlasterGameSave);
UBlasterGameSave::~UBlasterGameSave() {}
// End Class UBlasterGameSave

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_SaveGame_BlasterGameSave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlasterGameSave, UBlasterGameSave::StaticClass, TEXT("UBlasterGameSave"), &Z_Registration_Info_UClass_UBlasterGameSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlasterGameSave), 2638466037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_SaveGame_BlasterGameSave_h_3663282072(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_SaveGame_BlasterGameSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_SaveGame_BlasterGameSave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
