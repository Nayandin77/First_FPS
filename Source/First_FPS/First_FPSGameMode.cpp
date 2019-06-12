// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "First_FPSGameMode.h"
#include "First_FPSHUD.h"
#include "First_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_FPSGameMode::AFirst_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirst_FPSHUD::StaticClass();
}
