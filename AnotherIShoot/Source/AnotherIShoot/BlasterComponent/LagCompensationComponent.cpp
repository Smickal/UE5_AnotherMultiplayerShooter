// Fill out your copyright notice in the Description page of Project Settings.


#include "LagCompensationComponent.h"

#include "AnotherIShoot/AnotherIShoot.h"
#include "AnotherIShoot/Character/BlasterCharacter.h"
#include "AnotherIShoot/Weapon/Weapon.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

ULagCompensationComponent::ULagCompensationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}



void ULagCompensationComponent::BeginPlay()
{
	Super::BeginPlay();

	FFramePackage Package;
	SaveFramePackage(Package);
	//ShowFramePackage(Package, FColor::Purple);
}



// Called every frame
void ULagCompensationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(Character == nullptr || !Character->HasAuthority()) return;
	
	SaveFramePackage();
}

void ULagCompensationComponent::SaveFramePackage()
{
	if(FrameHistory.Num()  <= 1)
	{
		FFramePackage ThisFrame;
		SaveFramePackage(ThisFrame);
		FrameHistory.AddHead(ThisFrame);
		
	}
	else
	{
		float HistoryLength = FrameHistory.GetHead()->GetValue().Time - FrameHistory.GetTail()->GetValue().Time;
		while(HistoryLength > MaxRecordTime)
		{
			FrameHistory.RemoveNode(FrameHistory.GetTail());
			HistoryLength = FrameHistory.GetHead()->GetValue().Time - FrameHistory.GetTail()->GetValue().Time;
		}

		FFramePackage thisFrame;
		SaveFramePackage(thisFrame);
		FrameHistory.AddHead(thisFrame);

		///ShowFramePackage(thisFrame, FColor::Black);
	}
}

void ULagCompensationComponent::ShowFramePackage(const FFramePackage& Package,const FColor& Color)
{
	for(auto& BoxInfo : Package.HitBoxInfo)
	{
		DrawDebugBox(
			GetWorld(),
			BoxInfo.Value.Location,
			BoxInfo.Value.BoxExtend,
			FQuat(BoxInfo.Value.Rotation),
			Color,
			false,
			4.f
			);
	}
}


FServerSideRewindResult ULagCompensationComponent::ServerSideRewind(ABlasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart,
	const FVector_NetQuantize& HitLocation, float HitTime)
{
	FFramePackage FrameToCheck = GetFrameToCheck(HitCharacter, HitTime);
	
	return  ConfirmHit(FrameToCheck, HitCharacter, TraceStart, HitLocation);
	
}

FShotgunServerSideRewindResult ULagCompensationComponent::ShotgunServerSideRewind(
	const TArray<ABlasterCharacter*>& HitCharacters, const FVector_NetQuantize& TraceStart,
	const TArray<FVector_NetQuantize>& HitLocations, float HitTime)
{
	TArray<FFramePackage> FramesToCheck;
	for (auto HitCharacter : HitCharacters)
	{
		FramesToCheck.Add(GetFrameToCheck(HitCharacter, HitTime));
	}

	return ShotgunConfirmedHit(FramesToCheck, TraceStart, HitLocations);
}

FServerSideRewindResult ULagCompensationComponent::ProjectileServerSideRewind(ABlasterCharacter* HitCharacter,
	const FVector_NetQuantize& TraceStart, const FVector_NetQuantize100& InitialProjectileVelocity, float HitTime)
{
	FFramePackage FrameToCheck = GetFrameToCheck(HitCharacter, HitTime);
	//UE_LOG(LogTemp, Warning, TEXT("%s"),*FrameToCheck.HitBoxInfo[FName("pelvis")].Location.ToString());
	
	return  ProjectilConfirmedHit(FrameToCheck, HitCharacter, TraceStart, InitialProjectileVelocity, HitTime);
}

