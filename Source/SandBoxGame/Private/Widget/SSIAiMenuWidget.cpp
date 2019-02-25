// Fill out your copyright notice in the Description page of Project Settings.

#include "SSIAiMenuWidget.h"
#include "SlateOptMacros.h"
#include "SBox.h"
#include "SOverlay.h"
#include "SImage.h"
#include "SIAiStyle.h"
#include "SIAiWidgetStyle.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SSIAiMenuWidget::Construct(const FArguments& InArgs)
{
	// »ñÈ¡±à¼­Æ÷µÄMenuStyle
	MenuStyle = &SIAiStyle::Get().GetWidgetStyle<FSIAiStyle>("BPSlAiMenuStyle");

	
	ChildSlot
	[
		SAssignNew(RootSizeBox, SBox)
		[
			SNew(SOverlay)

			+ SOverlay::Slot()
			.HAlign(EHorizontalAlignment::HAlign_Fill)
			.VAlign(EVerticalAlignment::VAlign_Fill)
			[
				SNew(SImage)
				.Image(&MenuStyle->MenuBackgroundBrush)
			]
			+SOverlay::Slot()
			.HAlign(EHorizontalAlignment::HAlign_Left)
			.VAlign(EVerticalAlignment::VAlign_Center)
			[
				SNew(SImage)
				.Image(&MenuStyle->LeftIconBrush)
			]
			+ SOverlay::Slot()
			.HAlign(EHorizontalAlignment::HAlign_Right)
			.VAlign(EVerticalAlignment::VAlign_Center)
			[
				SNew(SImage)
				.Image(&MenuStyle->RightIconBrush)
			]
		]
	];
	RootSizeBox->SetWidthOverride(500.f);
	RootSizeBox->SetHeightOverride(600.f);
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
