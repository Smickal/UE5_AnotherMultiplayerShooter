// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/BlasterTypes/Team.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeam() {}

// Begin Cross Module References
ANOTHERISHOOT_API UEnum* Z_Construct_UEnum_AnotherIShoot_ETeam();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Enum ETeam
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
static UEnum* ETeam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnotherIShoot_ETeam, (UObject*)Z_Construct_UPackage__Script_AnotherIShoot(), TEXT("ETeam"));
	}
	return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
}
template<> ANOTHERISHOOT_API UEnum* StaticEnum<ETeam>()
{
	return ETeam_StaticEnum();
}
struct Z_Construct_UEnum_AnotherIShoot_ETeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ET_BlueTeam.DisplayName", "Blue Team" },
		{ "ET_BlueTeam.Name", "ETeam::ET_BlueTeam" },
		{ "ET_MAX.DisplayName", "Default Max" },
		{ "ET_MAX.Name", "ETeam::ET_MAX" },
		{ "ET_NoTeam.DisplayName", "No Team" },
		{ "ET_NoTeam.Name", "ETeam::ET_NoTeam" },
		{ "ET_RedTeam.DisplayName", "Red Team" },
		{ "ET_RedTeam.Name", "ETeam::ET_RedTeam" },
		{ "ModuleRelativePath", "BlasterTypes/Team.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeam::ET_RedTeam", (int64)ETeam::ET_RedTeam },
		{ "ETeam::ET_BlueTeam", (int64)ETeam::ET_BlueTeam },
		{ "ETeam::ET_NoTeam", (int64)ETeam::ET_NoTeam },
		{ "ETeam::ET_MAX", (int64)ETeam::ET_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnotherIShoot_ETeam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnotherIShoot,
	nullptr,
	"ETeam",
	"ETeam",
	Z_Construct_UEnum_AnotherIShoot_ETeam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnotherIShoot_ETeam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnotherIShoot_ETeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnotherIShoot_ETeam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnotherIShoot_ETeam()
{
	if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_AnotherIShoot_ETeam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
}
// End Enum ETeam

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_Team_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1690429139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_Team_h_1611942348(TEXT("/Script/AnotherIShoot"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_Team_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_BlasterTypes_Team_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
