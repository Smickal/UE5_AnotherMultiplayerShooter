// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherIShoot/Weapon/Projectile.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile() {}

// Begin Cross Module References
ANOTHERISHOOT_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectile();
ANOTHERISHOOT_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnotherIShoot();
// End Cross Module References

// Begin Class AProjectile Function OnDestroyTimerFinished
struct Z_Construct_UFunction_AProjectile_OnDestroyTimerFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_OnDestroyTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, nullptr, "OnDestroyTimerFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnDestroyTimerFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectile_OnDestroyTimerFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AProjectile_OnDestroyTimerFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_OnDestroyTimerFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectile::execOnDestroyTimerFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDestroyTimerFinished();
	P_NATIVE_END;
}
// End Class AProjectile Function OnDestroyTimerFinished

// Begin Class AProjectile Function OnHit
struct Z_Construct_UFunction_AProjectile_OnHit_Statics
{
	struct Projectile_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectile_OnHit_Statics::Projectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectile_OnHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectile_OnHit_Statics::Projectile_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectile_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectile::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class AProjectile Function OnHit

// Begin Class AProjectile Function Server_PlayParticleAndSound
struct Projectile_eventServer_PlayParticleAndSound_Parms
{
	ABlasterCharacter* Character;
};
static const FName NAME_AProjectile_Server_PlayParticleAndSound = FName(TEXT("Server_PlayParticleAndSound"));
void AProjectile::Server_PlayParticleAndSound(ABlasterCharacter* Character)
{
	Projectile_eventServer_PlayParticleAndSound_Parms Parms;
	Parms.Character=Character;
	UFunction* Func = FindFunctionChecked(NAME_AProjectile_Server_PlayParticleAndSound);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventServer_PlayParticleAndSound_Parms, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, nullptr, "Server_PlayParticleAndSound", nullptr, nullptr, Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::PropPointers), sizeof(Projectile_eventServer_PlayParticleAndSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Projectile_eventServer_PlayParticleAndSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectile::execServer_PlayParticleAndSound)
{
	P_GET_OBJECT(ABlasterCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PlayParticleAndSound_Implementation(Z_Param_Character);
	P_NATIVE_END;
}
// End Class AProjectile Function Server_PlayParticleAndSound

// Begin Class AProjectile
void AProjectile::StaticRegisterNativesAProjectile()
{
	UClass* Class = AProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDestroyTimerFinished", &AProjectile::execOnDestroyTimerFinished },
		{ "OnHit", &AProjectile::execOnHit },
		{ "Server_PlayParticleAndSound", &AProjectile::execServer_PlayParticleAndSound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectile);
UClass* Z_Construct_UClass_AProjectile_NoRegister()
{
	return AProjectile::StaticClass();
}
struct Z_Construct_UClass_AProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Projectile.h" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHitPlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSystem_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInnerRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageOuterRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracer_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodSpurtParticles_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodSound_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyTime_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Weapon/Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnHitPlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailSystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageInnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageOuterRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TracerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodSpurtParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectile_OnDestroyTimerFinished, "OnDestroyTimerFinished" }, // 4059681178
		{ &Z_Construct_UFunction_AProjectile_OnHit, "OnHit" }, // 2164558299
		{ &Z_Construct_UFunction_AProjectile_Server_PlayParticleAndSound, "Server_PlayParticleAndSound" }, // 190086735
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_OnHitPlayerCharacter = { "OnHitPlayerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, OnHitPlayerCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitPlayerCharacter_MetaData), NewProp_OnHitPlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystem = { "TrailSystem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, TrailSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSystem_MetaData), NewProp_TrailSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystemComponent = { "TrailSystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, TrailSystemComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSystemComponent_MetaData), NewProp_TrailSystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_DamageInnerRadius = { "DamageInnerRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, DamageInnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInnerRadius_MetaData), NewProp_DamageInnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_DamageOuterRadius = { "DamageOuterRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, DamageOuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageOuterRadius_MetaData), NewProp_DamageOuterRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_Tracer = { "Tracer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, Tracer), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracer_MetaData), NewProp_Tracer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_TracerComponent = { "TracerComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, TracerComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracerComponent_MetaData), NewProp_TracerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactParticles_MetaData), NewProp_ImpactParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_BloodSpurtParticles = { "BloodSpurtParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, BloodSpurtParticles), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodSpurtParticles_MetaData), NewProp_BloodSpurtParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_BloodSound = { "BloodSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, BloodSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodSound_MetaData), NewProp_BloodSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_DestroyTime = { "DestroyTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, DestroyTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyTime_MetaData), NewProp_DestroyTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, InitialSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSpeed_MetaData), NewProp_InitialSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_OnHitPlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_DamageInnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_DamageOuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_Tracer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_TracerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_BloodSpurtParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_BloodSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_DestroyTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_InitialSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnotherIShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Statics::ClassParams = {
	&AProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectile()
{
	if (!Z_Registration_Info_UClass_AProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectile.OuterSingleton, Z_Construct_UClass_AProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectile.OuterSingleton;
}
template<> ANOTHERISHOOT_API UClass* StaticClass<AProjectile>()
{
	return AProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
AProjectile::~AProjectile() {}
// End Class AProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile, AProjectile::StaticClass, TEXT("AProjectile"), &Z_Registration_Info_UClass_AProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile), 1807682915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_4199435570(TEXT("/Script/AnotherIShoot"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Third_Person_Shooter_UE5_AnotherMultiplayerShooter_AnotherIShoot_Source_AnotherIShoot_Weapon_Projectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
