// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/ReturnToMainMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOTHERISHOOT_ReturnToMainMenu_generated_h
#error "ReturnToMainMenu.generated.h already included, missing '#pragma once' in ReturnToMainMenu.h"
#endif
#define ANOTHERISHOOT_ReturnToMainMenu_generated_h

#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnReturnButtonPressed); \
	DECLARE_FUNCTION(execServerTravelToLobby); \
	DECLARE_FUNCTION(execOnPlayerLeftGame); \
	DECLARE_FUNCTION(execOnDestroySessionComplete); \
	DECLARE_FUNCTION(execTravelServer); \
	DECLARE_FUNCTION(execMenuSetup);


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReturnToMainMenu(); \
	friend struct Z_Construct_UClass_UReturnToMainMenu_Statics; \
public: \
	DECLARE_CLASS(UReturnToMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(UReturnToMainMenu)


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReturnToMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReturnToMainMenu(UReturnToMainMenu&&); \
	UReturnToMainMenu(const UReturnToMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReturnToMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReturnToMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReturnToMainMenu) \
	NO_API virtual ~UReturnToMainMenu();


#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_14_PROLOG
#define FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class UReturnToMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
