// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/HUD/CharacterOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterOverlay() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UCharacterOverlay();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class UCharacterOverlay
void UCharacterOverlay::StaticRegisterNativesUCharacterOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterOverlay);
UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister()
{
	return UCharacterOverlay::StaticClass();
}
struct Z_Construct_UClass_UCharacterOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/CharacterOverlay.h" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvisibleImage_MetaData[] = {
		{ "Category", "CharacterOverlay" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamScore_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamScore_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreSpacerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefeatsAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EliminatedText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmoAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTypeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTypeImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchCountdownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedBlinkingAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetBlinkingAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighPingImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighPingAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvisibleImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueTeamScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RedTeamScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreSpacerText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefeatsAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EliminatedText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedAmmoAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponTypeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponTypeImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchCountdownText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RedBlinkingAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetBlinkingAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighPingImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighPingAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_InvisibleImage = { "InvisibleImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, InvisibleImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvisibleImage_MetaData), NewProp_InvisibleImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthText_MetaData), NewProp_HealthText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar = { "ShieldBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ShieldBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldBar_MetaData), NewProp_ShieldBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText = { "ShieldText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ShieldText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldText_MetaData), NewProp_ShieldText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmount = { "ScoreAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ScoreAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreAmount_MetaData), NewProp_ScoreAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_BlueTeamScore = { "BlueTeamScore", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, BlueTeamScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueTeamScore_MetaData), NewProp_BlueTeamScore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedTeamScore = { "RedTeamScore", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, RedTeamScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedTeamScore_MetaData), NewProp_RedTeamScore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreSpacerText = { "ScoreSpacerText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ScoreSpacerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreSpacerText_MetaData), NewProp_ScoreSpacerText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatsAmount = { "DefeatsAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, DefeatsAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefeatsAmount_MetaData), NewProp_DefeatsAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_EliminatedText = { "EliminatedText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, EliminatedText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EliminatedText_MetaData), NewProp_EliminatedText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmount = { "WeaponAmmoAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, WeaponAmmoAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAmmoAmount_MetaData), NewProp_WeaponAmmoAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmount = { "CarriedAmmoAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, CarriedAmmoAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedAmmoAmount_MetaData), NewProp_CarriedAmmoAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeText = { "WeaponTypeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, WeaponTypeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTypeText_MetaData), NewProp_WeaponTypeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeImage = { "WeaponTypeImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, WeaponTypeImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTypeImage_MetaData), NewProp_WeaponTypeImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText = { "MatchCountdownText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, MatchCountdownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchCountdownText_MetaData), NewProp_MatchCountdownText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedBlinkingAnimation = { "RedBlinkingAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, RedBlinkingAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedBlinkingAnimation_MetaData), NewProp_RedBlinkingAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ResetBlinkingAnimation = { "ResetBlinkingAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ResetBlinkingAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetBlinkingAnimation_MetaData), NewProp_ResetBlinkingAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_GrenadeText = { "GrenadeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, GrenadeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeText_MetaData), NewProp_GrenadeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage = { "HighPingImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HighPingImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighPingImage_MetaData), NewProp_HighPingImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingAnimation = { "HighPingAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HighPingAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighPingAnimation_MetaData), NewProp_HighPingAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_TeamText = { "TeamText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, TeamText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamText_MetaData), NewProp_TeamText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_InvisibleImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_BlueTeamScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedTeamScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreSpacerText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatsAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_EliminatedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_RedBlinkingAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ResetBlinkingAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_GrenadeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_TeamText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams = {
	&UCharacterOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterOverlay()
{
	if (!Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton, Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<UCharacterOverlay>()
{
	return UCharacterOverlay::StaticClass();
}
UCharacterOverlay::UCharacterOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterOverlay);
UCharacterOverlay::~UCharacterOverlay() {}
// End Class UCharacterOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_CharacterOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterOverlay, UCharacterOverlay::StaticClass, TEXT("UCharacterOverlay"), &Z_Registration_Info_UClass_UCharacterOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterOverlay), 2287496126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_CharacterOverlay_h_975807417(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_CharacterOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_HUD_CharacterOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
