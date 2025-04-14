// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Weapon/Flag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlag() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AFlag();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AFlag_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AWeapon();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class AFlag
void AFlag::StaticRegisterNativesAFlag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlag);
UClass* Z_Construct_UClass_AFlag_NoRegister()
{
	return AFlag::StaticClass();
}
struct Z_Construct_UClass_AFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/Flag.h" },
		{ "ModuleRelativePath", "Weapon/Flag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagMesh_MetaData[] = {
		{ "Category", "Flag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/Flag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh = { "FlagMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlag, FlagMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagMesh_MetaData), NewProp_FlagMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlag_Statics::ClassParams = {
	&AFlag::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFlag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlag()
{
	if (!Z_Registration_Info_UClass_AFlag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlag.OuterSingleton, Z_Construct_UClass_AFlag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlag.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<AFlag>()
{
	return AFlag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlag);
AFlag::~AFlag() {}
// End Class AFlag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_Flag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlag, AFlag::StaticClass, TEXT("AFlag"), &Z_Registration_Info_UClass_AFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlag), 819840173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_Flag_h_3830202124(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_Flag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_Flag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
