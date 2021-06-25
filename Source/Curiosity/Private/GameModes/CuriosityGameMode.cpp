// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameModes/CuriosityGameMode.h"
#include "UI/CuriosityHUD.h"
#include "Actors/CuriosityCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACuriosityGameMode::ACuriosityGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACuriosityHUD::StaticClass();
}
