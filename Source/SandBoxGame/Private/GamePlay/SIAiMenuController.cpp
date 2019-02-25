// Fill out your copyright notice in the Description page of Project Settings.

#include "SIAiMenuController.h"

ASIAiMenuController::ASIAiMenuController()
{
	
}

void ASIAiMenuController::BeginPlay()
{
	// 显示鼠标
	bShowMouseCursor = true;

	// 将鼠标 锁在 视口 内
	FInputModeUIOnly _inputMode;
	_inputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	SetInputMode(_inputMode);
}
