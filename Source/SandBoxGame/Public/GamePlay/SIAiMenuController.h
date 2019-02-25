// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SIAiMenuController.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOXGAME_API ASIAiMenuController : public APlayerController
{
	GENERATED_BODY()


	ASIAiMenuController();
	
protected:

	virtual void BeginPlay() override;
};
