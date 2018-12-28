// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> m_sphere(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	UStaticMeshComponent* mMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMeshComponent"));
	mMesh->SetStaticMesh(m_sphere.Object);
	RootComponent = mMesh;

	static ConstructorHelpers::FObjectFinder<UMaterial>	m_mat(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"));
	mMesh->SetMaterial(0, m_mat.Object);
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

