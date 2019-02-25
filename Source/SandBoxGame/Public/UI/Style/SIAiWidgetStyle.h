// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "SlateWidgetStyleContainerBase.h"
#include "SlateBrush.h"

#include "SIAiWidgetStyle.generated.h"

/**
 * 
 */
USTRUCT()
struct SANDBOXGAME_API FSIAiStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

	FSIAiStyle();
	virtual ~FSIAiStyle();

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FSIAiStyle& GetDefault();

	UPROPERTY(EditAnywhere, Category = "MenuHUD")
	FSlateBrush MenuHUDBackgroundBrush;

	UPROPERTY(EditAnywhere, Category = "Menu")
	FSlateBrush MenuBackgroundBrush;
	/*
	* Menu左图标的Brush
	*/
	UPROPERTY(EditAnywhere, Category = "Menu")
	FSlateBrush LeftIconBrush;
	/*
	* Menu右图标的Brush
	*/
	UPROPERTY(EditAnywhere, Category = "Menu")
	FSlateBrush RightIconBrush;
	/*
	* Menu标题Border的Brush
	*/
	UPROPERTY(EditAnywhere, Category = "Menu")
	FSlateBrush TitleBorderBrush;
};

/**
 */
UCLASS(hidecategories=Object, MinimalAPI)
class USIAiWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category=Appearance, EditAnywhere, meta=(ShowOnlyInnerProperties))
	FSIAiStyle WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast< const struct FSlateWidgetStyle* >( &WidgetStyle );
	}
};
