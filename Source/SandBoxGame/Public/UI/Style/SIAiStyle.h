// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class SANDBOXGAME_API SIAiStyle
{
public:

	static void Initialze();

	static FName GetStyleSetName();

	static void ShutDown();

	static const class ISlateStyle& Get();

private:

	static TSharedRef<class FSlateStyleSet> Create();

	static TSharedPtr<class FSlateStyleSet> SIAiStyleInstance;
};
