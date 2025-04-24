// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "AnotherIShoot/AnotherIShoot.h"
#include "AnotherIShoot/BlasterComponent/BuffComponent.h"
#include "AnotherIShoot/BlasterComponent/CombatComponent.h"
#include "AnotherIShoot/BlasterComponent/LagCompensationComponent.h"
#include "AnotherIShoot/Gamemode/BlasterGameMode.h"
#include "AnotherIShoot/GameState/BlasterGameState.h"
#include "AnotherIShoot/HUD/OverheadWidget.h"
#include "AnotherIShoot/PickUps/RespawnablePickup.h"
#include "AnotherIShoot/PlayerController/BlasterPlayerController.h"
#include "AnotherIShoot/PlayerStart/TeamPlayerStart.h"
#include "AnotherIShoot/PlayerState/BlasterPlayerState.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"


// Sets default values
ABlasterCharacter::ABlasterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CameraBoom + Camera
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	CameraBoom->SetupAttachment(GetMesh());
	CameraBoom->TargetArmLength = 600.f;
	CameraBoom->bUsePawnControlRotation = true;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Main Camera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;	

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	//HUD
	OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Overhead Widget"));
	OverheadWidget->SetupAttachment(RootComponent);

	//Combat Component
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
	CombatComp->SetIsReplicated(true);

	//Crouch enable
	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	GetMesh()->SetCollisionObjectType(ECC_SkeletalMesh);

	TurningInPlace = ETurningInPlace::ETP_NotTurning;
	SetNetUpdateFrequency(66.f);
	SetMinNetUpdateFrequency(33.f);
	GetCharacterMovement()->RotationRate = FRotator(0.f,0.f, 850.f);

	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	DissolveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DissolveTimelineComponent"));

	AttachedGrenade = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AttackGrenade"));
	AttachedGrenade->SetupAttachment(GetMesh(), FName("GrenadeSocket"));
	AttachedGrenade->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	
	BuffComp = CreateDefaultSubobject<UBuffComponent>(TEXT("Buff Component"));
	BuffComp->SetIsReplicated(true);

	LagCompensation = CreateDefaultSubobject<ULagCompensationComponent>(TEXT("Lag Compensation Component"));
	
	//HitBoxes for server side rewind
	head_box = CreateDefaultSubobject<UBoxComponent>(TEXT("Head_BoxComp"));
	head_box->SetupAttachment(GetMesh(), FName("head"));
	HitCollisionBoxes.Add(FName("head"), head_box);

	pelvis_box = CreateDefaultSubobject<UBoxComponent>(TEXT("Pelvis_BoxComp"));
	pelvis_box->SetupAttachment(GetMesh(), FName("pelvis"));
	HitCollisionBoxes.Add(FName("pelvis"), pelvis_box);
	
	spine_02_box = CreateDefaultSubobject<UBoxComponent>(TEXT("Spine02_BoxComp"));
	spine_02_box->SetupAttachment(GetMesh(), FName("spine_02"));
	HitCollisionBoxes.Add(FName("spine_02"), spine_02_box);
	
	spine_03_box = CreateDefaultSubobject<UBoxComponent>(TEXT("Spine03_BoxComp"));
	spine_03_box->SetupAttachment(GetMesh(), FName("spine_03"));
	HitCollisionBoxes.Add(FName("spine_03"), spine_03_box);
	
	upperarm_l_box = CreateDefaultSubobject<UBoxComponent>(TEXT("UpperArmL_BoxComp"));
	upperarm_l_box->SetupAttachment(GetMesh(), FName("upperarm_l"));
	HitCollisionBoxes.Add(FName("upperarm_l"), upperarm_l_box);
	
	upperarm_r_box = CreateDefaultSubobject<UBoxComponent>(TEXT("UpperArmR_BoxComp"));
	upperarm_r_box->SetupAttachment(GetMesh(), FName("upperarm_r"));
	HitCollisionBoxes.Add(FName("upperarm_r"), upperarm_r_box);

	lowerarm_l_box = CreateDefaultSubobject<UBoxComponent>(TEXT("LowerArmL_BoxComp"));
	lowerarm_l_box->SetupAttachment(GetMesh(), FName("lowerarm_l"));
	HitCollisionBoxes.Add(FName("lowerarm_l"), lowerarm_l_box);

	lowerarm_r_box = CreateDefaultSubobject<UBoxComponent>(TEXT("LowerArmr_BoxComp"));
	lowerarm_r_box->SetupAttachment(GetMesh(), FName("lowerarm_r"));
	HitCollisionBoxes.Add(FName("lowerarm_r"), lowerarm_r_box);
	
	hand_l_box = CreateDefaultSubobject<UBoxComponent>(TEXT("HandL_BoxComp"));
	hand_l_box->SetupAttachment(GetMesh(), FName("hand_l"));
	HitCollisionBoxes.Add(FName("hand_l"), hand_l_box);

	hand_r_box = CreateDefaultSubobject<UBoxComponent>(TEXT("HandR_BoxComp"));
	hand_r_box->SetupAttachment(GetMesh(), FName("hand_r"));
	HitCollisionBoxes.Add(FName("hand_r"), hand_r_box);

	backpack_box = CreateDefaultSubobject<UBoxComponent>(TEXT("BackPack_BoxComp"));
	backpack_box->SetupAttachment(GetMesh(), FName("backpack"));
	HitCollisionBoxes.Add(FName("backpack"), backpack_box);

	backpackBlanket_box = CreateDefaultSubobject<UBoxComponent>(TEXT("BackPackBlanket_BoxComp"));
	backpackBlanket_box->SetupAttachment(GetMesh(), FName("backpack"));
	HitCollisionBoxes.Add(FName("backpack"), backpackBlanket_box);

	thigh_l_box = CreateDefaultSubobject<UBoxComponent>(TEXT("ThighL_BoxComp"));
	thigh_l_box->SetupAttachment(GetMesh(), FName("thigh_l"));
	HitCollisionBoxes.Add(FName("thigh_l"), thigh_l_box);

	thigh_r_box = CreateDefaultSubobject<UBoxComponent>(TEXT("ThighR_BoxComp"));
	thigh_r_box->SetupAttachment(GetMesh(), FName("thigh_r"));
	HitCollisionBoxes.Add(FName("thigh_r"), thigh_r_box);

	calf_l_box = CreateDefaultSubobject<UBoxComponent>(TEXT("CalfL_BoxComp"));
	calf_l_box->SetupAttachment(GetMesh(), FName("calf_l"));
	HitCollisionBoxes.Add(FName("calf_l"), calf_l_box);
	
	calf_r_box = CreateDefaultSubobject<UBoxComponent>(TEXT("CalfR_BoxComp"));
	calf_r_box->SetupAttachment(GetMesh(), FName("calf_r"));
	HitCollisionBoxes.Add(FName("calf_r"), calf_r_box);
	
	foot_l_box = CreateDefaultSubobject<UBoxComponent>(TEXT("FootL_BoxComp"));
	foot_l_box->SetupAttachment(GetMesh(), FName("foot_l"));
	HitCollisionBoxes.Add(FName("foot_l"), foot_l_box);
	
	foot_r_box = CreateDefaultSubobject<UBoxComponent>(TEXT("FootR_BoxComp"));
	foot_r_box->SetupAttachment(GetMesh(), FName("foot_r"));
	HitCollisionBoxes.Add(FName("foot_r"), foot_r_box);

	for(auto Box : HitCollisionBoxes)
	{
		Box.Value->SetCollisionObjectType(ECC_HitBox);
		Box.Value->SetCollisionResponseToAllChannels(ECR_Ignore);
		Box.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
		Box.Value->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	}
}

void ABlasterCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ABlasterCharacter, OverlappingWeapon, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ABlasterCharacter, OverlappingPickup, COND_OwnerOnly);
	DOREPLIFETIME(ABlasterCharacter, CurrentHealth);
	DOREPLIFETIME(ABlasterCharacter, CurrentShield);
	DOREPLIFETIME(ABlasterCharacter, bDisableGameplay);
}

void ABlasterCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// if(APlayerController* PlayerController = Cast<APlayerController>(Controller))
	// {
	// 	if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
	// 	{
	// 		Subsystem->AddMappingContext(BlasterMappingContext, 0);
	// 	}
	// }
}


// Called to bind functionality to input
void ABlasterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Changed to use enhance Input Component + InitialiE in Blueprint BP_BlasterCharacter
	
	//PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ThisClass::MoveForward);
	//PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ThisClass::MoveRight);
	//PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ThisClass::Turn);
	//PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ThisClass::LookUp);

	//PlayerInputComponent->BindAction(TEXT("Jump"),IE_Pressed,this, &ABlasterCharacter::Jump );
	//layerInputComponent->BindAction(TEXT("Equip"),IE_Pressed,this, &ABlasterCharacter::EquipButtonPressed);
	//PlayerInputComponent->BindAction(TEXT("Crouch"), IE_Pressed, this, &ABlasterCharacter::CrouchButtonPressed);
	//PlayerInputComponent->BindAction(TEXT("Aim"), IE_Pressed, this, &ABlasterCharacter::AimButtonPressed);
	//PlayerInputComponent->BindAction(TEXT("Aim"), IE_Released, this, &ABlasterCharacter::AimButtonReleased);
	//PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ABlasterCharacter::FireButtonPressed);
	//PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &ABlasterCharacter::FireButtonReleased);
	//PlayerInputComponent->BindAction(TEXT("Reload"), IE_Pressed, this, &ABlasterCharacter::ReloadButtonPressed);
	//PlayerInputComponent->BindAction(TEXT("ThrowGrenade"), IE_Pressed, this, &ABlasterCharacter::GrenadeButtonPressed);
	
}

void ABlasterCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if(CombatComp)
	{
		CombatComp->PlayerCharacter = this;
		CombatComp->PrimaryComponentTick.bCanEverTick = true;
	}

	if(BuffComp)
	{
		BuffComp->Character = this;
		BuffComp->SetInitialSpeed(GetCharacterMovement()->MaxWalkSpeed, GetCharacterMovement()->MaxWalkSpeedCrouched);
		BuffComp->SetInitialJumpVelocity(GetCharacterMovement()->JumpZVelocity);
	}

	if(LagCompensation)
	{
		LagCompensation->Character = this;
		if(Controller)
		{
			LagCompensation->PlayerController = Cast<ABlasterPlayerController>(Controller);
		}
	}
}



