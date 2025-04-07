// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Interfaces/InteractWithCrosshairInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractWithCrosshairInterface() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UInteractWithCrosshairInterface();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UInteractWithCrosshairInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Interface UInteractWithCrosshairInterface
void UInteractWithCrosshairInterface::StaticRegisterNativesUInteractWithCrosshairInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractWithCrosshairInterface);
UClass* Z_Construct_UClass_UInteractWithCrosshairInterface_NoRegister()
{
	return UInteractWithCrosshairInterface::StaticClass();
}
struct Z_Construct_UClass_UInteractWithCrosshairInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InteractWithCrosshairInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractWithCrosshairInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::ClassParams = {
	&UInteractWithCrosshairInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractWithCrosshairInterface()
{
	if (!Z_Registration_Info_UClass_UInteractWithCrosshairInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractWithCrosshairInterface.OuterSingleton, Z_Construct_UClass_UInteractWithCrosshairInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractWithCrosshairInterface.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UInteractWithCrosshairInterface>()
{
	return UInteractWithCrosshairInterface::StaticClass();
}
UInteractWithCrosshairInterface::UInteractWithCrosshairInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractWithCrosshairInterface);
UInteractWithCrosshairInterface::~UInteractWithCrosshairInterface() {}
// End Interface UInteractWithCrosshairInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Interfaces_InteractWithCrosshairInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractWithCrosshairInterface, UInteractWithCrosshairInterface::StaticClass, TEXT("UInteractWithCrosshairInterface"), &Z_Registration_Info_UClass_UInteractWithCrosshairInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractWithCrosshairInterface), 2529295765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Interfaces_InteractWithCrosshairInterface_h_3779146797(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Interfaces_InteractWithCrosshairInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MultiplayerCourse_AnotherIShoot_Source_AnotherIShoot_Interfaces_InteractWithCrosshairInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