FServerSideRewindResult ULagCompensationComponent::ConfirmHit(const FFramePackage& Package,
	ABlasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation)
{
	if(HitCharacter == nullptr) return FServerSideRewindResult();

	FFramePackage CurrentFrame;
	CacheBoxPosition(HitCharacter, CurrentFrame);
	MoveBoxes(HitCharacter, Package);
	
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::NoCollision);
	
	//Enable Collision For the head first
	UBoxComponent* HeadBox = HitCharacter->HitCollisionBoxes[FName("head")];
	HeadBox->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	HeadBox->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
	
	FHitResult ConfirmedHitResult;
	FVector direction = HitLocation - TraceStart;
	FVector TraceEnd = TraceStart + direction * 1.25f;
	UWorld* World = GetWorld();
	if(World)
	{
		World->LineTraceSingleByChannel(
			ConfirmedHitResult,
			TraceStart,
			TraceEnd,
			ECC_HitBox
			);
		
		if(ConfirmedHitResult.bBlockingHit) //hit headshot return early
		{
			// if(ConfirmedHitResult.Component.IsValid())
			// {
			// 	UBoxComponent* Box = Cast<UBoxComponent>(ConfirmedHitResult.Component);
			// 	if(Box)
			// 	{
			// 		DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(), FQuat(Box->GetComponentRotation()), FColor::Red, false, 8.f);
			// 	}
			// }
			ResetHitBoxes(HitCharacter, CurrentFrame);
			EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::QueryAndPhysics);
			return FServerSideRewindResult{ true, true};
		}
		else //Didn't hit the head, check the rest of the boxes
		{
			for(auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
			{
				if(HitBoxPair.Value != nullptr)
				{
					HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
					HitBoxPair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
				}
			}
	
			World->LineTraceSingleByChannel(
			ConfirmedHitResult,
			TraceStart,
			TraceEnd,
			ECC_HitBox
			);
	
			if(ConfirmedHitResult.bBlockingHit)
			{
				// if(ConfirmedHitResult.Component.IsValid())
				// {
				// 	UBoxComponent* Box = Cast<UBoxComponent>(ConfirmedHitResult.Component);
				// 	if(Box)
				// 	{
				// 		DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(), FQuat(Box->GetComponentRotation()), FColor::Blue, false, 8.f);
				// 	}
				// }
				
				ResetHitBoxes(HitCharacter, CurrentFrame);
				EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::QueryAndPhysics);
				return FServerSideRewindResult{true, false};
			}
		}
	}
	
	ResetHitBoxes(HitCharacter, CurrentFrame);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::QueryAndPhysics);
	return FServerSideRewindResult{false, false};
}

FServerSideRewindResult ULagCompensationComponent::ProjectilConfirmedHit(const FFramePackage& Package, ABlasterCharacter* HitCharacter,
	const FVector_NetQuantize& TraceStart, const FVector_NetQuantize100& InitialProjectileVelocity, float HitTime)
{
	if(HitCharacter == nullptr) return FServerSideRewindResult();

	//UE_LOG(LogTemp, Warning, TEXT("Test124"));
	
	FFramePackage CurrentFrame;
	CacheBoxPosition(HitCharacter, CurrentFrame);
	MoveBoxes(HitCharacter, Package);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::NoCollision);
	
	//Enable Collision For the head first
	UBoxComponent* HeadBox = HitCharacter->HitCollisionBoxes[FName("head")];
	HeadBox->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	HeadBox->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
	
	FPredictProjectilePathParams PathParams;
	PathParams.bTraceWithCollision = true;
	PathParams.MaxSimTime = MaxRecordTime;
	PathParams.LaunchVelocity = InitialProjectileVelocity;
	PathParams.StartLocation = TraceStart;
	PathParams.SimFrequency = 15.f;
	PathParams.ProjectileRadius = 5.f;
	PathParams.TraceChannel = ECC_HitBox;
	PathParams.ActorsToIgnore.Add(GetOwner());
	
	//Debug Purposes
	PathParams.DrawDebugTime = 5.f;
	PathParams.DrawDebugType = EDrawDebugTrace::ForDuration;
	
	FPredictProjectilePathResult PathResult;
	UGameplayStatics::PredictProjectilePath(this, PathParams, PathResult);
	
	//Hits the head, return early
	if(PathResult.HitResult.bBlockingHit)
	{
		// if(PathResult.HitResult.Component.IsValid())
		// {
		// 	UBoxComponent* Box = Cast<UBoxComponent>(PathResult.HitResult.Component);
		// 	if(Box)
		// 	{
		// 		DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(),
		// 			FQuat(Box->GetComponentRotation()), FColor::Red, false, 4.f);
		// 	}
		// }
		
		ResetHitBoxes(HitCharacter, CurrentFrame);
		EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::QueryAndPhysics);
		return FServerSideRewindResult(true, true);
	}
	else // Didn't hit the head, check the rest of the boxes
	{
		for(auto& BoxPair : HitCharacter->HitCollisionBoxes)
		{
			if(BoxPair.Value != nullptr)
			{
				BoxPair.Value->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
				BoxPair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
			}
		}
	
		UGameplayStatics::PredictProjectilePath(this, PathParams, PathResult);
		
		if(PathResult.HitResult.bBlockingHit)
		{
			// if(PathResult.HitResult.Component.IsValid())
			// {
			// 	UBoxComponent* Box = Cast<UBoxComponent>(PathResult.HitResult.Component);
			// 	if(Box)
			// 	{
			// 		DrawDebugBox(GetWorld(), Box->GetComponentLocation(), Box->GetScaledBoxExtent(),
			// 			FQuat(Box->GetComponentRotation()), FColor::Red, false, 4.f);
			// 	}
			// }
		
			ResetHitBoxes(HitCharacter, CurrentFrame);
			EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::QueryAndPhysics);
			return FServerSideRewindResult(true, false);
		}
	}
	
	ResetHitBoxes(HitCharacter, CurrentFrame);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::QueryAndPhysics);
	return FServerSideRewindResult(false, false);
	
}