// Called when the game starts or when spawned
void ABlasterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	
	UpdateHUDHealth();
	UpdateHUDShield();
	UpdateHUDAmmo();
	
	if(HasAuthority())
	{
		OnTakeAnyDamage.AddDynamic(this, &ABlasterCharacter::ABlasterCharacter::ReceiveDamage);
	}

	if(AttachedGrenade)
	{
		AttachedGrenade->SetVisibility(false);
	}
	
	SpawnDefaultWeapon();

	PollInit();
}




// Called every frame
void ABlasterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	HideCharacterIfCameraClose();
	RotateInPlace(DeltaTime);
	
	//initialize score data fo player
	PollInit();
	
}

void ABlasterCharacter::RotateInPlace(float DeltaTime)
{
	if(CombatComp && CombatComp->bIsCarryingAFlag)
	{
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		TurningInPlace = ETurningInPlace::ETP_NotTurning;
		
		return;
	}

	if(CombatComp && CombatComp->EquippedWeapon)
	{
		GetCharacterMovement()->bOrientRotationToMovement = false;
		bUseControllerRotationYaw = true;
	}
	
	if(bDisableGameplay)
	{
		bUseControllerRotationYaw = false;
		TurningInPlace = ETurningInPlace::ETP_NotTurning;

		return;
	}
	
	if(GetLocalRole() > ROLE_SimulatedProxy && IsLocallyControlled())
	{
		AimOffset(DeltaTime);
	}
	else
	{
		TimeSinceLastMovementReplicated += DeltaTime;
		if(TimeSinceLastMovementReplicated > 0.25f)
		{
			OnRep_ReplicatedMovement();
		}
		CalculateAO_Pitch();
	}
}

void ABlasterCharacter::UpdateHUDHealth()
{
	BlasterPlayerController = BlasterPlayerController == nullptr ? Cast<ABlasterPlayerController>(Controller) : BlasterPlayerController;
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetHUDHealth(CurrentHealth, MaxHealth);
		
	}
}

void ABlasterCharacter::UpdateHUDShield()
{
	BlasterPlayerController = BlasterPlayerController == nullptr ? Cast<ABlasterPlayerController>(Controller) : BlasterPlayerController;
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetHUDShield(CurrentShield, MaxShield);
		
	}
}

void ABlasterCharacter::UpdateHUDAmmo()
{
	BlasterPlayerController = BlasterPlayerController == nullptr ? Cast<ABlasterPlayerController>(Controller) : BlasterPlayerController;
	if(BlasterPlayerController && CombatComp && CombatComp->EquippedWeapon)
	{
		BlasterPlayerController->SetHUDCarriedAmmo(CombatComp->CarriedAmmo);
		BlasterPlayerController->SetHUDWeaponAmmo(CombatComp->EquippedWeapon->GetCurrentAmmo());
		BlasterPlayerController->SetHUDWeaponType(CombatComp->EquippedWeapon->WeaponName, CombatComp->EquippedWeapon->GetWeaponTexture());
		
	}
}

void ABlasterCharacter::UpdateHUDTeam(ETeam TeamToSet)
{
	BlasterPlayerController = BlasterPlayerController == nullptr ?  Cast<ABlasterPlayerController>(Controller) : BlasterPlayerController;
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetHUDTeam(TeamToSet);
	}
}

void ABlasterCharacter::SpawnDefaultWeapon()
{
	BlasterGameMode = BlasterGameMode == nullptr ? Cast<ABlasterGameMode>(UGameplayStatics::GetGameMode(this)) : BlasterGameMode;
	UWorld* World = GetWorld();
	if(BlasterGameMode && World && !bEliminated && DefaultWeaponClass)
	{
		AWeapon* StartingWeapon = World->SpawnActor<AWeapon>(DefaultWeaponClass);
		if(CombatComp)
		{
			CombatComp->EquipWeapon(StartingWeapon);
		}
		
	}
	
}

void ABlasterCharacter::Multicast_GainedTheLead_Implementation()
{
	if(CrownSystem == nullptr) return;

	if(CrownComponent == nullptr)
	{
		CrownComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
			CrownSystem,
			GetMesh(),
			FName(),
			GetActorLocation() + FVector(0.f, 0.f, 110.f),
			GetActorRotation(),
			EAttachLocation::Type::KeepWorldPosition,
			false
			);
	}
	
	if(CrownComponent)
	{
		CrownComponent->Activate();
	}
}

void ABlasterCharacter::Multicast_LostTheLead_Implementation()
{
	if(CrownComponent)
	{
		CrownComponent->DestroyComponent();
		CrownComponent = nullptr;
	}
}



void ABlasterCharacter::OnRep_ReplicatedMovement()
{
	Super::OnRep_ReplicatedMovement();

	SimProxiesTurn();
	TimeSinceLastMovementReplicated = 0;
}



