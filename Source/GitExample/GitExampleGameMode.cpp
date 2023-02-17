// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitExampleGameMode.h"
#include "GitExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitExampleGameMode::AGitExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
