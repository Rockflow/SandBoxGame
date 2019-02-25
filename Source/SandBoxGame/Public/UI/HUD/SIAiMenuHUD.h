// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SIAiMenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOXGAME_API ASIAiMenuHUD : public AHUD
{
	GENERATED_BODY()

	ASIAiMenuHUD();
	
	TSharedPtr<class SSIAiMenuHUDWidget> MenuHUDWidget;
};