void ABlasterCharacter::OnRep_CurrentHealth(float LastHealth)
{
	UpdateHUDHealth();

	if(GetCurrentHealth() < LastHealth)
	{
		PlayHitReactMontage();
	}
}


void ABlasterCharacter::OnRep_CurrentShield(float LastShield)
{
	UpdateHUDShield();

	if(CurrentShield < LastShield)
	{
		PlayHitReactMontage();
	}
}



void ABlasterCharacter::Elim(bool bPlayerLeftGame)
{
	if(CombatComp && CombatComp->EquippedWeapon)
	{
		GetEquippedWeapon()->Dropped();
	}

	if(CombatComp && CombatComp->SecondaryWeapon)
	{
		GetSecondaryWeapon()->Dropped();
	}

	if(CombatComp && CombatComp->bIsCarryingAFlag)
	{
		GetFlag()->Dropped();
	}
	
	
	Multicast_Elim(bPlayerLeftGame);

}

void ABlasterCharacter::Multicast_Elim_Implementation(bool bPlayerLeftGame)
{
	bLeftGame = bPlayerLeftGame;
	if(BlasterPlayerController)
	{
		BlasterPlayerController->SetHUDWeaponAmmo(0);
	}
	
	bEliminated = true;
	PlayElimmedMontage();

	//Start the dissolve material Effect!
	if(DissolvedMaterialInstance)
	{
		DynamicMaterialDissolveInstance = UMaterialInstanceDynamic::Create(DissolvedMaterialInstance, this);
		GetMesh()->SetMaterial(0, DynamicMaterialDissolveInstance);

		DynamicMaterialDissolveInstance->SetScalarParameterValue(TEXT("Dissolve"), -1.f);
		DynamicMaterialDissolveInstance->SetScalarParameterValue(TEXT("GlowAmount"), 200.f);
	}
	StartDissolve();

	//Disable Character Movement
	GetCharacterMovement()->DisableMovement();
	GetCharacterMovement()->StopMovementImmediately();

	//Disables movement/action
	bDisableGameplay = true;

	//Disable fire
	if(CombatComp)
	{
		CombatComp->FireButtonPressed(false);
	}
	
	//Disable Collision
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);

	//Spawn ElimBot
	if(ElimBotEffect)
	{
		FVector ElimBotSpawnPoint(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 200.f);
		ElimBotComponent =  UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ElimBotEffect, ElimBotSpawnPoint, GetActorRotation());

		if(ElimBotSound)
		{
			UGameplayStatics::SpawnSoundAtLocation(this, ElimBotSound, GetActorLocation());
		}
	}

	if(IsLocallyControlled() && CombatComp &&
		CombatComp->bIsAiming && CombatComp->EquippedWeapon
		&& CombatComp->EquippedWeapon->GetWeaponType() == EWeaponType::EWT_SniperRifle)
	{
		ShowSniperScopeWidget(false);
	}

	if(CrownComponent)
	{
		CrownComponent->DestroyComponent();
	}

	if(AttachedGrenade)
	{
		AttachedGrenade->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	
	GetWorldTimerManager().SetTimer(ElimTimer, this, &ABlasterCharacter::OnElimTimerFinished, ElimDelay);
}

void ABlasterCharacter::OnElimTimerFinished()
{
	BlasterGameMode =  BlasterGameMode == nullptr ? GetWorld()->GetAuthGameMode<ABlasterGameMode>() : BlasterGameMode;
	if(BlasterGameMode && !bLeftGame)
	{
		BlasterGameMode->RequestRespawn(this, Controller);
	}

	if(bLeftGame && IsLocallyControlled())
	{
		OnLeftGame.Broadcast();
	}
	
}

void ABlasterCharacter::Server_LeaveGame_Implementation()
{
	BlasterGameMode =  BlasterGameMode == nullptr ? GetWorld()->GetAuthGameMode<ABlasterGameMode>() : BlasterGameMode;
	PlayerState = PlayerState == nullptr ? GetPlayerState<ABlasterPlayerState>() : PlayerState;
	if(BlasterGameMode && PlayerState)
	{
		BlasterGameMode->PlayerLeftGame(PlayerState);
	}
}

void ABlasterCharacter::Destroyed()
{
	if(ElimBotComponent)
	{
		ElimBotComponent->DestroyComponent();
	}
	
	BlasterGameMode =  BlasterGameMode == nullptr ? GetWorld()->GetAuthGameMode<ABlasterGameMode>() : BlasterGameMode;
	bool bMatchIsInProgress = BlasterGameMode && BlasterGameMode->GetMatchState() != MatchState::InProgress;
	
	if(CombatComp && CombatComp->EquippedWeapon && bMatchIsInProgress)
	{
		CombatComp->EquippedWeapon->Destroy();
	}

	if(CombatComp)
	{
		CombatComp->ResetGrenadeCarried();
	}
	
	Super::Destroyed();
}



void ABlasterCharacter::MoveForward(float Value)
{
	if(bDisableGameplay) return;
	
	if(Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector ControllerDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		AddMovementInput(ControllerDirection, Value);
	}
}

void ABlasterCharacter::MoveRight(float Value)
{
	if(bDisableGameplay) return;
	if(Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector ControllerDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(ControllerDirection, Value);
	}
}

void ABlasterCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void ABlasterCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void ABlasterCharacter::CalculateAO_Pitch()
{
	AO_Pitch = GetBaseAimRotation().Pitch;
	if(AO_Pitch > 90.f && !IsLocallyControlled())
	{
		//Map The Value from [270, 360) to [-90, 90)
		FVector2d InRange(270.f, 360.f);
		FVector2d OutRange(-90.f, 0.f);

		AO_Pitch = FMath::GetMappedRangeValueClamped(InRange, OutRange, AO_Pitch);
	}
}

void ABlasterCharacter::AimOffset(float DeltaTime)
{
	if(CombatComp && CombatComp->EquippedWeapon == nullptr) return;
	
	//Set Speed
	FVector Velocity = GetVelocity();
	Velocity.Z = 0.f;
	float Speed = Velocity.Size();

	bool bIsInAir = GetCharacterMovement()->IsFalling();
	
	
	if(Speed == 0.f && !bIsInAir)  //Standing Still and NOT Jumping
	{
		bRotateRootBone = true;
		
		FRotator CurrentAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		FRotator DeltaAimRotation = UKismetMathLibrary::NormalizedDeltaRotator(CurrentAimRotation, StartingAimRotation);
		AO_Yaw = DeltaAimRotation.Yaw;
		if(TurningInPlace == ETurningInPlace::ETP_NotTurning)
		{
			InterpAO_Yaw = AO_Yaw;
		}
		bUseControllerRotationYaw = true;

		TurnInPlace(DeltaTime);
	}

	if(Speed > 0.f || bIsInAir)//RUnning Or Jumping
	{
		bRotateRootBone = false;
		
		bUseControllerRotationYaw = true;
		
		StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		AO_Yaw = 0.f;
		TurningInPlace = ETurningInPlace::ETP_NotTurning;
	}

	CalculateAO_Pitch();
	
}

void ABlasterCharacter::SimProxiesTurn()
{
	if(CombatComp == nullptr && CombatComp->EquippedWeapon == nullptr) return;

	FVector Velocity = GetVelocity();
	Velocity.Z = 0.f;
	float Speed = Velocity.Size();

	if(Speed >0.f)
	{
		TurningInPlace = ETurningInPlace::ETP_NotTurning;
		bRotateRootBone = false;
		return;
	}
	
	bRotateRootBone = false;	
	ProxiesRotationLastFrame = ProxiesRotationCurrentFrame;
	ProxiesRotationCurrentFrame = GetActorRotation();
	proxy_Yaw = UKismetMathLibrary::NormalizedDeltaRotator(ProxiesRotationCurrentFrame, ProxiesRotationLastFrame).Yaw;

	if(FMath::Abs(proxy_Yaw) > TurnTreshold)
	{
		if(proxy_Yaw > TurnTreshold)
		{
			TurningInPlace = ETurningInPlace::ETP_Right;
		}
		else if(proxy_Yaw < - TurnTreshold)
		{
			TurningInPlace = ETurningInPlace::ETP_Left;
		}
		else
		{
			TurningInPlace = ETurningInPlace::ETP_NotTurning;
		}
		return;
	}

	TurningInPlace = ETurningInPlace::ETP_NotTurning;
	
}

void ABlasterCharacter::GrenadeButtonPressed()
{
	if(CombatComp && CombatComp->bIsCarryingAFlag) return;
	if(CombatComp)
	{
		CombatComp->ThrowGrenade();
	}
}

void ABlasterCharacter::Jump()
{
	if(bDisableGameplay) return;
	if(CombatComp && CombatComp->bIsCarryingAFlag) return;
	if(bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Super::Jump();
	}
}



void ABlasterCharacter::PollInit()
{
	
	if(PlayerState == nullptr)
	{
		PlayerState = GetPlayerState<ABlasterPlayerState>();
		if(PlayerState)
		{
			OnPlayerStateInitialized();
			
			ABlasterGameState* BlasterGameState = Cast<ABlasterGameState>( UGameplayStatics::GetGameState(this));
			if(BlasterGameState && BlasterGameState->TopScoringPlayer.Contains(PlayerState))
			{
				Multicast_GainedTheLead();
			}
		}

	}
	
}

void ABlasterCharacter::ActivateOverheadWidget()
{
	UOverheadWidget* Overhead = Cast<UOverheadWidget>( OverheadWidget->GetUserWidgetObject());
	if(Overhead)
	{
		Overhead->ShowPlayerName(this);
	}
}

void ABlasterCharacter::OnPlayerStateInitialized()
{
	PlayerState->AddToDefeats("" ,0);
	PlayerState->AddToScore(0);
			
	SetTeamColor(PlayerState->GetTeam());

	UpdateHUDHealth();
	UpdateHUDShield();
	UpdateHUDAmmo();
	UpdateHUDTeam(PlayerState->GetTeam());
	
	SetSpawnPoint();
	
	BlasterPlayerController = BlasterPlayerController == nullptr ? Cast<ABlasterPlayerController>(Controller) : BlasterPlayerController;
	if(BlasterPlayerController)
	{
		BlasterPlayerController->ShowPlayerOverHead();
	}
}

