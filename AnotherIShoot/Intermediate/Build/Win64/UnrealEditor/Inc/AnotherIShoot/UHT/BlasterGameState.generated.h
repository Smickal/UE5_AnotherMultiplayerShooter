// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameState/BlasterGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOTHERISHOOT_BlasterGameState_generated_h
#error "BlasterGameState.generated.h already included, missing '#pragma once' in BlasterGameState.h"
#endif
#define ANOTHERISHOOT_BlasterGameState_generated_h

#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterGameState(); \
	friend struct Z_Construct_UClass_ABlasterGameState_Statics; \
public: \
	DECLARE_CLASS(ABlasterGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(ABlasterGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TopScoringPlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=TopScoringPlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlasterGameState(ABlasterGameState&&); \
	ABlasterGameState(const ABlasterGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterGameState) \
	NO_API virtual ~ABlasterGameState();


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_13_PROLOG
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class ABlasterGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_GameState_BlasterGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
