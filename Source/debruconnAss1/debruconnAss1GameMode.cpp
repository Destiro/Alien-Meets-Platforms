// Copyright Epic Games, Inc. All Rights Reserved.

#include "debruconnAss1GameMode.h"
#include "debruconnAss1Character.h"
#include "UObject/ConstructorHelpers.h"

AdebruconnAss1GameMode::AdebruconnAss1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
