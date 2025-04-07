// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PickUps/Pickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ANOTHERISHOOT_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define ANOTHERISHOOT_Pickup_generated_h

#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBindOverlapTimeFinished); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APickup(APickup&&); \
	APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h_11_PROLOG
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_PickUps_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
