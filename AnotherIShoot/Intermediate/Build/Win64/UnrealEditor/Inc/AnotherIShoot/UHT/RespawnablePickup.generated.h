// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PickUps/RespawnablePickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ANOTHERISHOOT_RespawnablePickup_generated_h
#error "RespawnablePickup.generated.h already included, missing '#pragma once' in RespawnablePickup.h"
#endif
#define ANOTHERISHOOT_RespawnablePickup_generated_h

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetTimer_Implementation(float Timer); \
	DECLARE_FUNCTION(execMulticast_SetTimer); \
	DECLARE_FUNCTION(execOnRep_SpawnTime); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap); \
	DECLARE_FUNCTION(execSpawnPickUpTimerFinished); \
	DECLARE_FUNCTION(execStartSpawnPickUpTimer);


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARespawnablePickup(); \
	friend struct Z_Construct_UClass_ARespawnablePickup_Statics; \
public: \
	DECLARE_CLASS(ARespawnablePickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(ARespawnablePickup) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpawnTime=NETFIELD_REP_START, \
		NETFIELD_REP_END=SpawnTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARespawnablePickup(ARespawnablePickup&&); \
	ARespawnablePickup(const ARespawnablePickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARespawnablePickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARespawnablePickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARespawnablePickup) \
	NO_API virtual ~ARespawnablePickup();


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_14_PROLOG
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class ARespawnablePickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_RespawnablePickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
