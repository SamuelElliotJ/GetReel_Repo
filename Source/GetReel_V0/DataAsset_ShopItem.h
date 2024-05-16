// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Structs.h"
#include "DataAsset_ShopItem.generated.h"

// Data Asset Class For Shop Items

UCLASS()
class GETREEL_V0_API UDataAsset_ShopItem : public UPrimaryDataAsset
{
public:	
	GENERATED_BODY()
	// Item ID
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 ItemID;

	// Item Type
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EItemType> ItemType;

	// Item Name
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName ItemName;

	// Item Image
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* ItemImage;

	// Item Mesh ()
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* ItemMesh;

	// Item Description
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ItemDescription;

	// Item Cost
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ItemCost;
};