FShotgunServerSideRewindResult ULagCompensationComponent::ShotgunConfirmedHit(
	const TArray<FFramePackage>& FramePackages, const FVector_NetQuantize& TraceStart,
	const TArray<FVector_NetQuantize>& HitLocations)
{
	for (auto Frame : FramePackages)
	{
		if(Frame.Character == nullptr) return FShotgunServerSideRewindResult();
	}
	
	
	FShotgunServerSideRewindResult ShotgunResult;

	TArray<FFramePackage> CurrentFrames;
	for (auto Frame : FramePackages)
	{
		FFramePackage CurrentFrame;
		ABlasterCharacter* HitCharacter = Frame.Character;
		CurrentFrame.Character = HitCharacter;
		
		CacheBoxPosition(HitCharacter, CurrentFrame);
		MoveBoxes(HitCharacter, Frame);
		EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::Type::NoCollision);
		
		CurrentFrames.Add(CurrentFrame);
	}

	//Enable Collision for head
	for (auto Frame : FramePackages)
	{
		//Enable Collision For the head first
		UBoxComponent* HeadBox = Frame.Character->HitCollisionBoxes[FName("head")];
		HeadBox->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		HeadBox->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
	}

	UWorld* World = GetWorld();

	//Check for headshots
	for (auto& HitLocation : HitLocations)
	{
		FHitResult ConfirmedHitResult;
		FVector direction = HitLocation - TraceStart;
		FVector TraceEnd = TraceStart + direction * 1.25f;
		
		if(World)
		{
			World->LineTraceSingleByChannel(
			ConfirmedHitResult,
			TraceStart,
			TraceEnd,
			ECC_HitBox
			);

			
			if(ConfirmedHitResult.bBlockingHit)
			{
				ABlasterCharacter* HitCharacter = Cast<ABlasterCharacter>(ConfirmedHitResult.GetActor());	
				if(HitCharacter)
				{
					// if(ConfirmedHitResult.Component.IsValid())
					// {
					// 	UBoxComponent* Box = Cast<UBoxComponent>(ConfirmedHitResult.Component);
					// 	if(Box)
					// 	{
					// 		DrawDebugBox(
					// 			GetWorld(),
					// 			Box->GetComponentLocation(),
					// 			Box->GetScaledBoxExtent(),
					// 			FQuat(Box->GetComponentRotation()),
					// 			FColor::Red,
					// 			false,
					// 			8.f
					// 			);
					// 	}
					// }
					
					if(ShotgunResult.HeadShots.Contains(HitCharacter))
					{
						ShotgunResult.HeadShots[HitCharacter]++;
					}
					else
					{
						ShotgunResult.HeadShots.Emplace(HitCharacter, 1);
					}
				}
			}
		}
	}

	//Enable ALl boxes except Head
	for(auto& Frame : FramePackages)
	{
		for(auto& HitBoxPair : Frame.Character->HitCollisionBoxes)
		{
			HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
			HitBoxPair.Value->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
		}
		
		UBoxComponent* HeadBox = Frame.Character->HitCollisionBoxes[FName("head")];
		HeadBox->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	}

	//Check For BOdy Shots
	for (auto& HitLocation : HitLocations)
	{
		FHitResult ConfirmedHitResult;
		FVector direction = HitLocation - TraceStart;
		FVector TraceEnd = TraceStart + direction * 1.25f;
		
		if(World)
		{
			World->LineTraceSingleByChannel(
			ConfirmedHitResult,
			TraceStart,
			TraceEnd,
			ECC_Visibility
			);

			
			if(ConfirmedHitResult.bBlockingHit)
			{
				ABlasterCharacter* HitCharacter = Cast<ABlasterCharacter>(ConfirmedHitResult.GetActor());	
				if(HitCharacter)
				{
					// if(ConfirmedHitResult.Component.IsValid())
					// {
					// 	UBoxComponent* Box = Cast<UBoxComponent>(ConfirmedHitResult.Component);
					// 	if(Box)
					// 	{
					// 		DrawDebugBox(
					// 			GetWorld(),
					// 			Box->GetComponentLocation(),
					// 			Box->GetScaledBoxExtent(),
					// 			FQuat(Box->GetComponentRotation()),
					// 			FColor::Red,
					// 			false,
					// 			8.f
					// 			);
					// 	}
					// }
					
					if(ShotgunResult.BodyShots.Contains(HitCharacter))
					{
						ShotgunResult.BodyShots[HitCharacter]++;
					}
					else
					{
						ShotgunResult.BodyShots.Emplace(HitCharacter, 1);
					}
				}
			}
		}
	}
	for(auto& Frame : CurrentFrames)
	{
		ResetHitBoxes(Frame.Character, Frame);
		EnableCharacterMeshCollision(Frame.Character, ECollisionEnabled::Type::QueryAndPhysics);
	}

	return ShotgunResult;
}






