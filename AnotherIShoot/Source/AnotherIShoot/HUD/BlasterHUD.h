// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BlasterHUD.generated.h"

class ABlasterPlayerState;
class UElimmedAnnoucement;

USTRUCT(BlueprintType)
struct FHUDPackage
{
	GENERATED_BODY()

public:
	UTexture2D* CrosshairCenter;
	UTexture2D* CrosshairLeft;
	UTexture2D* CrosshairRight;
	UTexture2D* CrosshairTop;
	UTexture2D* CrosshairBottom;

	float CrosshairSpread;
	FLinearColor CrosshairColor;
};

UCLASS()
class ANOTHERISHOOT_API ABlasterHUD : public AHUD
{
	GENERATED_BODY()

public:
	//Will be CAlled everyframe
	virtual void DrawHUD() override;

	UPROPERTY(EditAnywhere, Category = "Player Stat")
	TSubclassOf<class  UUserWidget> CharacterOverlayClass;


	UPROPERTY(EditAnywhere, Category = "Announcements")
	TSubclassOf<class  UUserWidget> AnnouncementOverlayClass;
	
	void AddCharacterOverlay();
	void AddAnnoucement();
	void AddElimAnnouncement(ABlasterPlayerState* AttackerPState, ABlasterPlayerState* VictimPState);
	
protected:
	virtual void BeginPlay() override;

	
private:
	FHUDPackage HUDPackage;
	
	UPROPERTY(EditAnywhere)
	float CrosshairSpreadMax = 16.f;

	void DrawCrosshair(UTexture2D* Texture, FVector2d ViewportCenter, FVector2d Spread, FLinearColor CrosshairColor);

	UPROPERTY(EditAnywhere)
	TSubclassOf<UElimmedAnnoucement> ElimAnnouncementClass;

	UPROPERTY()
	APlayerController* OwningPlayer;

	UPROPERTY(EditAnywhere)
	float ElimAnnouncementTime = 1.5f;

	UFUNCTION()
	void ElimAnnouncementTimerFinished(UElimmedAnnoucement* MsgToRemove);

	UPROPERTY()
	TArray<UElimmedAnnoucement*> ElimmedMessages;
public:
	FORCEINLINE void SetHUDPackage(const FHUDPackage& Package) {HUDPackage = Package;}

	UPROPERTY()
	class UCharacterOverlay* CharacterOverlay;

	UPROPERTY()
	class UAnnouncement* Annoucement;
};
