// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstDemoGameMode.h"
#include "FirstDemoHUD.h"
#include "FirstDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstDemoGameMode::AFirstDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstDemoHUD::StaticClass();
}
