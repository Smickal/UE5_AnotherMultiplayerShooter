// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/PickUps/AmmoPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPickup() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AAmmoPickup();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AAmmoPickup_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_APickup();
ANOTHERISHOOT_API UEnum* Z_Construct_UEnum_AnotherIShoot_EWeaponType();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class AAmmoPickup
void AAmmoPickup::StaticRegisterNativesAAmmoPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoPickup);
UClass* Z_Construct_UClass_AAmmoPickup_NoRegister()
{
	return AAmmoPickup::StaticClass();
}
struct Z_Construct_UClass_AAmmoPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PickUps/AmmoPickup.h" },
		{ "ModuleRelativePath", "PickUps/AmmoPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAmmount_MetaData[] = {
		{ "Category", "Ammo Properties" },
		{ "ModuleRelativePath", "PickUps/AmmoPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoWeaponType_MetaData[] = {
		{ "Category", "Ammo Properties" },
		{ "ModuleRelativePath", "PickUps/AmmoPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoAmmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoWeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoWeaponType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmmount = { "AmmoAmmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, AmmoAmmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoAmmount_MetaData), NewProp_AmmoAmmount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoWeaponType = { "AmmoWeaponType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, AmmoWeaponType), Z_Construct_UEnum_AnotherIShoot_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoWeaponType_MetaData), NewProp_AmmoWeaponType_MetaData) }; // 3464269060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoWeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoWeaponType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickup_Statics::ClassParams = {
	&AAmmoPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAmmoPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAmmoPickup()
{
	if (!Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton, Z_Construct_UClass_AAmmoPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<AAmmoPickup>()
{
	return AAmmoPickup::StaticClass();
}
AAmmoPickup::AAmmoPickup() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickup);
AAmmoPickup::~AAmmoPickup() {}
// End Class AAmmoPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_AmmoPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoPickup, AAmmoPickup::StaticClass, TEXT("AAmmoPickup"), &Z_Registration_Info_UClass_AAmmoPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoPickup), 2974827311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_AmmoPickup_h_3755894308(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_AmmoPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_PickUps_AmmoPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
