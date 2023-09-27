// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSCharacter.h"

// Sets default values
ARTSCharacter::ARTSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Profile.Sex = URandomCharacterFunctionLibrary::Sex();
	Profile.FirstName = URandomCharacterFunctionLibrary::FirstName(Profile.Sex);
	Profile.LastName = URandomCharacterFunctionLibrary::LastName();
	Profile.TotalYears = FMath::RandRange(18, 55);

	/* Meshes */

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MaleMeshContainer(
		TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));
	
	if (MaleMeshContainer.Succeeded())
	{
		MaleMesh = MaleMeshContainer.Object;
	}

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>FemaleMeshContainer(
		TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin_Female.SK_Mannequin_Female'"));

	if (FemaleMeshContainer.Succeeded())
	{
		FemaleMesh = FemaleMeshContainer.Object;
	}

	/* Animations */

	static ConstructorHelpers::FClassFinder<UAnimInstance> AnimContainer(
		TEXT("Class'/Game/Mannequin/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP_C'"));

	if (AnimContainer.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(AnimContainer.Class);
		//FemaleMesh = FemaleMeshContainer.Object;
	}


	SetSex(Profile.Sex);

	GetMesh()->SetRelativeLocation(FVector{ 0.0f, 0.0f, -94.0f });
	GetMesh()->SetRelativeRotation(FRotator{ 0.0f, -90.0f, 0.0f });

	/* Materials */
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> FemaleBody_MI_Container(
		TEXT("MaterialInstanceConstant'/Game/Mannequin/Character/Materials/MI_Female_Body.MI_Female_Body'"));

	if (FemaleBody_MI_Container.Succeeded())
	{
		FemaleBody_MI = FemaleBody_MI_Container.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaleBody_M_Container(
		TEXT("Material'/Game/Mannequin/Character/Materials/M_Male_Body.M_Male_Body'"));

	if (MaleBody_M_Container.Succeeded())
	{
		MaleBody_M = MaleBody_M_Container.Object;
	}

}

void ARTSCharacter::SetSex(TEnumAsByte<EESex> Sex)
{
	if (Sex == EESex::Male)
	{
		GetMesh()->SetSkeletalMesh(MaleMesh);
		CurrentMaterial = GetMesh()->CreateDynamicMaterialInstance(0, MaleBody_M);
		FLinearColor BlueColor = FLinearColor{ 0.061f, 0.107f, 0.451f, 1.0f };
		CurrentMaterial->SetVectorParameterValue(FName(TEXT("BodyColor")), BlueColor);
	}
	else {
		GetMesh()->SetSkeletalMesh(FemaleMesh);
		CurrentMaterial = GetMesh()->CreateDynamicMaterialInstance(0, FemaleBody_MI);
		FLinearColor MagentaColor = FLinearColor{ 0.461f, 0.028f, 0.266f, 1.0f };
		CurrentMaterial->SetVectorParameterValue(FName(TEXT("BodyColor")), MagentaColor);
	}
}

TEnumAsByte<EEAgeGroup> ARTSCharacter::GetAgeGroop()
{
	uint8 TotalYears = Profile.TotalYears;

	if (TotalYears < 3) {
		return EEAgeGroup::INFANT;
	}
	else if (TotalYears >= 3 && TotalYears < 7) {
		return EEAgeGroup::YANG_CHILD;
	}
	else if (TotalYears >= 7 && TotalYears < 14) {
		return EEAgeGroup::CHILD;
	}
	else if (TotalYears >= 14 && TotalYears < 22) {
		return EEAgeGroup::TEENAGER;
	}
	else if (TotalYears >= 23 && TotalYears < 35) {
		return EEAgeGroup::YANG_ADULT;
	}
	else if (TotalYears >= 35 && TotalYears < 55) {
		return EEAgeGroup::ADULT;
	}
	else if (TotalYears >= 55 && TotalYears < 75) {
		return EEAgeGroup::OLD;
	}
	else {
		return EEAgeGroup::VERY_OLD;
	}
}


FString ARTSCharacter::GetFullName()
{
	FString Result = Profile.FirstName + ' ' + Profile.LastName;
	return Result;
	
}

uint8 ARTSCharacter::GetTotalYears()
{
	return Profile.TotalYears;
}

// Called when the game starts or when spawned
void ARTSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARTSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

