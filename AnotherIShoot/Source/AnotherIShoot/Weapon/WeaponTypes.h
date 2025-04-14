// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#define Trace_Length 80000.f

#define CUSTOMDEPTH_PURPLE 250
#define CUSTOMDEPTH_BLUE 251
#define CUSTOMDEPTH_TAN 252


UENUM(BlueprintType)
enum class EWeaponType: uint8
{	
	EWT_AssaultRifle UMETA(DisplayName = "Assault Rifle"),
	EWT_RocketLauncher UMETA(DisplayName = "Rocket Launcher"),
	EWT_Pistol UMETA(DisplayName = "Pistol"),
	EWT_SubMachineGun UMETA(DisplayName = "SubMachine Gun"),
	EWT_ShotGun UMETA(DisplayName = "Shotgun"),
	EWT_SniperRifle UMETA(DisplayName = "SniperRifle"),
	EWT_GrenadeLauncher UMETA(DisplayName = "Grenade Launcher"),
	EWT_Flag UMETA(DisplayName = "Flag"),
	

	
	EWT_MAX UMETA(DisplayName = "DEFAULT_MAX")
	
};
