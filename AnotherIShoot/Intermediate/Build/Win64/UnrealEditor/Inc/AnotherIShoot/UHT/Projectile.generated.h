// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABlasterCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ANOTHERISHOOT_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define ANOTHERISHOOT_Projectile_generated_h

#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_PlayParticleAndSound_Implementation(ABlasterCharacter* Character); \
	DECLARE_FUNCTION(execOnDestroyTimerFinished); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execServer_PlayParticleAndSound);


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectile(AProjectile&&); \
	AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile) \
	NO_API virtual ~AProjectile();


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_13_PROLOG
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
