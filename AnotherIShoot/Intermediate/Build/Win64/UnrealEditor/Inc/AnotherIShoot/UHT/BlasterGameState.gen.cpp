// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/GameState/BlasterGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterGameState() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterGameState();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterGameState_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class ABlasterGameState Function OnRepBlueTeamScore
struct Z_Construct_UFunction_ABlasterGameState_OnRepBlueTeamScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameState/BlasterGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterGameState_OnRepBlueTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterGameState, nullptr, "OnRepBlueTeamScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterGameState_OnRepBlueTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterGameState_OnRepBlueTeamScore_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterGameState_OnRepBlueTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterGameState_OnRepBlueTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterGameState::execOnRepBlueTeamScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepBlueTeamScore();
	P_NATIVE_END;
}
// End Class ABlasterGameState Function OnRepBlueTeamScore

// Begin Class ABlasterGameState Function OnRepRedTeamScore
struct Z_Construct_UFunction_ABlasterGameState_OnRepRedTeamScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameState/BlasterGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterGameState_OnRepRedTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterGameState, nullptr, "OnRepRedTeamScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterGameState_OnRepRedTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterGameState_OnRepRedTeamScore_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterGameState_OnRepRedTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterGameState_OnRepRedTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterGameState::execOnRepRedTeamScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepRedTeamScore();
	P_NATIVE_END;
}
// End Class ABlasterGameState Function OnRepRedTeamScore

// Begin Class ABlasterGameState
void ABlasterGameState::StaticRegisterNativesABlasterGameState()
{
	UClass* Class = ABlasterGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRepBlueTeamScore", &ABlasterGameState::execOnRepBlueTeamScore },
		{ "OnRepRedTeamScore", &ABlasterGameState::execOnRepRedTeamScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterGameState);
UClass* Z_Construct_UClass_ABlasterGameState_NoRegister()
{
	return ABlasterGameState::StaticClass();
}
struct Z_Construct_UClass_ABlasterGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/BlasterGameState.h" },
		{ "ModuleRelativePath", "GameState/BlasterGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopScoringPlayer_MetaData[] = {
		{ "ModuleRelativePath", "GameState/BlasterGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "GameState/BlasterGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "GameState/BlasterGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopScoringPlayer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TopScoringPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RedTeamScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueTeamScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterGameState_OnRepBlueTeamScore, "OnRepBlueTeamScore" }, // 3453308142
		{ &Z_Construct_UFunction_ABlasterGameState_OnRepRedTeamScore, "OnRepRedTeamScore" }, // 4202474045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayer_Inner = { "TopScoringPlayer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayer = { "TopScoringPlayer", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameState, TopScoringPlayer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopScoringPlayer_MetaData), NewProp_TopScoringPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_RedTeamScore = { "RedTeamScore", "OnRepRedTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameState, RedTeamScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedTeamScore_MetaData), NewProp_RedTeamScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_BlueTeamScore = { "BlueTeamScore", "OnRepBlueTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameState, BlueTeamScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueTeamScore_MetaData), NewProp_BlueTeamScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_RedTeamScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_BlueTeamScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterGameState_Statics::ClassParams = {
	&ABlasterGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterGameState()
{
	if (!Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton, Z_Construct_UClass_ABlasterGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ABlasterGameState>()
{
	return ABlasterGameState::StaticClass();
}
void ABlasterGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TopScoringPlayer(TEXT("TopScoringPlayer"));
	static const FName Name_RedTeamScore(TEXT("RedTeamScore"));
	static const FName Name_BlueTeamScore(TEXT("BlueTeamScore"));
	const bool bIsValid = true
		&& Name_TopScoringPlayer == ClassReps[(int32)ENetFields_Private::TopScoringPlayer].Property->GetFName()
		&& Name_RedTeamScore == ClassReps[(int32)ENetFields_Private::RedTeamScore].Property->GetFName()
		&& Name_BlueTeamScore == ClassReps[(int32)ENetFields_Private::BlueTeamScore].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterGameState"));
}
ABlasterGameState::ABlasterGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterGameState);
ABlasterGameState::~ABlasterGameState() {}
// End Class ABlasterGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterGameState, ABlasterGameState::StaticClass, TEXT("ABlasterGameState"), &Z_Registration_Info_UClass_ABlasterGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterGameState), 1979617627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_1960369104(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