FFramePackage ULagCompensationComponent::GetFrameToCheck(ABlasterCharacter* HitCharacter, float HitTime)
{
	bool bReturn =
		HitCharacter == nullptr ||
		HitCharacter->GetLapComp() == nullptr ||
		HitCharacter->GetLapComp()->FrameHistory.GetHead() == nullptr ||
		HitCharacter->GetLapComp()->FrameHistory.GetTail() == nullptr;
	if (bReturn) return FFramePackage();
	// Frame package that we check to verify a hit
	FFramePackage FrameToCheck;
	bool bShouldInterpolate = true;
	
	// Frame history of the HitCharacter
	const TDoubleLinkedList<FFramePackage>& History = HitCharacter->GetLapComp()->FrameHistory;
	const float OldestHistoryTime = History.GetTail()->GetValue().Time;
	const float NewestHistoryTime = History.GetHead()->GetValue().Time;
	if (OldestHistoryTime > HitTime)
	{
		// too far back - too laggy to do SSR
		return FFramePackage();
	}
	if (OldestHistoryTime == HitTime)
	{
		FrameToCheck = History.GetTail()->GetValue();
		bShouldInterpolate = false;
	}
	if (NewestHistoryTime <= HitTime)
	{
		FrameToCheck = History.GetHead()->GetValue();
		bShouldInterpolate = false;
	}

	TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Younger = History.GetHead();
	TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Older = Younger;
	while (Older->GetValue().Time > HitTime) // is Older still younger than HitTime?
	{
		// March back until: OlderTime < HitTime < YoungerTime
		if (Older->GetNextNode() == nullptr) break;
		Older = Older->GetNextNode();
		if (Older->GetValue().Time > HitTime)
		{
			Younger = Older;
		}
	}
	if (Older->GetValue().Time == HitTime) // highly unlikely, but we found our frame to check
	{
		FrameToCheck = Older->GetValue();
		bShouldInterpolate = false;
	}
	if (bShouldInterpolate)
	{
		// Interpolate between Younger and Older
		FrameToCheck = InterpBetweenFrames(Older->GetValue(), Younger->GetValue(), HitTime);
	}
	FrameToCheck.Character = HitCharacter;
	return FrameToCheck;
}



