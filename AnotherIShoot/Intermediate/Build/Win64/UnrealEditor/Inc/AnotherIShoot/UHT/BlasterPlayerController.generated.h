// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/BlasterPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOTHERISHOOT_BlasterPlayerController_generated_h
#error "BlasterPlayerController.generated.h already included, missing '#pragma once' in BlasterPlayerController.h"
#endif
#define ANOTHERISHOOT_BlasterPlayerController_generated_h

#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_15_DELEGATE \
ANOTHERISHOOT_API void FHighPingDelegate_DelegateWrapper(const FMulticastScriptDelegate& HighPingDelegate, bool bPingTooHigh);


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_ReportServerTIme_Implementation(float TimeOfClientReq, float TimeOfServerReceivedClientRequest); \
	virtual void Server_RequestServerTime_Implementation(float timeOfClientReq); \
	virtual void Server_ReportPingStatus_Implementation(bool bHighPing); \
	virtual void Client_JoinMidGame_Implementation(FName StateOfMatch, float Warmup, float Match, float StartingTime, float Cooldown); \
	virtual void Server_CheckMatchState_Implementation(); \
	DECLARE_FUNCTION(execClient_ReportServerTIme); \
	DECLARE_FUNCTION(execServer_RequestServerTime); \
	DECLARE_FUNCTION(execServer_ReportPingStatus); \
	DECLARE_FUNCTION(execClient_JoinMidGame); \
	DECLARE_FUNCTION(execServer_CheckMatchState); \
	DECLARE_FUNCTION(execOnRep_MatchState);


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterPlayerController(); \
	friend struct Z_Construct_UClass_ABlasterPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABlasterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(ABlasterPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlasterPlayerController(ABlasterPlayerController&&); \
	ABlasterPlayerController(const ABlasterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerController) \
	NO_API virtual ~ABlasterPlayerController();


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_17_PROLOG
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class ABlasterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PlayerController_BlasterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
