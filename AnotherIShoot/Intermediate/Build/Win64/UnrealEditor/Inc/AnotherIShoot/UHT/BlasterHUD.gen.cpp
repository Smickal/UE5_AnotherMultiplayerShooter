// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/HUD/BlasterHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterHUD() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterHUD();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UAnnouncement_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UElimmedAnnoucement_NoRegister();
ANOTHERISHOOT_API UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin ScriptStruct FHUDPackage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HUDPackage;
class UScriptStruct* FHUDPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHUDPackage, (UObject*)Z_Construct_UPackage__Script_AnotherIShoot(), TEXT("HUDPackage"));
	}
	return Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton;
}
template<> ANOTHERISHOOT_API UScriptStruct* StaticStruct<FHUDPackage>()
{
	return FHUDPackage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHUDPackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHUDPackage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHUDPackage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
	nullptr,
	&NewStructOps,
	"HUDPackage",
	nullptr,
	0,
	sizeof(FHUDPackage),
	alignof(FHUDPackage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage()
{
	if (!Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton, Z_Construct_UScriptStruct_FHUDPackage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton;
}
// End ScriptStruct FHUDPackage

// Begin Class ABlasterHUD Function ElimAnnouncementTimerFinished
struct Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics
{
	struct BlasterHUD_eventElimAnnouncementTimerFinished_Parms
	{
		UElimmedAnnoucement* MsgToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MsgToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MsgToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove = { "MsgToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterHUD_eventElimAnnouncementTimerFinished_Parms, MsgToRemove), Z_Construct_UClass_UElimmedAnnoucement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MsgToRemove_MetaData), NewProp_MsgToRemove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterHUD, nullptr, "ElimAnnouncementTimerFinished", nullptr, nullptr, Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::BlasterHUD_eventElimAnnouncementTimerFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::BlasterHUD_eventElimAnnouncementTimerFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterHUD::execElimAnnouncementTimerFinished)
{
	P_GET_OBJECT(UElimmedAnnoucement,Z_Param_MsgToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ElimAnnouncementTimerFinished(Z_Param_MsgToRemove);
	P_NATIVE_END;
}
// End Class ABlasterHUD Function ElimAnnouncementTimerFinished

// Begin Class ABlasterHUD
void ABlasterHUD::StaticRegisterNativesABlasterHUD()
{
	UClass* Class = ABlasterHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ElimAnnouncementTimerFinished", &ABlasterHUD::execElimAnnouncementTimerFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterHUD);
UClass* Z_Construct_UClass_ABlasterHUD_NoRegister()
{
	return ABlasterHUD::StaticClass();
}
struct Z_Construct_UClass_ABlasterHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/BlasterHUD.h" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlayClass_MetaData[] = {
		{ "Category", "Player Stat" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementOverlayClass_MetaData[] = {
		{ "Category", "Announcements" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairSpreadMax_MetaData[] = {
		{ "Category", "BlasterHUD" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimAnnouncementClass_MetaData[] = {
		{ "Category", "BlasterHUD" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimAnnouncementTime_MetaData[] = {
		{ "Category", "BlasterHUD" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimmedMessages_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Annoucement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/BlasterHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterOverlayClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnnouncementOverlayClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairSpreadMax;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ElimAnnouncementClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElimAnnouncementTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimmedMessages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ElimmedMessages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Annoucement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterHUD_ElimAnnouncementTimerFinished, "ElimAnnouncementTimerFinished" }, // 2849494723
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass = { "CharacterOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CharacterOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOverlayClass_MetaData), NewProp_CharacterOverlayClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_AnnouncementOverlayClass = { "AnnouncementOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, AnnouncementOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnouncementOverlayClass_MetaData), NewProp_AnnouncementOverlayClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax = { "CrosshairSpreadMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CrosshairSpreadMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairSpreadMax_MetaData), NewProp_CrosshairSpreadMax_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementClass = { "ElimAnnouncementClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, ElimAnnouncementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UElimmedAnnoucement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimAnnouncementClass_MetaData), NewProp_ElimAnnouncementClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementTime = { "ElimAnnouncementTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, ElimAnnouncementTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimAnnouncementTime_MetaData), NewProp_ElimAnnouncementTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimmedMessages_Inner = { "ElimmedMessages", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UElimmedAnnoucement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimmedMessages = { "ElimmedMessages", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, ElimmedMessages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimmedMessages_MetaData), NewProp_ElimmedMessages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOverlay_MetaData), NewProp_CharacterOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_Annoucement = { "Annoucement", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, Annoucement), Z_Construct_UClass_UAnnouncement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Annoucement_MetaData), NewProp_Annoucement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_AnnouncementOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimAnnouncementTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimmedMessages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_ElimmedMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_Annoucement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterHUD_Statics::ClassParams = {
	&ABlasterHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterHUD()
{
	if (!Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton, Z_Construct_UClass_ABlasterHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ABlasterHUD>()
{
	return ABlasterHUD::StaticClass();
}
ABlasterHUD::ABlasterHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterHUD);
ABlasterHUD::~ABlasterHUD() {}
// End Class ABlasterHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_BlasterHUD_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHUDPackage::StaticStruct, Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps, TEXT("HUDPackage"), &Z_Registration_Info_UScriptStruct_HUDPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHUDPackage), 2943334962U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterHUD, ABlasterHUD::StaticClass, TEXT("ABlasterHUD"), &Z_Registration_Info_UClass_ABlasterHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterHUD), 1913840655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_BlasterHUD_h_3460916768(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_BlasterHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_BlasterHUD_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_BlasterHUD_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_BlasterHUD_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