FFramePackage ULagCompensationComponent::InterpBetweenFrames(const FFramePackage& OlderFrame,
                                                             const FFramePackage& YoungerFrame, float HitTime)
{
	const float Distance = YoungerFrame.Time - OlderFrame.Time;
	float InterpFraction = (HitTime - OlderFrame.Time) / Distance;
	InterpFraction = FMath::Clamp(InterpFraction, 0.f, 1.f);
	
	FFramePackage InterpFramePackage;
	InterpFramePackage.Time = HitTime;

	for(auto& YoungerPair: YoungerFrame.HitBoxInfo)
	{
		const FName& BoxInfoName = YoungerPair.Key;
		const FBoxInformation& OlderBox = OlderFrame.HitBoxInfo[BoxInfoName];
		const FBoxInformation& YoungerBox = YoungerPair.Value;

		FBoxInformation InterpBoxInfo;

		InterpBoxInfo.Location = FMath::VInterpTo(OlderBox.Location, YoungerBox.Location, 1.f, InterpFraction);
		InterpBoxInfo.Rotation = FMath::RInterpTo(OlderBox.Rotation, YoungerBox.Rotation, 1.f, InterpFraction);
		InterpBoxInfo.BoxExtend = YoungerBox.BoxExtend;

		InterpFramePackage.HitBoxInfo.Add(BoxInfoName, InterpBoxInfo);

	}

	return InterpFramePackage;
}



void ULagCompensationComponent::CacheBoxPosition(ABlasterCharacter* HitCharacter, FFramePackage& OutFramePackage)
{
	if(HitCharacter == nullptr) return;

	for(auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if(HitBoxPair.Value != nullptr)
		{
			FBoxInformation BoxInformation;
			BoxInformation.Location = HitBoxPair.Value->GetComponentLocation();
			BoxInformation.Rotation = HitBoxPair.Value->GetComponentRotation();
			BoxInformation.BoxExtend = HitBoxPair.Value->GetScaledBoxExtent();

			OutFramePackage.HitBoxInfo.Add(HitBoxPair.Key, BoxInformation);
		}

		//UE_LOG(LogTemp, Warning, TEXT("CachedBoxPosLocation test-> %s" ), *OutFramePackage.HitBoxInfo[HitBoxPair.Key].Location.ToString());
	}
	
}



void ULagCompensationComponent::SaveFramePackage(FFramePackage& Package)
{
	Character = Character == nullptr ? Cast<ABlasterCharacter>(GetOwner()) : Character;
	if(Character)
	{
		Package.Time = GetWorld()->GetTimeSeconds();
		Package.Character = Character;
		
		for(auto& BoxPair : Character->HitCollisionBoxes)
		{
			FBoxInformation BoxInformation;
			BoxInformation.Location = BoxPair.Value->GetComponentLocation();
			BoxInformation.Rotation = BoxPair.Value->GetComponentRotation();
			BoxInformation.BoxExtend = BoxPair.Value->GetScaledBoxExtent();

			Package.HitBoxInfo.Add(BoxPair.Key, BoxInformation);
		}
		
	}
	
}

void ULagCompensationComponent::MoveBoxes(ABlasterCharacter* HitCharacter, const FFramePackage& Package)
{
	if(HitCharacter == nullptr ) return;

	for(auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if(HitBoxPair.Value != nullptr)
		{
			HitBoxPair.Value->SetWorldLocation(Package.HitBoxInfo[HitBoxPair.Key].Location);
			HitBoxPair.Value->SetWorldRotation(Package.HitBoxInfo[HitBoxPair.Key].Rotation);
			HitBoxPair.Value->SetBoxExtent(Package.HitBoxInfo[HitBoxPair.Key].BoxExtend);

			// UE_LOG(LogTemp, Warning, TEXT("%s"), *Package.HitBoxInfo[HitBoxPair.Key].Location.ToString());
		}
	}
	
}

