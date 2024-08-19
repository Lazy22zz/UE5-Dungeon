// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActorComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UNewActorComponent::UNewActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UNewActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Owner = GetOwner();

	FVector location = Owner -> GetActorLocation();

	FString output = location.ToCompactString();

	UE_LOG(LogTemp, Display, TEXT("Mover location : %s" ), *output );

	UE_LOG(LogTemp, Display, TEXT("Mover actual position is : %u"), Owner);



	

		
}

