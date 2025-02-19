// Copyright Epic Games, Inc. All Rights Reserved.

#include "SourShooterGameMode.h"
#include "SourShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASourShooterGameMode::ASourShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
