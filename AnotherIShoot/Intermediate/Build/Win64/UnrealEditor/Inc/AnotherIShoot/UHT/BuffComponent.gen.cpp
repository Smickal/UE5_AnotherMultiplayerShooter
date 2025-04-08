// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/BlasterComponent/BuffComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuffComponent() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UBuffComponent();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class UBuffComponent Function Multicast_JumpBuff
struct BuffComponent_eventMulticast_JumpBuff_Parms
{
	float JumpVelocity;
};
static const FName NAME_UBuffComponent_Multicast_JumpBuff = FName(TEXT("Multicast_JumpBuff"));
void UBuffComponent::Multicast_JumpBuff(float JumpVelocity)
{
	BuffComponent_eventMulticast_JumpBuff_Parms Parms;
	Parms.JumpVelocity=JumpVelocity;
	UFunction* Func = FindFunctionChecked(NAME_UBuffComponent_Multicast_JumpBuff);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/BuffComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffComponent_eventMulticast_JumpBuff_Parms, JumpVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::NewProp_JumpVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuffComponent, nullptr, "Multicast_JumpBuff", nullptr, nullptr, Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::PropPointers), sizeof(BuffComponent_eventMulticast_JumpBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::Function_MetaDataParams) };
static_assert(sizeof(BuffComponent_eventMulticast_JumpBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuffComponent::execMulticast_JumpBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_JumpVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_JumpBuff_Implementation(Z_Param_JumpVelocity);
	P_NATIVE_END;
}
// End Class UBuffComponent Function Multicast_JumpBuff

// Begin Class UBuffComponent Function MultiCast_SpeedBuff
struct BuffComponent_eventMultiCast_SpeedBuff_Parms
{
	float BaseSpeed;
	float CrouchSpeed;
};
static const FName NAME_UBuffComponent_MultiCast_SpeedBuff = FName(TEXT("MultiCast_SpeedBuff"));
void UBuffComponent::MultiCast_SpeedBuff(float BaseSpeed, float CrouchSpeed)
{
	BuffComponent_eventMultiCast_SpeedBuff_Parms Parms;
	Parms.BaseSpeed=BaseSpeed;
	Parms.CrouchSpeed=CrouchSpeed;
	UFunction* Func = FindFunctionChecked(NAME_UBuffComponent_MultiCast_SpeedBuff);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponent/BuffComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffComponent_eventMultiCast_SpeedBuff_Parms, BaseSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffComponent_eventMultiCast_SpeedBuff_Parms, CrouchSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::NewProp_BaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::NewProp_CrouchSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuffComponent, nullptr, "MultiCast_SpeedBuff", nullptr, nullptr, Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::PropPointers), sizeof(BuffComponent_eventMultiCast_SpeedBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::Function_MetaDataParams) };
static_assert(sizeof(BuffComponent_eventMultiCast_SpeedBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuffComponent::execMultiCast_SpeedBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CrouchSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MultiCast_SpeedBuff_Implementation(Z_Param_BaseSpeed,Z_Param_CrouchSpeed);
	P_NATIVE_END;
}
// End Class UBuffComponent Function MultiCast_SpeedBuff

// Begin Class UBuffComponent
void UBuffComponent::StaticRegisterNativesUBuffComponent()
{
	UClass* Class = UBuffComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_JumpBuff", &UBuffComponent::execMulticast_JumpBuff },
		{ "MultiCast_SpeedBuff", &UBuffComponent::execMultiCast_SpeedBuff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuffComponent);
UClass* Z_Construct_UClass_UBuffComponent_NoRegister()
{
	return UBuffComponent::StaticClass();
}
struct Z_Construct_UClass_UBuffComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BlasterComponent/BuffComponent.h" },
		{ "ModuleRelativePath", "BlasterComponent/BuffComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponent/BuffComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuffComponent_Multicast_JumpBuff, "Multicast_JumpBuff" }, // 2562489611
		{ &Z_Construct_UFunction_UBuffComponent_MultiCast_SpeedBuff, "MultiCast_SpeedBuff" }, // 666394274
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuffComponent, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBuffComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffComponent_Statics::ClassParams = {
	&UBuffComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBuffComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuffComponent()
{
	if (!Z_Registration_Info_UClass_UBuffComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffComponent.OuterSingleton, Z_Construct_UClass_UBuffComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuffComponent.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UBuffComponent>()
{
	return UBuffComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuffComponent);
UBuffComponent::~UBuffComponent() {}
// End Class UBuffComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuffComponent, UBuffComponent::StaticClass, TEXT("UBuffComponent"), &Z_Registration_Info_UClass_UBuffComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffComponent), 3188499639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_342683785(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
