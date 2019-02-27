// Fill out your copyright notice in the Description page of Project Settings.

#include "SSIAiMenuWidget.h"
#include "SlateOptMacros.h"
#include "SBox.h"
#include "SOverlay.h"
#include "SImage.h"
#include "SIAiStyle.h"
#include "SIAiWidgetStyle.h"
#include "SBorder.h"
#include "STextBlock.h"

//#include "Internationalization.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SSIAiMenuWidget::Construct(const FArguments& InArgs)
{
	// »ñÈ¡±à¼­Æ÷µÄMenuStyle
	MenuStyle = &SIAiStyle::Get().GetWidgetStyle<FSIAiStyle>("BPSlAiMenuStyle");

	//FInternationalization::Get().SetCurrentCulture(TEXT("zh"));
	
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
			+ SOverlay::Slot()
				.HAlign(EHorizontalAlignment::HAlign_Left)
				.VAlign(EVerticalAlignment::VAlign_Center)
				.Padding(FMargin(0.f, 25.f, 0.f, 0.f))
				[
					SNew(SImage)
					.Image(&MenuStyle->LeftIconBrush)
				]
			+ SOverlay::Slot()
				.HAlign(EHorizontalAlignment::HAlign_Right)
				.VAlign(EVerticalAlignment::VAlign_Center)
				.Padding(FMargin(0.f, 25.f, 0.f, 0.f))
				[
					SNew(SImage)
					.Image(&MenuStyle->RightIconBrush)
				]
			+ SOverlay::Slot()
				.HAlign(EHorizontalAlignment::HAlign_Center)
				.VAlign(EVerticalAlignment::VAlign_Top)
				[
					SNew(SBox)
					.WidthOverride(400.f)
					.HeightOverride(100.f)
					[
						SNew(SBorder)
						.BorderImage(&MenuStyle->TitleBorderBrush)
						.HAlign(EHorizontalAlignment::HAlign_Center)
						.VAlign(EVerticalAlignment::VAlign_Center)
						[
							SAssignNew(TitleText, STextBlock)
							.Font(SIAiStyle::Get().GetFontStyle("MenuItemFont"))
							.Text(NSLOCTEXT("SIAiMenu", "Menu", "Menu"))
						]
					]
				]

		]
	];
	RootSizeBox->SetWidthOverride(500.f);
	RootSizeBox->SetHeightOverride(500.f);
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
