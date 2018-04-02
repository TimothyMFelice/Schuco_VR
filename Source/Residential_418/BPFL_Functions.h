// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Runtime/LevelSequence/Public/LevelSequence.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"

#include "BPFL_Functions.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTIAL_418_API UBPFL_Functions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "LevelSequence") static FMovieSceneObjectBindingID GetBindingID(ULevelSequence* inSequence, FText inObjectDisplayName);
};
