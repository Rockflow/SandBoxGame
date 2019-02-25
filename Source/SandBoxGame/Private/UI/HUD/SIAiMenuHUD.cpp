// Fill out your copyright notice in the Description page of Project Settings.

#include "SIAiMenuHUD.h"
#include "Engine.h"
#include "SlateBasics.h"
#include "SSIAiMenuHUDWidget.h"

ASIAiMenuHUD::ASIAiMenuHUD()
{
	if (GEngine && GEngine->GameViewport)
	{
		SAssignNew(MenuHUDWidget, SSIAiMenuHUDWidget);
		GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MenuHUDWidget.ToSharedRef()));
	}
}
