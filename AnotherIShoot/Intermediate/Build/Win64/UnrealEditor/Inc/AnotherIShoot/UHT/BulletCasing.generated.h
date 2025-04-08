// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/BulletCasing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ANOTHERISHOOT_BulletCasing_generated_h
#error "BulletCasing.generated.h already included, missing '#pragma once' in BulletCasing.h"
#endif
#define ANOTHERISHOOT_BulletCasing_generated_h

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletCasing(); \
	friend struct Z_Construct_UClass_ABulletCasing_Statics; \
public: \
	DECLARE_CLASS(ABulletCasing, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(ABulletCasing)


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABulletCasing(ABulletCasing&&); \
	ABulletCasing(const ABulletCasing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletCasing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletCasing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletCasing) \
	NO_API virtual ~ABulletCasing();


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h_9_PROLOG
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class ABulletCasing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_BulletCasing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
