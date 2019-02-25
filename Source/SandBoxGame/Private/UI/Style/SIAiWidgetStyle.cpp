// Fill out your copyright notice in the Description page of Project Settings.

#include "SIAiWidgetStyle.h"


FSIAiStyle::FSIAiStyle()
{
}

FSIAiStyle::~FSIAiStyle()
{
}

const FName FSIAiStyle::TypeName(TEXT("FSIAiStyle"));

const FSIAiStyle& FSIAiStyle::GetDefault()
{
	static FSIAiStyle Default;
	return Default;
}

void FSIAiStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them
}

