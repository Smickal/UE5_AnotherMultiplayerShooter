// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/HUD/ElimmedAnnoucement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElimmedAnnoucement() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UElimmedAnnoucement();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UElimmedAnnoucement_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class UElimmedAnnoucement
void UElimmedAnnoucement::StaticRegisterNativesUElimmedAnnoucement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElimmedAnnoucement);
UClass* Z_Construct_UClass_UElimmedAnnoucement_NoRegister()
{
	return UElimmedAnnoucement::StaticClass();
}
struct Z_Construct_UClass_UElimmedAnnoucement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/ElimmedAnnoucement.h" },
		{ "ModuleRelativePath", "HUD/ElimmedAnnoucement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnoucementBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ElimmedAnnoucement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnoucementTextAttacker_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ElimmedAnnoucement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnoucementImageWeaponType_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ElimmedAnnoucement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnoucementTextVictim_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ElimmedAnnoucement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnoucementBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnoucementTextAttacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnoucementImageWeaponType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnoucementTextVictim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElimmedAnnoucement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimmedAnnoucement_Statics::NewProp_AnnoucementBox = { "AnnoucementBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimmedAnnoucement, AnnoucementBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnoucementBox_MetaData), NewProp_AnnoucementBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimmedAnnoucement_Statics::NewProp_AnnoucementTextAttacker = { "AnnoucementTextAttacker", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimmedAnnoucement, AnnoucementTextAttacker), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnoucementTextAttacker_MetaData), NewProp_AnnoucementTextAttacker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimmedAnnoucement_Statics::NewProp_AnnoucementImageWeaponType = { "AnnoucementImageWeaponType", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimmedAnnoucement, AnnoucementImageWeaponType), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnoucementImageWeaponType_MetaData), NewProp_AnnoucementImageWeaponType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimmedAnnoucement_Statics::NewProp_AnnoucementTextVictim = { "AnnoucementTextVictim", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElimmedAnnoucement, AnnoucementTextVictim), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnoucementTextVictim_MetaData), NewProp_AnnoucementTextVictim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElimmedAnnoucement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimmedAnnoucement_Statics::NewProp_AnnoucementBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimmedAnnoucement_Statics::NewProp_AnnoucementTextAttacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimmedAnnoucement_Statics::NewProp_AnnoucementImageWeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimmedAnnoucement_Statics::NewProp_AnnoucementTextVictim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElimmedAnnoucement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UElimmedAnnoucement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElimmedAnnoucement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UElimmedAnnoucement_Statics::ClassParams = {
	&UElimmedAnnoucement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UElimmedAnnoucement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UElimmedAnnoucement_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElimmedAnnoucement_Statics::Class_MetaDataParams), Z_Construct_UClass_UElimmedAnnoucement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UElimmedAnnoucement()
{
	if (!Z_Registration_Info_UClass_UElimmedAnnoucement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElimmedAnnoucement.OuterSingleton, Z_Construct_UClass_UElimmedAnnoucement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UElimmedAnnoucement.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UElimmedAnnoucement>()
{
	return UElimmedAnnoucement::StaticClass();
}
UElimmedAnnoucement::UElimmedAnnoucement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UElimmedAnnoucement);
UElimmedAnnoucement::~UElimmedAnnoucement() {}
// End Class UElimmedAnnoucement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ElimmedAnnoucement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UElimmedAnnoucement, UElimmedAnnoucement::StaticClass, TEXT("UElimmedAnnoucement"), &Z_Registration_Info_UClass_UElimmedAnnoucement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElimmedAnnoucement), 2673468446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ElimmedAnnoucement_h_779424372(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ElimmedAnnoucement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ElimmedAnnoucement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
