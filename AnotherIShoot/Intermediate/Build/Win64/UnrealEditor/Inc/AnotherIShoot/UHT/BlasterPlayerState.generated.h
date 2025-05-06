// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerState/BlasterPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOTHERISHOOT_BlasterPlayerState_generated_h
#error "BlasterPlayerState.generated.h already included, missing '#pragma once' in BlasterPlayerState.h"
#endif
#define ANOTHERISHOOT_BlasterPlayerState_generated_h

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execOnRep_Defeats);


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterPlayerState(); \
	friend struct Z_Construct_UClass_ABlasterPlayerState_Statics; \
public: \
	DECLARE_CLASS(ABlasterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(ABlasterPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DefeatsAmount=NETFIELD_REP_START, \
		AttackerNameToSave, \
		Team, \
		bIsHost, \
		NETFIELD_REP_END=bIsHost	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlasterPlayerState(ABlasterPlayerState&&); \
	ABlasterPlayerState(const ABlasterPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerState) \
	NO_API virtual ~ABlasterPlayerState();


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_14_PROLOG
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class ABlasterPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PlayerState_BlasterPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
