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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XMouseSensitivity_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YMouseSensitivity_MetaData[] = {
		{ "Category", "BlasterGameSave" },
		{ "ModuleRelativePath", "SaveGame/BlasterGameSave.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XMouseSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YMouseSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlasterGameSave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotName_MetaData), NewProp_SaveSlotName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_XMouseSensitivity = { "XMouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, XMouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XMouseSensitivity_MetaData), NewProp_XMouseSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_YMouseSensitivity = { "YMouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterGameSave, YMouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YMouseSensitivity_MetaData), NewProp_YMouseSensitivity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlasterGameSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_SaveSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_XMouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterGameSave_Statics::NewProp_YMouseSensitivity,
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
		{ Z_Construct_UClass_UBlasterGameSave, UBlasterGameSave::StaticClass, TEXT("UBlasterGameSave"), &Z_Registration_Info_UClass_UBlasterGameSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlasterGameSave), 2027430446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_SaveGame_BlasterGameSave_h_2450932778(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_SaveGame_BlasterGameSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_SaveGame_BlasterGameSave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
