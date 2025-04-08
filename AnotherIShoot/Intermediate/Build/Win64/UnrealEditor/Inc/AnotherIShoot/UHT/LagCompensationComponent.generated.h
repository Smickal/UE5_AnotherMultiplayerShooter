// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterComponent/LagCompensationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABlasterCharacter;
class AWeapon;
struct FVector_NetQuantize100;
struct FVector_NetQuantize;
#ifdef ANOTHERISHOOT_LagCompensationComponent_generated_h
#error "LagCompensationComponent.generated.h already included, missing '#pragma once' in LagCompensationComponent.h"
#endif
#define ANOTHERISHOOT_LagCompensationComponent_generated_h

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoxInformation_Statics; \
	ANOTHERISHOOT_API static class UScriptStruct* StaticStruct();


template<> ANOTHERISHOOT_API UScriptStruct* StaticStruct<struct FBoxInformation>();

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFramePackage_Statics; \
	ANOTHERISHOOT_API static class UScriptStruct* StaticStruct();


template<> ANOTHERISHOOT_API UScriptStruct* StaticStruct<struct FFramePackage>();

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics; \
	ANOTHERISHOOT_API static class UScriptStruct* StaticStruct();


template<> ANOTHERISHOOT_API UScriptStruct* StaticStruct<struct FServerSideRewindResult>();

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics; \
	ANOTHERISHOOT_API static class UScriptStruct* StaticStruct();


template<> ANOTHERISHOOT_API UScriptStruct* StaticStruct<struct FShotgunServerSideRewindResult>();

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_ProjectileScoreRequest_Implementation(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize100 const& InitialProjectileVelocity, float HitTime); \
	virtual void Server_ShotgunScoreRequest_Implementation(TArray<ABlasterCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime); \
	virtual void Server_ScoreRequest_Implementation(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime, AWeapon* DamageCauser); \
	DECLARE_FUNCTION(execServer_ProjectileScoreRequest); \
	DECLARE_FUNCTION(execServer_ShotgunScoreRequest); \
	DECLARE_FUNCTION(execServer_ScoreRequest);


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULagCompensationComponent(); \
	friend struct Z_Construct_UClass_ULagCompensationComponent_Statics; \
public: \
	DECLARE_CLASS(ULagCompensationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(ULagCompensationComponent)


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULagCompensationComponent(ULagCompensationComponent&&); \
	ULagCompensationComponent(const ULagCompensationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULagCompensationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULagCompensationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULagCompensationComponent) \
	NO_API virtual ~ULagCompensationComponent();


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_68_PROLOG
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class ULagCompensationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_LagCompensationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
