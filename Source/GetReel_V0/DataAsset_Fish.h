#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Structs.h"
#include "DataAsset_Fish.generated.h"

UCLASS()
class GETREEL_V0_API UDataAsset_Fish : public UPrimaryDataAsset
{
public:
	GENERATED_BODY()

    // The ID of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int AssetID;
	
	// The name of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssetName;

	// Points needed to catch the fish
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 CatchPoints;

	// The value of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AssetValue;

	// The static mesh of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USkeletalMesh* AssetMesh;

	// The Animation for the mesh
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimationAsset* AssetAnimation;

	// modifier for fish display size
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AssetSizeMod;

	// The image of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* AssetImage;

	// The description of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssetDescription;

	// The size of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssetSize;

	// The rarity of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<ERarity> AssetRarity;
};
