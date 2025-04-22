// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnotherIShoot_init() {}
	ANOTHERISHOOT_API UFunction* Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature();
	ANOTHERISHOOT_API UFunction* Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature();
	ANOTHERISHOOT_API UFunction* Z_Construct_UDelegateFunction_AnotherIShoot_OnPickUpDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AnotherIShoot;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AnotherIShoot()
	{
		if (!Z_Registration_Info_UPackage__Script_AnotherIShoot.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AnotherIShoot_HighPingDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AnotherIShoot_OnLeftGame__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AnotherIShoot_OnPickUpDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AnotherIShoot",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1448EF96,
				0xED8445E9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AnotherIShoot.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AnotherIShoot.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AnotherIShoot(Z_Construct_UPackage__Script_AnotherIShoot, TEXT("/Script/AnotherIShoot"), Z_Registration_Info_UPackage__Script_AnotherIShoot, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1448EF96, 0xED8445E9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
