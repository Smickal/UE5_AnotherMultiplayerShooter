// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

UENUM(BlueprintType)
enum class ETeam : uint8
{
	ET_RedTeam UMETA(DisplayName = "Red Team"),
	ET_BlueTeam UMETA(DisplayName = "Blue Team"),
	ET_NoTeam UMETA(DisplayName = "No Team"),

	ET_MAX UMETA(DisplayName = "Default Max")
};