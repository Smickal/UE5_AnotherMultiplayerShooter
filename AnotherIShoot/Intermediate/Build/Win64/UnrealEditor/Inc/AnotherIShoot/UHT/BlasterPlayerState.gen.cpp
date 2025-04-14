// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterPlayerState() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterPlayerState();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();
ANOTHERISHOOT_API UEnum* Z_Construct_UEnum_AnotherIShoot_ETeam();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ABlasterPlayerState Function OnRep_Defeats
struct Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerState, nullptr, "OnRep_Defeats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerState::execOnRep_Defeats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Defeats();
	P_NATIVE_END;
}
// End Class ABlasterPlayerState Function OnRep_Defeats

// Begin Class ABlasterPlayerState Function OnRep_Team
struct Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerState, nullptr, "OnRep_Team", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerState::execOnRep_Team)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Team();
	P_NATIVE_END;
}
// End Class ABlasterPlayerState Function OnRep_Team

// Begin Class ABlasterPlayerState
void ABlasterPlayerState::StaticRegisterNativesABlasterPlayerState()
{
	UClass* Class = ABlasterPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Defeats", &ABlasterPlayerState::execOnRep_Defeats },
		{ "OnRep_Team", &ABlasterPlayerState::execOnRep_Team },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterPlayerState);
UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister()
{
	return ABlasterPlayerState::StaticClass();
}
struct Z_Construct_UClass_ABlasterPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/BlasterPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefeatsAmount_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackerNameToSave_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefeatsAmount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttackerNameToSave;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats, "OnRep_Defeats" }, // 4106982783
		{ &Z_Construct_UFunction_ABlasterPlayerState_OnRep_Team, "OnRep_Team" }, // 1632779349
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Controller), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_DefeatsAmount = { "DefeatsAmount", "OnRep_Defeats", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, DefeatsAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefeatsAmount_MetaData), NewProp_DefeatsAmount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_AttackerNameToSave = { "AttackerNameToSave", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, AttackerNameToSave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackerNameToSave_MetaData), NewProp_AttackerNameToSave_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team = { "Team", "OnRep_Team", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Team), Z_Construct_UEnum_AnotherIShoot_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 1690429139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_DefeatsAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_AttackerNameToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerState_Statics::ClassParams = {
	&ABlasterPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterPlayerState()
{
	if (!Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton, Z_Construct_UClass_ABlasterPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ABlasterPlayerState>()
{
	return ABlasterPlayerState::StaticClass();
}
void ABlasterPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_DefeatsAmount(TEXT("DefeatsAmount"));
	static const FName Name_AttackerNameToSave(TEXT("AttackerNameToSave"));
	static const FName Name_Team(TEXT("Team"));
	const bool bIsValid = true
		&& Name_DefeatsAmount == ClassReps[(int32)ENetFields_Private::DefeatsAmount].Property->GetFName()
		&& Name_AttackerNameToSave == ClassReps[(int32)ENetFields_Private::AttackerNameToSave].Property->GetFName()
		&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterPlayerState"));
}
ABlasterPlayerState::ABlasterPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerState);
ABlasterPlayerState::~ABlasterPlayerState() {}
// End Class ABlasterPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerState, ABlasterPlayerState::StaticClass, TEXT("ABlasterPlayerState"), &Z_Registration_Info_UClass_ABlasterPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerState), 1297415849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_1931324190(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
