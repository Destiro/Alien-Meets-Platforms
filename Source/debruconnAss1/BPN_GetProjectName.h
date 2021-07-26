// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPN_GetProjectName.generated.h"

/**
 * 
 */
UCLASS()
class DEBRUCONNASS1_API UBPN_GetProjectName : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Project Name", CompactNodeTitle = "ProjectName"), Category = "System Information")
		static FString GetProjectName();
};
