// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HostLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UHostLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (keywords = "Host Game"))
		static void HostGame(FString MapName);
	
};
