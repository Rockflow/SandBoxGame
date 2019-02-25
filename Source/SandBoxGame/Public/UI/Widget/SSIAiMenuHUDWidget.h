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

	// ��ȡMenu��ʽ 
	const struct  FSIAiStyle *MenuStyle;
	// DPI ����ϵ��
	TAttribute<float> UIScaler;


private:
	// �� UIScaler �ĺ���
	float GetUIScaler() const;
	// ��ȡ��Ļ�ߴ�
	FVector2D GetViewportSize() const;

	TSharedPtr<class SSIAiMenuWidget> MenuWidget;
};
