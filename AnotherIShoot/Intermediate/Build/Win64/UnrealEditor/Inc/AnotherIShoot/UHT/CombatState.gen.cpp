// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/BlasterTypes/CombatState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatState() {}

// Begin Cross Module References
ANOTHERISHOOT_API UEnum* Z_Construct_UEnum_AnotherIShoot_ECombatState();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Enum ECombatState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatState;
static UEnum* ECombatState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnotherIShoot_ECombatState, (UObject*)Z_Construct_UPackage__Script_AnotherIShoot(), TEXT("ECombatState"));
	}
	return Z_Registration_Info_UEnum_ECombatState.OuterSingleton;
}
template<> ANOTHERISHOOT_API UEnum* StaticEnum<ECombatState>()
{
	return ECombatState_StaticEnum();
}
struct Z_Construct_UEnum_AnotherIShoot_ECombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_MAX.DisplayName", "Default_Max" },
		{ "ECS_MAX.Name", "ECombatState::ECS_MAX" },
		{ "ECS_Reloading.DisplayName", "Reloading" },
		{ "ECS_Reloading.Name", "ECombatState::ECS_Reloading" },
		{ "ECS_SwappingWeapon.DisplayName", "Swapping Weapon" },
		{ "ECS_SwappingWeapon.Name", "ECombatState::ECS_SwappingWeapon" },
		{ "ECS_ThrowingGrenade.DisplayName", "Throwing Grenade" },
		{ "ECS_ThrowingGrenade.Name", "ECombatState::ECS_ThrowingGrenade" },
		{ "ECS_Unoccupied.DisplayName", "Unoccupied" },
		{ "ECS_Unoccupied.Name", "ECombatState::ECS_Unoccupied" },
		{ "ModuleRelativePath", "BlasterTypes/CombatState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatState::ECS_Unoccupied", (int64)ECombatState::ECS_Unoccupied },
		{ "ECombatState::ECS_Reloading", (int64)ECombatState::ECS_Reloading },
		{ "ECombatState::ECS_ThrowingGrenade", (int64)ECombatState::ECS_ThrowingGrenade },
		{ "ECombatState::ECS_SwappingWeapon", (int64)ECombatState::ECS_SwappingWeapon },
		{ "ECombatState::ECS_MAX", (int64)ECombatState::ECS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnotherIShoot_ECombatState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnotherIShoot,
	nullptr,
	"ECombatState",
	"ECombatState",
	Z_Construct_UEnum_AnotherIShoot_ECombatState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnotherIShoot_ECombatState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnotherIShoot_ECombatState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnotherIShoot_ECombatState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnotherIShoot_ECombatState()
{
	if (!Z_Registration_Info_UEnum_ECombatState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatState.InnerSingleton, Z_Construct_UEnum_AnotherIShoot_ECombatState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatState.InnerSingleton;
}
// End Enum ECombatState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_CombatState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatState_StaticEnum, TEXT("ECombatState"), &Z_Registration_Info_UEnum_ECombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 805346639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_CombatState_h_308874972(TEXT("/Script/AnotherIShoot"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_CombatState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_CombatState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
