// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Weapon/ProjectileBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileBullet() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectile();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectileBullet();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class AProjectileBullet
void AProjectileBullet::StaticRegisterNativesAProjectileBullet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileBullet);
UClass* Z_Construct_UClass_AProjectileBullet_NoRegister()
{
	return AProjectileBullet::StaticClass();
}
struct Z_Construct_UClass_AProjectileBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/ProjectileBullet.h" },
		{ "ModuleRelativePath", "Weapon/ProjectileBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "ProjectileBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/ProjectileBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBullet_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileBullet, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData), NewProp_ProjectileMovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBullet_Statics::NewProp_ProjectileMovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectileBullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBullet_Statics::ClassParams = {
	&AProjectileBullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectileBullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileBullet()
{
	if (!Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton, Z_Construct_UClass_AProjectileBullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<AProjectileBullet>()
{
	return AProjectileBullet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBullet);
AProjectileBullet::~AProjectileBullet() {}
// End Class AProjectileBullet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_ProjectileBullet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileBullet, AProjectileBullet::StaticClass, TEXT("AProjectileBullet"), &Z_Registration_Info_UClass_AProjectileBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileBullet), 3755419535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_ProjectileBullet_h_3534849058(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_ProjectileBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Weapon_ProjectileBullet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
