// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Weapon/ShotgunWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgunWeapon() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AHitScanWeapon();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AShotgunWeapon();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AShotgunWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class AShotgunWeapon
void AShotgunWeapon::StaticRegisterNativesAShotgunWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShotgunWeapon);
UClass* Z_Construct_UClass_AShotgunWeapon_NoRegister()
{
	return AShotgunWeapon::StaticClass();
}
struct Z_Construct_UClass_AShotgunWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/ShotgunWeapon.h" },
		{ "ModuleRelativePath", "Weapon/ShotgunWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPellets_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "ModuleRelativePath", "Weapon/ShotgunWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPellets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgunWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AShotgunWeapon_Statics::NewProp_NumberOfPellets = { "NumberOfPellets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShotgunWeapon, NumberOfPellets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPellets_MetaData), NewProp_NumberOfPellets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShotgunWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgunWeapon_Statics::NewProp_NumberOfPellets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShotgunWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHitScanWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotgunWeapon_Statics::ClassParams = {
	&AShotgunWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShotgunWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AShotgunWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShotgunWeapon()
{
	if (!Z_Registration_Info_UClass_AShotgunWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShotgunWeapon.OuterSingleton, Z_Construct_UClass_AShotgunWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShotgunWeapon.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<AShotgunWeapon>()
{
	return AShotgunWeapon::StaticClass();
}
AShotgunWeapon::AShotgunWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgunWeapon);
AShotgunWeapon::~AShotgunWeapon() {}
// End Class AShotgunWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_ShotgunWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShotgunWeapon, AShotgunWeapon::StaticClass, TEXT("AShotgunWeapon"), &Z_Registration_Info_UClass_AShotgunWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgunWeapon), 4058236578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_ShotgunWeapon_h_4114795763(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_ShotgunWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_ShotgunWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
