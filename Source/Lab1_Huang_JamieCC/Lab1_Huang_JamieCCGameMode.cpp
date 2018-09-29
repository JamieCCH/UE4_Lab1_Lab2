// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Lab1_Huang_JamieCCGameMode.h"
#include "Lab1_Huang_JamieCCHUD.h"
#include "Lab1_Huang_JamieCCCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab1_Huang_JamieCCGameMode::ALab1_Huang_JamieCCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALab1_Huang_JamieCCHUD::StaticClass();
}
