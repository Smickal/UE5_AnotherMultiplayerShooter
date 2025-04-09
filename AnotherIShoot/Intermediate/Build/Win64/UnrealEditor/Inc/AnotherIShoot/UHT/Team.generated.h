// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterTypes/Team.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOTHERISHOOT_Team_generated_h
#error "Team.generated.h already included, missing '#pragma once' in Team.h"
#endif
#define ANOTHERISHOOT_Team_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_Team_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::ET_RedTeam) \
	op(ETeam::ET_BlueTeam) \
	op(ETeam::ET_NoTeam) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> ANOTHERISHOOT_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
