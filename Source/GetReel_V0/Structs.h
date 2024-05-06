#pragma once
#include "CoreMinimal.h"
#include "Structs.generated.h"

UENUM(BlueprintType)
enum ERarity
{
	RCommon UMETA(DisplayName="Common"),
	RUncommon UMETA(DisplayName="Uncommon"),
	RRare UMETA(DisplayName="Rare"),
	REpic UMETA(DisplayName="Epic"),
	RLegendary UMETA(DisplayName="Legendary")
};

UENUM(BlueprintType)
enum EItemType
{
	RStackable UMETA(DisplayName="Stackable"),
	RNStackable UMETA(DisplayName="NON-Stackable")
};
