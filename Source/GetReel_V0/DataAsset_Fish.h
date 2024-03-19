// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_Fish.generated.h"

UCLASS()
class GETREEL_V0_API UDataAsset_Fish : public UPrimaryDataAsset
{
public:
	
	GENERATED_BODY()

	// The name of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssetName;

	// The value of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AssetValue;

	// The static mesh of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* AssetMesh;

	// The Image of the asset
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* AssetImage;
};
