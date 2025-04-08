// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/HUD/Announcement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnnouncement() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UAnnouncement();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UAnnouncement_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class UAnnouncement
void UAnnouncement::StaticRegisterNativesUAnnouncement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnnouncement);
UClass* Z_Construct_UClass_UAnnouncement_NoRegister()
{
	return UAnnouncement::StaticClass();
}
struct Z_Construct_UClass_UAnnouncement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/Announcement.h" },
		{ "ModuleRelativePath", "HUD/Announcement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmUpTime_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/Announcement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/Announcement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/Announcement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WarmUpTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnnouncement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnouncement_Statics::NewProp_WarmUpTime = { "WarmUpTime", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnnouncement, WarmUpTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmUpTime_MetaData), NewProp_WarmUpTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnouncement_Statics::NewProp_AnnouncementText = { "AnnouncementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnnouncement, AnnouncementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnouncementText_MetaData), NewProp_AnnouncementText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnouncement_Statics::NewProp_InfoText = { "InfoText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnnouncement, InfoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoText_MetaData), NewProp_InfoText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnnouncement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnouncement_Statics::NewProp_WarmUpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnouncement_Statics::NewProp_AnnouncementText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnouncement_Statics::NewProp_InfoText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnnouncement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnnouncement_Statics::ClassParams = {
	&UAnnouncement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnnouncement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnnouncement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnnouncement()
{
	if (!Z_Registration_Info_UClass_UAnnouncement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnnouncement.OuterSingleton, Z_Construct_UClass_UAnnouncement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnnouncement.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UAnnouncement>()
{
	return UAnnouncement::StaticClass();
}
UAnnouncement::UAnnouncement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnnouncement);
UAnnouncement::~UAnnouncement() {}
// End Class UAnnouncement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_Announcement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnnouncement, UAnnouncement::StaticClass, TEXT("UAnnouncement"), &Z_Registration_Info_UClass_UAnnouncement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnnouncement), 3190025825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_Announcement_h_3203936094(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_Announcement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_Announcement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