void ABlasterCharacter::SetSpawnPoint()
{
	if(HasAuthority() == false) return;

	if(PlayerState->GetTeam() != ETeam::ET_NoTeam)
	{
		//Get All PLayer start Loc
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, ATeamPlayerStart::StaticClass(), PlayerStarts);

		//Reduce them to exact Team as player!
		TArray<ATeamPlayerStart*> TeamPlayerStarts;
		for(auto Start : PlayerStarts)
		{
			ATeamPlayerStart* currTeamStart = Cast<ATeamPlayerStart>(Start);
			if(currTeamStart && currTeamStart->Team == PlayerState->GetTeam())
			{
				TeamPlayerStarts.Add(currTeamStart);
			}
		}

		//Set Team RandomLoc
		if(TeamPlayerStarts.Num() > 0)
		{
			ATeamPlayerStart* ChosenPlayerStart = TeamPlayerStarts[FMath::RandRange(0, TeamPlayerStarts.Num() - 1)];
			if(ChosenPlayerStart)
			{
				FHitResult* OutSweepHitResult = nullptr;
				SetActorLocationAndRotation(
					ChosenPlayerStart->GetActorLocation(),
					ChosenPlayerStart->GetActorRotation(),
					true,
					OutSweepHitResult
					);
				// if(OutSweepHitResult &&  OutSweepHitResult->bBlockingHit)
				// {
				// 	UE_LOG(LogTemp, Warning, TEXT("Spawn Loc Hit With Something!"));
				// }
			}
		}
		
	}
}



void ABlasterCharacter::TurnInPlace(float DeltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("AO_YAW %f"), AO_Yaw);
	if(AO_Yaw > 90.f)
	{
		TurningInPlace = ETurningInPlace::ETP_Right;
	}
	else if (AO_Yaw < -90.f)
	{
		TurningInPlace = ETurningInPlace::ETP_Left;
	}

	if(TurningInPlace != ETurningInPlace::ETP_NotTurning)
	{
		InterpAO_Yaw = FMath::FInterpTo(InterpAO_Yaw, 0.f, DeltaTime, 4.f);
		AO_Yaw = InterpAO_Yaw;

		if(FMath::Abs(AO_Yaw) < 15.f)
		{
			TurningInPlace = ETurningInPlace::ETP_NotTurning;
			StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		}
	}
}


void ABlasterCharacter::EquipButtonPressed()
{
	if(bDisableGameplay) return;
	if(CombatComp)
	{
		if(CombatComp->bIsCarryingAFlag) return;
		
		if(CombatComp->CombatState == ECombatState::ECS_Unoccupied) Server_EquipButtonPressed();
		bool bSwap =
			CombatComp->ShouldSwapWeapon() &&
				!HasAuthority() &&
					CombatComp->CombatState == ECombatState::ECS_Unoccupied &&
						OverlappingWeapon == nullptr;
		if(bSwap)
		{
			PlaySwapWeaponMontage();

			
			bFinishedSwapping = false;
			CombatComp->CombatState = ECombatState::ECS_SwappingWeapon;
		}
	}
}

void ABlasterCharacter::Server_EquipButtonPressed_Implementation()
{
	if(CombatComp)
	{
		if(OverlappingWeapon)
		{
			CombatComp->EquipWeapon(OverlappingWeapon);
		}
		else if(CombatComp->ShouldSwapWeapon())
		{
			CombatComp->SwapWeapon();
		}
	}
}

void ABlasterCharacter::CrouchButtonPressed()
{
	if(bDisableGameplay) return;
	if(CombatComp && CombatComp->bIsCarryingAFlag) return;
	if(bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Crouch();
	}
}

void ABlasterCharacter::AimButtonPressed()
{
	if(bDisableGameplay) return;
	if(CombatComp && CombatComp->bIsCarryingAFlag) return;
	if(CombatComp) CombatComp->SetAiming(true);
}

void ABlasterCharacter::AimButtonReleased()
{
	if(bDisableGameplay) return;
	if(CombatComp && CombatComp->bIsCarryingAFlag) return;
	if(CombatComp) CombatComp->SetAiming(false);
	
}

void ABlasterCharacter::FireButtonPressed()
{
	if(bDisableGameplay) return;
	if(CombatComp && CombatComp->bIsCarryingAFlag) return;
	if(CombatComp)
	{
		CombatComp->FireButtonPressed(true);
	}
}

void ABlasterCharacter::FireButtonReleased()
{
	if(bDisableGameplay) return;
	if(CombatComp && CombatComp->bIsCarryingAFlag) return;
	if(CombatComp)
	{
		CombatComp->FireButtonPressed(false);
	}
}

void ABlasterCharacter::ReloadButtonPressed()
{
	if(bDisableGameplay) return;
	if(CombatComp && CombatComp->bIsCarryingAFlag) return;
	if(CombatComp)
	{
		CombatComp->Reload();
	}
}


void ABlasterCharacter::SetOverlappingWeapon(AWeapon* Weapon)
{
	if(OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickUpWidget(false);
	}
	
	OverlappingWeapon = Weapon;
	if(IsLocallyControlled())
	{
		if(OverlappingWeapon)
		{
			OverlappingWeapon->ShowPickUpWidget(true);
		}
	}
}

