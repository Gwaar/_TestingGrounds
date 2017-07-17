// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "T_G.h"
#include "T_GGameMode.h"
#include "T_GHUD.h"
#include "T_GCharacter.h"

AT_GGameMode::AT_GGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AT_GHUD::StaticClass();
}
