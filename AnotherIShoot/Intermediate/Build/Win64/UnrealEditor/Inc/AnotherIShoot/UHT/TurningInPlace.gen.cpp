// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Enums/TurningInPlace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurningInPlace() {}

// Begin Cross Module References
ANOTHERISHOOT_API UEnum* Z_Construct_UEnum_AnotherIShoot_ETurningInPlace();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Enum ETurningInPlace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurningInPlace;
static UEnum* ETurningInPlace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnotherIShoot_ETurningInPlace, (UObject*)Z_Construct_UPackage__Script_AnotherIShoot(), TEXT("ETurningInPlace"));
	}
	return Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton;
}
template<> ANOTHERISHOOT_API UEnum* StaticEnum<ETurningInPlace>()
{
	return ETurningInPlace_StaticEnum();
}
struct Z_Construct_UEnum_AnotherIShoot_ETurningInPlace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ETIP_Max.DisplayName", "Default_Max" },
		{ "ETIP_Max.Name", "ETurningInPlace::ETIP_Max" },
		{ "ETP_Left.DisplayName", "Turning Left" },
		{ "ETP_Left.Name", "ETurningInPlace::ETP_Left" },
		{ "ETP_NotTurning.DisplayName", "Not Turning" },
		{ "ETP_NotTurning.Name", "ETurningInPlace::ETP_NotTurning" },
		{ "ETP_Right.DisplayName", "Turning Right" },
		{ "ETP_Right.Name", "ETurningInPlace::ETP_Right" },
		{ "ModuleRelativePath", "Enums/TurningInPlace.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETurningInPlace::ETP_Left", (int64)ETurningInPlace::ETP_Left },
		{ "ETurningInPlace::ETP_Right", (int64)ETurningInPlace::ETP_Right },
		{ "ETurningInPlace::ETP_NotTurning", (int64)ETurningInPlace::ETP_NotTurning },
		{ "ETurningInPlace::ETIP_Max", (int64)ETurningInPlace::ETIP_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnotherIShoot_ETurningInPlace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnotherIShoot,
	nullptr,
	"ETurningInPlace",
	"ETurningInPlace",
	Z_Construct_UEnum_AnotherIShoot_ETurningInPlace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnotherIShoot_ETurningInPlace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnotherIShoot_ETurningInPlace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnotherIShoot_ETurningInPlace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnotherIShoot_ETurningInPlace()
{
	if (!Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton, Z_Construct_UEnum_AnotherIShoot_ETurningInPlace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton;
}
// End Enum ETurningInPlace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Enums_TurningInPlace_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETurningInPlace_StaticEnum, TEXT("ETurningInPlace"), &Z_Registration_Info_UEnum_ETurningInPlace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1063812630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Enums_TurningInPlace_h_4023163050(TEXT("/Script/AnotherIShoot"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Enums_TurningInPlace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Enums_TurningInPlace_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
