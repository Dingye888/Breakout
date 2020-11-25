// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyCodeNode.generated.h"

/**
 * 
 */
UCLASS()
class BREAKOUT_API UMyCodeNode : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		static float SquareNumber(const float In);
	
};
