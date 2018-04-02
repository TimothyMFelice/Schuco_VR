// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PDFLib.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTIAL_418_API UPDFLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "PDF") static void ExportPDF();
};
