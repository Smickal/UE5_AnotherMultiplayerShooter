// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/HUD/RadialCooldown.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialCooldown() {}

// Begin Cross Module References
ADVANCEDWIDGETS_API UClass* Z_Construct_UClass_URadialSlider_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_URadialCooldown();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_URadialCooldown_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class URadialCooldown
void URadialCooldown::StaticRegisterNativesURadialCooldown()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadialCooldown);
UClass* Z_Construct_UClass_URadialCooldown_NoRegister()
{
	return URadialCooldown::StaticClass();
}
struct Z_Construct_UClass_URadialCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/RadialCooldown.h" },
		{ "ModuleRelativePath", "HUD/RadialCooldown.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/RadialCooldown.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialSlider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadialCooldown>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URadialCooldown_Statics::NewProp_RadialSlider = { "RadialSlider", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialCooldown, RadialSlider), Z_Construct_UClass_URadialSlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialSlider_MetaData), NewProp_RadialSlider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadialCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialCooldown_Statics::NewProp_RadialSlider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialCooldown_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URadialCooldown_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialCooldown_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URadialCooldown_Statics::ClassParams = {
	&URadialCooldown::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URadialCooldown_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URadialCooldown_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URadialCooldown_Statics::Class_MetaDataParams), Z_Construct_UClass_URadialCooldown_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URadialCooldown()
{
	if (!Z_Registration_Info_UClass_URadialCooldown.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadialCooldown.OuterSingleton, Z_Construct_UClass_URadialCooldown_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URadialCooldown.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<URadialCooldown>()
{
	return URadialCooldown::StaticClass();
}
URadialCooldown::URadialCooldown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URadialCooldown);
URadialCooldown::~URadialCooldown() {}
// End Class URadialCooldown

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_RadialCooldown_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URadialCooldown, URadialCooldown::StaticClass, TEXT("URadialCooldown"), &Z_Registration_Info_UClass_URadialCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadialCooldown), 579609584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_RadialCooldown_h_4072195890(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_RadialCooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_RadialCooldown_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
