// Fill out your copyright notice in the Description page of Project Settings.

#include "SSIAiMenuHUDWidget.h"
#include "SlateOptMacros.h"
#include "SButton.h"
#include "SImage.h"
#include "SIAiStyle.h"
#include "SIAiWidgetStyle.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SSIAiMenuHUDWidget::Construct(const FArguments& InArgs)
{
	// »ñÈ¡±à¼­Æ÷µÄMenuStyle
	MenuStyle = &SIAiStyle::Get().GetWidgetStyle<FSIAiStyle>("BPSlAiMenuStyle");

	ChildSlot
	[
		SNew(SImage)
		.Image(&MenuStyle->MenuHUDBackgroundBrush)
	];
	
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
