// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

#include "Overlay.h"

/**
 * 
 */
class SANDBOXGAME_API SSIAiMenuHUDWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSIAiMenuHUDWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

private:

	// 获取Menu样式 
	const struct  FSIAiStyle *MenuStyle;
	// DPI 缩放系数
	TAttribute<float> UIScaler;


private:
	// 绑定 UIScaler 的函数
	float GetUIScaler() const;
	// 获取屏幕尺寸
	FVector2D GetViewportSize() const;

	TSharedPtr<class SSIAiMenuWidget> MenuWidget;
};
