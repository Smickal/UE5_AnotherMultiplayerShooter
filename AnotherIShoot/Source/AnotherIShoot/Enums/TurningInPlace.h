// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

UENUM(BlueprintType)
enum class ETurningInPlace : uint8
{
	ETP_Left UMETA(DisplayName = "Turning Left"),
	ETP_Right UMETA(DisplayName = "Turning Right"),
	ETP_NotTurning UMETA(DisplayName = "Not Turning"),
	
	ETIP_Max UMETA(DisplayName = "Default_Max")
};
