// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BlasterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class AWeapon;
class UDamageType;
#ifdef ANOTHERISHOOT_BlasterCharacter_generated_h
#error "BlasterCharacter.generated.h already included, missing '#pragma once' in BlasterCharacter.h"
#endif
#define ANOTHERISHOOT_BlasterCharacter_generated_h

#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_EquipButtonPressed_Implementation(); \
	virtual void Multicast_Elim_Implementation(); \
	DECLARE_FUNCTION(execOnRep_CurrentShield); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execServer_EquipButtonPressed); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execMulticast_Elim);


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterCharacter(); \
	friend struct Z_Construct_UClass_ABlasterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABlasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(ABlasterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABlasterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		CurrentHealth, \
		CurrentShield, \
		bDisableGameplay, \
		NETFIELD_REP_END=bDisableGameplay	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlasterCharacter(ABlasterCharacter&&); \
	ABlasterCharacter(const ABlasterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlasterCharacter) \
	NO_API virtual ~ABlasterCharacter();


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_18_PROLOG
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class ABlasterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Character_BlasterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
