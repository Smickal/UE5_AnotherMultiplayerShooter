// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterComponent/CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef ANOTHERISHOOT_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define ANOTHERISHOOT_CombatComponent_generated_h

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_LaunchGrenade_Implementation(const FVector_NetQuantize Target); \
	virtual void Server_ThrowGrenade_Implementation(); \
	virtual void Multicast_ShotgunFire_Implementation(TArray<FVector_NetQuantize> const& TraceHitTargets); \
	virtual void Multicast_Fire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual bool Server_ShotgunFire_Validate(TArray<FVector_NetQuantize> const& , float ); \
	virtual void Server_ShotgunFire_Implementation(TArray<FVector_NetQuantize> const& TraceHitTargets, float FireDelay); \
	virtual bool Server_Fire_Validate(FVector_NetQuantize const& , float ); \
	virtual void Server_Fire_Implementation(FVector_NetQuantize const& TraceHitTarget, float FireDelay); \
	virtual void Server_SetAiming_Implementation(bool bAiming); \
	virtual void Server_Reload_Implementation(); \
	DECLARE_FUNCTION(execOnRep_bCarryingFlag); \
	DECLARE_FUNCTION(execOnRep_CombatState); \
	DECLARE_FUNCTION(execOnRep_Grenade); \
	DECLARE_FUNCTION(execServer_LaunchGrenade); \
	DECLARE_FUNCTION(execLaunchGrenade); \
	DECLARE_FUNCTION(execThrowGrenadeFinished); \
	DECLARE_FUNCTION(execShotgunShellReload); \
	DECLARE_FUNCTION(execServer_ThrowGrenade); \
	DECLARE_FUNCTION(execOnRep_CarriedAmmo); \
	DECLARE_FUNCTION(execMulticast_ShotgunFire); \
	DECLARE_FUNCTION(execMulticast_Fire); \
	DECLARE_FUNCTION(execServer_ShotgunFire); \
	DECLARE_FUNCTION(execServer_Fire); \
	DECLARE_FUNCTION(execOnRep_Aiming); \
	DECLARE_FUNCTION(execOnRep_Flag); \
	DECLARE_FUNCTION(execOnRep_SecondaryWeapon); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServer_SetAiming); \
	DECLARE_FUNCTION(execFinishSwapAttachWeapon); \
	DECLARE_FUNCTION(execFinishedSwap); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execServer_Reload);


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		SecondaryWeapon, \
		Flag, \
		bIsAiming, \
		CarriedAmmo, \
		CurrentGrenade, \
		CombatState, \
		bIsCarryingAFlag, \
		NETFIELD_REP_END=bIsCarryingAFlag	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatComponent(UCombatComponent&&); \
	UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_19_PROLOG
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
