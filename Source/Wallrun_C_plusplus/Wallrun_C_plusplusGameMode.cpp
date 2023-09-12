// Copyright Epic Games, Inc. All Rights Reserved.

#include "Wallrun_C_plusplusGameMode.h"
#include "Wallrun_C_plusplusHUD.h"
#include "Wallrun_C_plusplusCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWallrun_C_plusplusGameMode::AWallrun_C_plusplusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWallrun_C_plusplusHUD::StaticClass();
}
