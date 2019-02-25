// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class SBox;
/**
 * 
 */
class SANDBOXGAME_API SSIAiMenuWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSIAiMenuWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

private:
	// ��ȡMenu��ʽ 
	const struct FSIAiStyle *MenuStyle;
	// ������ڵ��
	TSharedPtr<SBox> RootSizeBox;
};
