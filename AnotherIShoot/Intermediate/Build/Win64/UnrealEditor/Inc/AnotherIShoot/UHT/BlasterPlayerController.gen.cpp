// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterPlayerController() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterPlayerController();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister();
ANOTHERISHOOT_API UFunction* Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Delegate FHighPingDelegate
struct Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics
{
	struct _Script_AnotherIShoot_eventHighPingDelegate_Parms
	{
		bool bPingTooHigh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPingTooHigh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPingTooHigh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh_SetBit(void* Obj)
{
	((_Script_AnotherIShoot_eventHighPingDelegate_Parms*)Obj)->bPingTooHigh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh = { "bPingTooHigh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AnotherIShoot_eventHighPingDelegate_Parms), &Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnotherIShoot, nullptr, "HighPingDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::_Script_AnotherIShoot_eventHighPingDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::_Script_AnotherIShoot_eventHighPingDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHighPingDelegate_DelegateWrapper(const FMulticastScriptDelegate& HighPingDelegate, bool bPingTooHigh)
{
	struct _Script_AnotherIShoot_eventHighPingDelegate_Parms
	{
		bool bPingTooHigh;
	};
	_Script_AnotherIShoot_eventHighPingDelegate_Parms Parms;
	Parms.bPingTooHigh=bPingTooHigh ? true : false;
	HighPingDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FHighPingDelegate

// Begin Class ABlasterPlayerController Function Client_JoinMidGame
struct BlasterPlayerController_eventClient_JoinMidGame_Parms
{
	FName StateOfMatch;
	float Warmup;
	float Match;
	float StartingTime;
	float Cooldown;
};
static const FName NAME_ABlasterPlayerController_Client_JoinMidGame = FName(TEXT("Client_JoinMidGame"));
void ABlasterPlayerController::Client_JoinMidGame(FName StateOfMatch, float Warmup, float Match, float StartingTime, float Cooldown)
{
	BlasterPlayerController_eventClient_JoinMidGame_Parms Parms;
	Parms.StateOfMatch=StateOfMatch;
	Parms.Warmup=Warmup;
	Parms.Match=Match;
	Parms.StartingTime=StartingTime;
	Parms.Cooldown=Cooldown;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_Client_JoinMidGame);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateOfMatch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Warmup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Match;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_StateOfMatch = { "StateOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClient_JoinMidGame_Parms, StateOfMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_Warmup = { "Warmup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClient_JoinMidGame_Parms, Warmup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClient_JoinMidGame_Parms, Match), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_StartingTime = { "StartingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClient_JoinMidGame_Parms, StartingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClient_JoinMidGame_Parms, Cooldown), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_StateOfMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_Warmup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_Match,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_StartingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::NewProp_Cooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "Client_JoinMidGame", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::PropPointers), sizeof(BlasterPlayerController_eventClient_JoinMidGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlasterPlayerController_eventClient_JoinMidGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execClient_JoinMidGame)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StateOfMatch);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Warmup);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Match);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartingTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_JoinMidGame_Implementation(Z_Param_StateOfMatch,Z_Param_Warmup,Z_Param_Match,Z_Param_StartingTime,Z_Param_Cooldown);
	P_NATIVE_END;
}
// End Class ABlasterPlayerController Function Client_JoinMidGame

// Begin Class ABlasterPlayerController Function Client_ReportServerTIme
struct BlasterPlayerController_eventClient_ReportServerTIme_Parms
{
	float TimeOfClientReq;
	float TimeOfServerReceivedClientRequest;
};
static const FName NAME_ABlasterPlayerController_Client_ReportServerTIme = FName(TEXT("Client_ReportServerTIme"));
void ABlasterPlayerController::Client_ReportServerTIme(float TimeOfClientReq, float TimeOfServerReceivedClientRequest)
{
	BlasterPlayerController_eventClient_ReportServerTIme_Parms Parms;
	Parms.TimeOfClientReq=TimeOfClientReq;
	Parms.TimeOfServerReceivedClientRequest=TimeOfServerReceivedClientRequest;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_Client_ReportServerTIme);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reports the current server time to the client in response of client's request\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reports the current server time to the client in response of client's request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientReq;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfServerReceivedClientRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::NewProp_TimeOfClientReq = { "TimeOfClientReq", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClient_ReportServerTIme_Parms, TimeOfClientReq), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::NewProp_TimeOfServerReceivedClientRequest = { "TimeOfServerReceivedClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClient_ReportServerTIme_Parms, TimeOfServerReceivedClientRequest), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::NewProp_TimeOfClientReq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::NewProp_TimeOfServerReceivedClientRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "Client_ReportServerTIme", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::PropPointers), sizeof(BlasterPlayerController_eventClient_ReportServerTIme_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlasterPlayerController_eventClient_ReportServerTIme_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execClient_ReportServerTIme)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientReq);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfServerReceivedClientRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_ReportServerTIme_Implementation(Z_Param_TimeOfClientReq,Z_Param_TimeOfServerReceivedClientRequest);
	P_NATIVE_END;
}
// End Class ABlasterPlayerController Function Client_ReportServerTIme

// Begin Class ABlasterPlayerController Function OnRep_MatchState
struct Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "OnRep_MatchState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execOnRep_MatchState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MatchState();
	P_NATIVE_END;
}
// End Class ABlasterPlayerController Function OnRep_MatchState

// Begin Class ABlasterPlayerController Function Server_CheckMatchState
static const FName NAME_ABlasterPlayerController_Server_CheckMatchState = FName(TEXT("Server_CheckMatchState"));
void ABlasterPlayerController::Server_CheckMatchState()
{
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_Server_CheckMatchState);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABlasterPlayerController_Server_CheckMatchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_Server_CheckMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "Server_CheckMatchState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Server_CheckMatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_Server_CheckMatchState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlasterPlayerController_Server_CheckMatchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_Server_CheckMatchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execServer_CheckMatchState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_CheckMatchState_Implementation();
	P_NATIVE_END;
}
// End Class ABlasterPlayerController Function Server_CheckMatchState

// Begin Class ABlasterPlayerController Function Server_ReportPingStatus
struct BlasterPlayerController_eventServer_ReportPingStatus_Parms
{
	bool bHighPing;
};
static const FName NAME_ABlasterPlayerController_Server_ReportPingStatus = FName(TEXT("Server_ReportPingStatus"));
void ABlasterPlayerController::Server_ReportPingStatus(bool bHighPing)
{
	BlasterPlayerController_eventServer_ReportPingStatus_Parms Parms;
	Parms.bHighPing=bHighPing ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_Server_ReportPingStatus);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHighPing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::NewProp_bHighPing_SetBit(void* Obj)
{
	((BlasterPlayerController_eventServer_ReportPingStatus_Parms*)Obj)->bHighPing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::NewProp_bHighPing = { "bHighPing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlasterPlayerController_eventServer_ReportPingStatus_Parms), &Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::NewProp_bHighPing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::NewProp_bHighPing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "Server_ReportPingStatus", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::PropPointers), sizeof(BlasterPlayerController_eventServer_ReportPingStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlasterPlayerController_eventServer_ReportPingStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execServer_ReportPingStatus)
{
	P_GET_UBOOL(Z_Param_bHighPing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ReportPingStatus_Implementation(Z_Param_bHighPing);
	P_NATIVE_END;
}
// End Class ABlasterPlayerController Function Server_ReportPingStatus

// Begin Class ABlasterPlayerController Function Server_RequestServerTime
struct BlasterPlayerController_eventServer_RequestServerTime_Parms
{
	float timeOfClientReq;
};
static const FName NAME_ABlasterPlayerController_Server_RequestServerTime = FName(TEXT("Server_RequestServerTime"));
void ABlasterPlayerController::Server_RequestServerTime(float timeOfClientReq)
{
	BlasterPlayerController_eventServer_RequestServerTime_Parms Parms;
	Parms.timeOfClientReq=timeOfClientReq;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_Server_RequestServerTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Requests the current server time passing in the client's time when the request was sent\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests the current server time passing in the client's time when the request was sent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeOfClientReq;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::NewProp_timeOfClientReq = { "timeOfClientReq", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventServer_RequestServerTime_Parms, timeOfClientReq), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::NewProp_timeOfClientReq,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "Server_RequestServerTime", nullptr, nullptr, Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::PropPointers), sizeof(BlasterPlayerController_eventServer_RequestServerTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlasterPlayerController_eventServer_RequestServerTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execServer_RequestServerTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_timeOfClientReq);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RequestServerTime_Implementation(Z_Param_timeOfClientReq);
	P_NATIVE_END;
}
// End Class ABlasterPlayerController Function Server_RequestServerTime

// Begin Class ABlasterPlayerController
void ABlasterPlayerController::StaticRegisterNativesABlasterPlayerController()
{
	UClass* Class = ABlasterPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_JoinMidGame", &ABlasterPlayerController::execClient_JoinMidGame },
		{ "Client_ReportServerTIme", &ABlasterPlayerController::execClient_ReportServerTIme },
		{ "OnRep_MatchState", &ABlasterPlayerController::execOnRep_MatchState },
		{ "Server_CheckMatchState", &ABlasterPlayerController::execServer_CheckMatchState },
		{ "Server_ReportPingStatus", &ABlasterPlayerController::execServer_ReportPingStatus },
		{ "Server_RequestServerTime", &ABlasterPlayerController::execServer_RequestServerTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterPlayerController);
UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister()
{
	return ABlasterPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABlasterPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/BlasterPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterHUD_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToMainMenuWidget_MetaData[] = {
		{ "Category", "HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Return to MainMenu\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return to MainMenu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToMainMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterGameMode_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighPingDuration_MetaData[] = {
		{ "Category", "BlasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckPingFrequency_MetaData[] = {
		{ "Category", "BlasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighPingThreshold_MetaData[] = {
		{ "Category", "BlasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncFrequency_MetaData[] = {
		{ "Category", "Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Every x-sec tries to sync with server time\n" },
#endif
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Every x-sec tries to sync with server time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWeaponTypeTexture_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterHUD;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnToMainMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToMainMenu;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterGameMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPingDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckPingFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPingThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSyncFrequency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWeaponTypeTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterPlayerController_Client_JoinMidGame, "Client_JoinMidGame" }, // 120159344
		{ &Z_Construct_UFunction_ABlasterPlayerController_Client_ReportServerTIme, "Client_ReportServerTIme" }, // 4080845304
		{ &Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState, "OnRep_MatchState" }, // 2879060983
		{ &Z_Construct_UFunction_ABlasterPlayerController_Server_CheckMatchState, "Server_CheckMatchState" }, // 3395777004
		{ &Z_Construct_UFunction_ABlasterPlayerController_Server_ReportPingStatus, "Server_ReportPingStatus" }, // 1533832706
		{ &Z_Construct_UFunction_ABlasterPlayerController_Server_RequestServerTime, "Server_RequestServerTime" }, // 3824766622
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD = { "BlasterHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, BlasterHUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterHUD_MetaData), NewProp_BlasterHUD_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenuWidget = { "ReturnToMainMenuWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, ReturnToMainMenuWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToMainMenuWidget_MetaData), NewProp_ReturnToMainMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenu = { "ReturnToMainMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, ReturnToMainMenu), Z_Construct_UClass_UReturnToMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToMainMenu_MetaData), NewProp_ReturnToMainMenu_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, MatchState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchState_MetaData), NewProp_MatchState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOverlay_MetaData), NewProp_CharacterOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode = { "BlasterGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, BlasterGameMode), Z_Construct_UClass_ABlasterGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterGameMode_MetaData), NewProp_BlasterGameMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingDuration = { "HighPingDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, HighPingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighPingDuration_MetaData), NewProp_HighPingDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CheckPingFrequency = { "CheckPingFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, CheckPingFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckPingFrequency_MetaData), NewProp_CheckPingFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingThreshold = { "HighPingThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, HighPingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighPingThreshold_MetaData), NewProp_HighPingThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency = { "TimeSyncFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, TimeSyncFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSyncFrequency_MetaData), NewProp_TimeSyncFrequency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HUDWeaponTypeTexture = { "HUDWeaponTypeTexture", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, HUDWeaponTypeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWeaponTypeTexture_MetaData), NewProp_HUDWeaponTypeTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_ReturnToMainMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CheckPingFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HighPingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_HUDWeaponTypeTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams = {
	&ABlasterPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterPlayerController()
{
	if (!Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton, Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<ABlasterPlayerController>()
{
	return ABlasterPlayerController::StaticClass();
}
void ABlasterPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MatchState(TEXT("MatchState"));
	const bool bIsValid = true
		&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterPlayerController"));
}
ABlasterPlayerController::ABlasterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerController);
ABlasterPlayerController::~ABlasterPlayerController() {}
// End Class ABlasterPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerController, ABlasterPlayerController::StaticClass, TEXT("ABlasterPlayerController"), &Z_Registration_Info_UClass_ABlasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerController), 817176558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_3357210084(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
