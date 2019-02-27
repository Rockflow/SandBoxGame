// Fill out your copyright notice in the Description page of Project Settings.

#include "SIAiStyle.h"
#include "SlateBasics.h"
#include "Slate/SlateGameResources.h"

TSharedPtr<FSlateStyleSet> SIAiStyle::SIAiStyleInstance = NULL;

void SIAiStyle::Initialze()
{
	if (!SIAiStyleInstance.IsValid())
	{
		SIAiStyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*SIAiStyleInstance);
	}
}

FName SIAiStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SIAiStyle"));
	return StyleSetName;
}

void SIAiStyle::ShutDown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*SIAiStyleInstance);
	ensure(SIAiStyleInstance.IsUnique());
	SIAiStyleInstance.Reset();
}

const ISlateStyle & SIAiStyle::Get()
{
	// TODO: 在此处插入 return 语句
	return *SIAiStyleInstance;
}

TSharedRef<class FSlateStyleSet> SIAiStyle::Create()
{
	TSharedRef<FSlateStyleSet> StyleRef = FSlateGameResources::New(SIAiStyle::GetStyleSetName(), "/Game/UI/Style", "/Game/UI/Style");
	StyleRef->Set("MenuItemFont", FSlateFontInfo("Roboto-Regular.ttf", 50));
	return StyleRef;
}

