// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
//#include "PaperSprite.h"
#include "PickUpAssets.generated.h"



/**
 * 
 */
UCLASS()
class FT_RELOADINGANDAMMO_API UPickUpAssets : public UPrimaryDataAsset
{
	GENERATED_BODY()

	FString ItemName;

	int Quantity;

	//UPaperSprite* Icon;

	UPickUpAssets();
};


