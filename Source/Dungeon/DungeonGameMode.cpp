// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonGameMode.h"
#include "DungeonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonGameMode::ADungeonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
