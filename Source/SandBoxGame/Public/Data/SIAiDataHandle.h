// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

enum class ECultureTeam : uint8;
/**
 * 
 */
class SANDBOXGAME_API SIAiDataHandle
{
public:
	SIAiDataHandle();
	
	static void Initialize();

	static TSharedPtr<SIAiDataHandle> Get();

	void ChangeLocalizationCulture(ECultureTeam value);
private:
	// ´´½¨µ¥Àý
	static TSharedRef<SIAiDataHandle> Create();

	ECultureTeam currentCulture;

private:

	static TSharedPtr<SIAiDataHandle> DataInstance;

};
