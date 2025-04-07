// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterComponent/BuffComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOTHERISHOOT_BuffComponent_generated_h
#error "BuffComponent.generated.h already included, missing '#pragma once' in BuffComponent.h"
#endif
#define ANOTHERISHOOT_BuffComponent_generated_h

#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_JumpBuff_Implementation(float JumpVelocity); \
	virtual void MultiCast_SpeedBuff_Implementation(float BaseSpeed, float CrouchSpeed); \
	DECLARE_FUNCTION(execMulticast_JumpBuff); \
	DECLARE_FUNCTION(execMultiCast_SpeedBuff);


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuffComponent(); \
	friend struct Z_Construct_UClass_UBuffComponent_Statics; \
public: \
	DECLARE_CLASS(UBuffComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherIShoot"), NO_API) \
	DECLARE_SERIALIZER(UBuffComponent)


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuffComponent(UBuffComponent&&); \
	UBuffComponent(const UBuffComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuffComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuffComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuffComponent) \
	NO_API virtual ~UBuffComponent();


#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_12_PROLOG
#define FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERISHOOT_API UClass* StaticClass<class UBuffComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterComponent_BuffComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
