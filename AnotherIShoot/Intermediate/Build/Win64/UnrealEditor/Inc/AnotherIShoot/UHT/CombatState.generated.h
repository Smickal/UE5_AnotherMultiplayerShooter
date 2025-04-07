// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterTypes/CombatState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOTHERISHOOT_CombatState_generated_h
#error "CombatState.generated.h already included, missing '#pragma once' in CombatState.h"
#endif
#define ANOTHERISHOOT_CombatState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_CombatState_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::ECS_Unoccupied) \
	op(ECombatState::ECS_Reloading) \
	op(ECombatState::ECS_ThrowingGrenade) \
	op(ECombatState::ECS_SwappingWeapon) 

enum class ECombatState : uint8;
template<> struct TIsUEnumClass<ECombatState> { enum { Value = true }; };
template<> ANOTHERISHOOT_API UEnum* StaticEnum<ECombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