void ULagCompensationComponent::ResetHitBoxes(ABlasterCharacter* HitCharacter, const FFramePackage& Package)
{
	if(HitCharacter == nullptr ) return;

	for(auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if(HitBoxPair.Value != nullptr)
		{
			HitBoxPair.Value->SetWorldLocation(Package.HitBoxInfo[HitBoxPair.Key].Location);
			HitBoxPair.Value->SetWorldRotation(Package.HitBoxInfo[HitBoxPair.Key].Rotation);
			HitBoxPair.Value->SetBoxExtent(Package.HitBoxInfo[HitBoxPair.Key].BoxExtend);

			HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
		}
	}
}

void ULagCompensationComponent::EnableCharacterMeshCollision(ABlasterCharacter* HitCharacter,
	ECollisionEnabled::Type CollisionType)
{
	if(HitCharacter && HitCharacter->GetMesh())
	{
		HitCharacter->GetMesh()->SetCollisionEnabled(CollisionType);
	}
}


void ULagCompensationComponent::Server_ScoreRequest_Implementation(ABlasterCharacter* HitCharacter,
                                                                   const FVector_NetQuantize& TraceStart,const  FVector_NetQuantize& HitLocation, float HitTime)
{
	FServerSideRewindResult Confirm = ServerSideRewind(HitCharacter, TraceStart, HitLocation, HitTime);

	if(Character && HitCharacter && Character->GetEquippedWeapon() && Confirm.bHitConfirmed)
	{
		const float Damage = Confirm.bHeadshot ? Character->GetEquippedWeapon()->GetHeadShotDamage() : Character->GetEquippedWeapon()->GetDamage();
		
		UGameplayStatics::ApplyDamage(
			HitCharacter,
			Damage,
			Character->Controller,
			Character->GetEquippedWeapon(),
			UDamageType::StaticClass());
		
	}
}

void ULagCompensationComponent::Server_ProjectileScoreRequest_Implementation(ABlasterCharacter* HitCharacter,
	const FVector_NetQuantize& TraceStart, const FVector_NetQuantize100& InitialProjectileVelocity, float HitTime)
{
	FServerSideRewindResult Confirm = ProjectileServerSideRewind(HitCharacter, TraceStart, InitialProjectileVelocity, HitTime);
	
	if(Character && HitCharacter && Confirm.bHitConfirmed && Character->GetEquippedWeapon())
	{
		const float Damage = Confirm.bHeadshot ? Character->GetEquippedWeapon()->GetHeadShotDamage() : Character->GetEquippedWeapon()->GetDamage();
		
		UGameplayStatics::ApplyDamage(
			HitCharacter,
			Damage,
			Character->Controller,
			Character->GetEquippedWeapon(),
			UDamageType::StaticClass());
	}
}


void ULagCompensationComponent::Server_ShotgunScoreRequest_Implementation(
	const TArray<ABlasterCharacter*>& HitCharacters, const FVector_NetQuantize& TraceStart,
	const TArray<FVector_NetQuantize>& HitLocations, float HitTime)
{
	FShotgunServerSideRewindResult Confirm = ShotgunServerSideRewind(HitCharacters, TraceStart, HitLocations, HitTime);

	for(auto& HitCharacter : HitCharacters)
	{
		if(HitCharacter == nullptr || HitCharacter->GetEquippedWeapon() == nullptr || Character == nullptr) continue;
		float TotalDamage = 0.f;
		if(Confirm.HeadShots.Contains(HitCharacter))
		{
			 float HeadShotDamage = Confirm.HeadShots[HitCharacter] * HitCharacter->GetEquippedWeapon()->GetHeadShotDamage();
			TotalDamage += HeadShotDamage;
		}
			
		if(Confirm.BodyShots.Contains(HitCharacter))
		{
			float BodyShotDamage  = Confirm.BodyShots[HitCharacter] * HitCharacter->GetEquippedWeapon()->GetDamage();
			TotalDamage += BodyShotDamage;
		}

		UGameplayStatics::ApplyDamage(
			HitCharacter,
			TotalDamage,
			Character->Controller,
			HitCharacter->GetEquippedWeapon(),
			UDamageType::StaticClass()
			);
	}
}