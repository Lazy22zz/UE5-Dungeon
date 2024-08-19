// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"

#include "Engine/World.h"

#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	FRotator GrabberRotation = GetComponentRotation();

	FString string_GrabberRotation = GrabberRotation.ToCompactString();

	UE_LOG(LogTemp, Display, TEXT("Grabber Rotation: %s"), *string_GrabberRotation);

	UWorld* MyWorld = GetWorld();
	float output_time_elapsed = MyWorld -> TimeSeconds; 
	UE_LOG(LogTemp, Display, TEXT("Time_Elapsed : %f"), output_time_elapsed);

	FVector start = GetComponentLocation();
	FVector end = GetForwardVector() * GrabDistance;

	DrawDebugLine(MyWorld, start, end, FColor::Red);

	FHitResult HitResult;
	bool does_it_hit = GetWorld() -> SweepSingleByChannel(
		HitResult,
		start, end,
		FQuat::Identity,
		ECC_GameTraceChannel2,
		Sphere
	);


	 
}

