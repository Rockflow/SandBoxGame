// Fill out your copyright notice in the Description page of Project Settings.

#include "SSIAiMenuHUDWidget.h"
#include "SlateOptMacros.h"
#include "SButton.h"
#include "SImage.h"
#include "SIAiStyle.h"
#include "SIAiWidgetStyle.h"
#include "SDPIScaler.h"
#include "Engine.h"
#include "SSIAiMenuWidget.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SSIAiMenuHUDWidget::Construct(const FArguments& InArgs)
{
	// 获取编辑器的MenuStyle
	MenuStyle = &SIAiStyle::Get().GetWidgetStyle<FSIAiStyle>("BPSlAiMenuStyle");
	// 绑定缩放规则方法
	UIScaler.Bind(this, &SSIAiMenuHUDWidget::GetUIScaler); // 不明白这个绑定


	ChildSlot
		[
			SNew(SDPIScaler)
			.DPIScale(UIScaler)
			[
				SNew(SOverlay)
				+ SOverlay::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				[
					SNew(SImage)
					.Image(&MenuStyle->MenuHUDBackgroundBrush)
				]

				+ SOverlay::Slot()
				.HAlign(EHorizontalAlignment::HAlign_Center)
				.VAlign(EVerticalAlignment::VAlign_Center)
				[
					SAssignNew(MenuWidget, SSIAiMenuWidget)
				]

			]
		];
	
}
float SSIAiMenuHUDWidget::GetUIScaler() const
{
	return GetViewportSize().Y / 1080.f;
}
FVector2D SSIAiMenuHUDWidget::GetViewportSize() const
{
	FVector2D Result(1920, 1080);
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(Result);
	}
	return Result;
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
