#pragma once
#include "CoreMinimal.h"
#include "Structs.generated.h"

UENUM()
enum EMyEnum
{
	RCommon UMETA(DisplayName="Common"),
	RUncommon UMETA(DispayName="Uncommon")
};
