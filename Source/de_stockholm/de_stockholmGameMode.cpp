// Copyright Epic Games, Inc. All Rights Reserved.

#include "de_stockholmGameMode.h"
#include "de_stockholmCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ade_stockholmGameMode::Ade_stockholmGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
