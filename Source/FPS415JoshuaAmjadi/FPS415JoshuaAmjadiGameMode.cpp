// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS415JoshuaAmjadiGameMode.h"
#include "FPS415JoshuaAmjadiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS415JoshuaAmjadiGameMode::AFPS415JoshuaAmjadiGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
