// Fill out your copyright notice in the Description page of Project Settings.

#include "SIAiMenuController.h"

ASIAiMenuController::ASIAiMenuController()
{
	
}

void ASIAiMenuController::BeginPlay()
{
	// ��ʾ���
	bShowMouseCursor = true;

	// ����� ���� �ӿ� ��
	FInputModeUIOnly _inputMode;
	_inputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	SetInputMode(_inputMode);
}
