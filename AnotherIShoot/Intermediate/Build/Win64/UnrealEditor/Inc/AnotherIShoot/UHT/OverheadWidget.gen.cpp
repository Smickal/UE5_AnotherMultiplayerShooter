// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/HUD/OverheadWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverheadWidget() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UOverheadWidget();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UOverheadWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class UOverheadWidget Function ShowPlayerName
struct Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics
{
	struct OverheadWidget_eventShowPlayerName_Parms
	{
		APawn* InPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/OverheadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverheadWidget_eventShowPlayerName_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::NewProp_InPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverheadWidget, nullptr, "ShowPlayerName", nullptr, nullptr, Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::OverheadWidget_eventShowPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::OverheadWidget_eventShowPlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOverheadWidget_ShowPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOverheadWidget::execShowPlayerName)
{
	P_GET_OBJECT(APawn,Z_Param_InPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPlayerName(Z_Param_InPawn);
	P_NATIVE_END;
}
// End Class UOverheadWidget Function ShowPlayerName

// Begin Class UOverheadWidget Function ShowPlayerNetRoler
struct Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics
{
	struct OverheadWidget_eventShowPlayerNetRoler_Parms
	{
		APawn* InPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/OverheadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverheadWidget_eventShowPlayerNetRoler_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::NewProp_InPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverheadWidget, nullptr, "ShowPlayerNetRoler", nullptr, nullptr, Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::OverheadWidget_eventShowPlayerNetRoler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::OverheadWidget_eventShowPlayerNetRoler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOverheadWidget::execShowPlayerNetRoler)
{
	P_GET_OBJECT(APawn,Z_Param_InPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPlayerNetRoler(Z_Param_InPawn);
	P_NATIVE_END;
}
// End Class UOverheadWidget Function ShowPlayerNetRoler

// Begin Class UOverheadWidget
void UOverheadWidget::StaticRegisterNativesUOverheadWidget()
{
	UClass* Class = UOverheadWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowPlayerName", &UOverheadWidget::execShowPlayerName },
		{ "ShowPlayerNetRoler", &UOverheadWidget::execShowPlayerNetRoler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverheadWidget);
UClass* Z_Construct_UClass_UOverheadWidget_NoRegister()
{
	return UOverheadWidget::StaticClass();
}
struct Z_Construct_UClass_UOverheadWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/OverheadWidget.h" },
		{ "ModuleRelativePath", "HUD/OverheadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/OverheadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverheadWidget_ShowPlayerName, "ShowPlayerName" }, // 1207801888
		{ &Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRoler, "ShowPlayerNetRoler" }, // 1243231513
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverheadWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOverheadWidget_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverheadWidget, DisplayText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayText_MetaData), NewProp_DisplayText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverheadWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverheadWidget_Statics::NewProp_DisplayText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOverheadWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverheadWidget_Statics::ClassParams = {
	&UOverheadWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOverheadWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverheadWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOverheadWidget()
{
	if (!Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton, Z_Construct_UClass_UOverheadWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UOverheadWidget>()
{
	return UOverheadWidget::StaticClass();
}
UOverheadWidget::UOverheadWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOverheadWidget);
UOverheadWidget::~UOverheadWidget() {}
// End Class UOverheadWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_OverheadWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOverheadWidget, UOverheadWidget::StaticClass, TEXT("UOverheadWidget"), &Z_Registration_Info_UClass_UOverheadWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverheadWidget), 476278535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_OverheadWidget_h_3637372025(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_OverheadWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_OverheadWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