void ABlasterCharacter::SetOverlappingPickupItem(ARespawnablePickup* RespawnablePickup, bool bIsWeapon)
{
	if(bIsWeapon)
	{
		if(OverlappingPickup)
		{
			OverlappingPickup->SetRadialVisibility(false);
		}

		OverlappingPickup = RespawnablePickup;
		if(IsLocallyControlled() && OverlappingPickup)
		{
			OverlappingPickup->SetRadialVisibility(true);
		}
	}
}


void ABlasterCharacter::OnRep_OverlappingWeapon(AWeapon* LastWeapon)
{
	if(OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickUpWidget(true);
	}

	if(LastWeapon != nullptr)
	{
		LastWeapon->ShowPickUpWidget(false);
	}
}

void ABlasterCharacter::OnRep_OverlappingRespawnablePickUp(ARespawnablePickup* Pickup)
{
	if(OverlappingPickup)
	{
		OverlappingPickup->SetRadialVisibility(true);
	}

	if(Pickup != nullptr)
	{
		Pickup->SetRadialVisibility(false);
	}
}


void ABlasterCharacter::HideCharacterIfCameraClose()
{
	if(!IsLocallyControlled()) return;
	if(FVector::Distance(Camera->GetComponentLocation(),GetActorLocation()) < CameraThreshold)
	{
		GetMesh()->SetVisibility(false);
		if(CombatComp && CombatComp->EquippedWeapon && CombatComp->EquippedWeapon->GetWeaponMesh())
		{
			CombatComp->EquippedWeapon->GetWeaponMesh()->bOwnerNoSee = true;
		}

		if(CombatComp && CombatComp->SecondaryWeapon && CombatComp->SecondaryWeapon->GetWeaponMesh())
		{
			CombatComp->SecondaryWeapon->GetWeaponMesh()->bOwnerNoSee = true;
		}
	}
	else
	{
		GetMesh()->SetVisibility(true);
		if(CombatComp && CombatComp->EquippedWeapon && CombatComp->EquippedWeapon->GetWeaponMesh())
		{
			CombatComp->EquippedWeapon->GetWeaponMesh()->bOwnerNoSee = false;
		}

		if(CombatComp && CombatComp->SecondaryWeapon && CombatComp->SecondaryWeapon->GetWeaponMesh())
		{
			CombatComp->SecondaryWeapon->GetWeaponMesh()->bOwnerNoSee = false;
		}
	}
}


bool ABlasterCharacter::IsWeaponEquipped()
{
	return (CombatComp && CombatComp->EquippedWeapon);
}

bool ABlasterCharacter::IsAiming()
{
	return(CombatComp && CombatComp->bIsAiming);
}

void ABlasterCharacter::PlayFireMontage(bool bAiming)
{
	if(CombatComp == nullptr || CombatComp->EquippedWeapon == nullptr) return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	
	if(AnimInstance && FireRifleHipMontage)
	{
		if(bAiming)
		{
			AnimInstance->Montage_Play(FireRifleAimMontage);
		}
		else
		{
			AnimInstance->Montage_Play(FireRifleHipMontage);
			
		}
		
		
	}
}

