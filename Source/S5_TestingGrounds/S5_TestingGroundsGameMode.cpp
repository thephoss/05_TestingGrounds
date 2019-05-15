// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "S5_TestingGroundsGameMode.h"
#include "S5_TestingGroundsHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS5_TestingGroundsGameMode::AS5_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Character/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS5_TestingGroundsHUD::StaticClass();
}
