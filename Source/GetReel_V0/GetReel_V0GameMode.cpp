// Copyright Epic Games, Inc. All Rights Reserved.

#include "GetReel_V0GameMode.h"
#include "GetReel_V0PlayerController.h"
#include "GetReel_V0Character.h"
#include "UObject/ConstructorHelpers.h"

AGetReel_V0GameMode::AGetReel_V0GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGetReel_V0PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_Human_Character"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}