void ABlasterCharacter::PlayReloadMontage()
{
	if(CombatComp == nullptr || CombatComp->EquippedWeapon == nullptr) return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

	if(AnimInstance && ReloadMontage)
	{
		AnimInstance->Montage_Play(ReloadMontage);
		FName SectionName;
		switch (GetEquippedWeapon()->GetWeaponType())
		{
		case EWeaponType::EWT_AssaultRifle:
			SectionName = FName("Rifle");
			break;

		case EWeaponType::EWT_RocketLauncher:
			SectionName = FName("RocketLauncher");
			break;
		case EWeaponType::EWT_Pistol:
			SectionName = FName("Pistol");
			break;
		
		case EWeaponType::EWT_SubMachineGun:
			SectionName = FName("Pistol");
			break;
		case EWeaponType::EWT_ShotGun:
			SectionName = FName("Shotgun");
			break;
		case EWeaponType::EWT_SniperRifle:
			SectionName = FName("Sniper");
			break;
		case EWeaponType::EWT_GrenadeLauncher:
			SectionName = FName("Rifle");
			break;


			
		case EWeaponType::EWT_MAX:
			break;
		default:
			SectionName = FName("Rifle");
			break;
		
		}
		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

void ABlasterCharacter::PlayHitReactMontage()
{
	if(CombatComp == nullptr || CombatComp->EquippedWeapon == nullptr) return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	
	if(AnimInstance && HitReactMontage)
	{
		AnimInstance->Montage_Play(HitReactMontage);
		FName SectionName("FromFront");
		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

void ABlasterCharacter::PlayElimmedMontage()
{
	if(CombatComp == nullptr || CombatComp->EquippedWeapon == nullptr) return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	
	if(AnimInstance && ElimmedMontage)
	{
		AnimInstance->Montage_Play(ElimmedMontage);
	}
}

void ABlasterCharacter::PlayThrowGrenadeMontage()
{
	if(CombatComp == nullptr || CombatComp->EquippedWeapon == nullptr) return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	
	if(AnimInstance && ThrowGrenadeMontage)
	{
		AnimInstance->Montage_Play(ThrowGrenadeMontage);
	}
}

void ABlasterCharacter::PlaySwapWeaponMontage()
{
	if(CombatComp == nullptr || CombatComp->EquippedWeapon == nullptr) return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	
	if(AnimInstance && SwapWeaponMontage)
	{
		AnimInstance->Montage_Play(SwapWeaponMontage);
	}
}


ECombatState ABlasterCharacter::GetCombatState() const
{
	if(CombatComp == nullptr) return ECombatState::ECS_MAX;

	return CombatComp->CombatState;
}

FVector ABlasterCharacter::GetHitTarget() const
{
	if(CombatComp == nullptr) return FVector();
	return CombatComp->HitTarget;
}

AWeapon* ABlasterCharacter::GetEquippedWeapon()
{
	if(CombatComp == nullptr) return nullptr;
	return CombatComp->EquippedWeapon;
}



AWeapon* ABlasterCharacter::GetSecondaryWeapon()
{
	if(CombatComp == nullptr) return nullptr;
	return CombatComp->SecondaryWeapon;
}

AWeapon* ABlasterCharacter::GetFlag()
{
	if(CombatComp == nullptr || CombatComp->Flag == nullptr) return nullptr;
	return CombatComp->Flag;
}

void ABlasterCharacter::StartDissolve()
{
	DissolveTrack.BindDynamic(this, &ABlasterCharacter::UpdateDissolveMaterial);
	if(DissolveCurve && DissolveTimeline)
	{
		DissolveTimeline->AddInterpFloat(DissolveCurve, DissolveTrack);
		DissolveTimeline->Play();
	}
}

void ABlasterCharacter::UpdateDissolveMaterial(float DissolveValue)
{
	if(DynamicMaterialDissolveInstance)
	{
		DynamicMaterialDissolveInstance->SetScalarParameterValue(TEXT("Dissolve"), DissolveValue);
	}
}


void ABlasterCharacter::SetTeamColor(ETeam Team)
{
	if(GetMesh() == nullptr || OriginalMaterial ==  nullptr) return;
	
	
	switch (Team)
	{
		case ETeam::ET_RedTeam:
			GetMesh()->SetMaterial(0, RedMaterial);
			DissolvedMaterialInstance = RedDissolveMatInst;
			break;
		case ETeam::ET_BlueTeam:
			GetMesh()->SetMaterial(0, BlueMaterial);
			DissolvedMaterialInstance = BlueDissolveMatInst;
			break;
		case ETeam::ET_NoTeam:
			GetMesh()->SetMaterial(0, OriginalMaterial);
			DissolvedMaterialInstance = OriginalMaterial;
			break;
		case ETeam::ET_MAX:
			break;
	}


}

void ABlasterCharacter::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
                                      AController* InstigatorController, AActor* DamageCauser)
{
	BlasterGameMode =  BlasterGameMode == nullptr ? GetWorld()->GetAuthGameMode<ABlasterGameMode>() : BlasterGameMode;
	if(bEliminated || BlasterGameMode == nullptr) return;

	Damage = BlasterGameMode->CalculateDamage(InstigatorController, Controller, Damage);
	
	float DamageToHealth = Damage;
	if(CurrentShield > 0)
	{
		if(CurrentShield >= Damage)
		{
			CurrentShield = FMath::Clamp(CurrentShield - Damage, 0, MaxShield);
			DamageToHealth = 0.f;
		}
		else
		{
			DamageToHealth = FMath::Clamp(DamageToHealth - CurrentShield, 0, Damage);
			CurrentShield = 0.f;
		}
	}
	
	CurrentHealth = FMath::Clamp(CurrentHealth - DamageToHealth, 0.f, MaxHealth);
	
	
	UpdateHUDHealth();
	UpdateHUDShield();
	if(Damage != 0.f)
	{
		PlayHitReactMontage();
	}
	

	if(CurrentHealth == 0.f && BlasterGameMode)
	{
		BlasterPlayerController = BlasterPlayerController == nullptr ? Cast<ABlasterPlayerController>(Controller) : BlasterPlayerController;
		ABlasterPlayerController* AttackerController = Cast<ABlasterPlayerController>(InstigatorController);
		BlasterGameMode->PlayerEliminated(this, BlasterPlayerController, AttackerController);
	}
}



bool ABlasterCharacter::IsLocallyReloading()
{
	if(CombatComp == nullptr ) return false;
	return CombatComp->bIsLocallyReloading;
}


bool ABlasterCharacter::IsHoldingAFlag() const
{
	if(CombatComp == nullptr) return false;
	return CombatComp->bIsCarryingAFlag;
}



ETeam ABlasterCharacter::GetTeam()
{
	if(GetPlayerState<ABlasterPlayerState>() )
	{
		return GetPlayerState<ABlasterPlayerState>()->GetTeam();
	}

	return ETeam::ET_NoTeam;
}

void ABlasterCharacter::SetHoldingTheFlag(bool bHolding)
{
	if(CombatComp == nullptr) return;
	CombatComp->bIsCarryingAFlag = bHolding;

}

