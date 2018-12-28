// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"
#include "Components/SphereComponent.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = SphereComponent;	
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	FString str = FString::Printf(TEXT("%d %f"), 10, -1.0f);

	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *str);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

