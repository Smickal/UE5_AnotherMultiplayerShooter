// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/HUD/ReturnToMainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReturnToMainMenu() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UReturnToMainMenu();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class UReturnToMainMenu Function MenuSetup
struct Z_Construct_UFunction_UReturnToMainMenu_MenuSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_MenuSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "MenuSetup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_MenuSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_MenuSetup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UReturnToMainMenu_MenuSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_MenuSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReturnToMainMenu::execMenuSetup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MenuSetup();
	P_NATIVE_END;
}
// End Class UReturnToMainMenu Function MenuSetup

// Begin Class UReturnToMainMenu Function OnDestroySessionComplete
struct Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics
{
	struct ReturnToMainMenu_eventOnDestroySessionComplete_Parms
	{
		bool bWasSuccessfull;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessfull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessfull;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::NewProp_bWasSuccessfull_SetBit(void* Obj)
{
	((ReturnToMainMenu_eventOnDestroySessionComplete_Parms*)Obj)->bWasSuccessfull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::NewProp_bWasSuccessfull = { "bWasSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReturnToMainMenu_eventOnDestroySessionComplete_Parms), &Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::NewProp_bWasSuccessfull_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::NewProp_bWasSuccessfull,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "OnDestroySessionComplete", nullptr, nullptr, Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::ReturnToMainMenu_eventOnDestroySessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::ReturnToMainMenu_eventOnDestroySessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReturnToMainMenu::execOnDestroySessionComplete)
{
	P_GET_UBOOL(Z_Param_bWasSuccessfull);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDestroySessionComplete(Z_Param_bWasSuccessfull);
	P_NATIVE_END;
}
// End Class UReturnToMainMenu Function OnDestroySessionComplete

// Begin Class UReturnToMainMenu Function OnPlayerLeftGame
struct Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "OnPlayerLeftGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReturnToMainMenu::execOnPlayerLeftGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerLeftGame();
	P_NATIVE_END;
}
// End Class UReturnToMainMenu Function OnPlayerLeftGame

// Begin Class UReturnToMainMenu Function OnReturnButtonPressed
struct Z_Construct_UFunction_UReturnToMainMenu_OnReturnButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_OnReturnButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "OnReturnButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnReturnButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_OnReturnButtonPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UReturnToMainMenu_OnReturnButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_OnReturnButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReturnToMainMenu::execOnReturnButtonPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnButtonPressed();
	P_NATIVE_END;
}
// End Class UReturnToMainMenu Function OnReturnButtonPressed

// Begin Class UReturnToMainMenu
void UReturnToMainMenu::StaticRegisterNativesUReturnToMainMenu()
{
	UClass* Class = UReturnToMainMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MenuSetup", &UReturnToMainMenu::execMenuSetup },
		{ "OnDestroySessionComplete", &UReturnToMainMenu::execOnDestroySessionComplete },
		{ "OnPlayerLeftGame", &UReturnToMainMenu::execOnPlayerLeftGame },
		{ "OnReturnButtonPressed", &UReturnToMainMenu::execOnReturnButtonPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReturnToMainMenu);
UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister()
{
	return UReturnToMainMenu::StaticClass();
}
struct Z_Construct_UClass_UReturnToMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/ReturnToMainMenu.h" },
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplayerSessionsSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplayerSessionsSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReturnToMainMenu_MenuSetup, "MenuSetup" }, // 2697192190
		{ &Z_Construct_UFunction_UReturnToMainMenu_OnDestroySessionComplete, "OnDestroySessionComplete" }, // 1751746685
		{ &Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame, "OnPlayerLeftGame" }, // 3511627313
		{ &Z_Construct_UFunction_UReturnToMainMenu_OnReturnButtonPressed, "OnReturnButtonPressed" }, // 2805159745
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReturnToMainMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton = { "ReturnButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, ReturnButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnButton_MetaData), NewProp_ReturnButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiplayerSessionsSubsystem = { "MultiplayerSessionsSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, MultiplayerSessionsSubsystem), Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplayerSessionsSubsystem_MetaData), NewProp_MultiplayerSessionsSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiplayerSessionsSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReturnToMainMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReturnToMainMenu_Statics::ClassParams = {
	&UReturnToMainMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UReturnToMainMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReturnToMainMenu()
{
	if (!Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton, Z_Construct_UClass_UReturnToMainMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UReturnToMainMenu>()
{
	return UReturnToMainMenu::StaticClass();
}
UReturnToMainMenu::UReturnToMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReturnToMainMenu);
UReturnToMainMenu::~UReturnToMainMenu() {}
// End Class UReturnToMainMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReturnToMainMenu, UReturnToMainMenu::StaticClass, TEXT("UReturnToMainMenu"), &Z_Registration_Info_UClass_UReturnToMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReturnToMainMenu), 3375854195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_96297119(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_ReturnToMainMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
