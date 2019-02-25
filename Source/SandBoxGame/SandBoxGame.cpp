// Fill out your copyright notice in the Description page of Project Settings.

#include "SandBoxGame.h"
#include "Modules/ModuleManager.h"
#include "SIAiStyle.h"
#include "SlateBasics.h"

IMPLEMENT_PRIMARY_GAME_MODULE(FSIAiSandboxModule, SandBoxGame, "SandBoxGame" );

void FSIAiSandboxModule::StartupModule()
{
	// ��ʼ����ʽ
	UE_LOG(LogTemp,Warning,TEXT("��ʼ����ʽ"))
	FSlateStyleRegistry::UnRegisterSlateStyle(SIAiStyle::GetStyleSetName());
	SIAiStyle::Initialze();
}

void FSIAiSandboxModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("������ʽ"))
	SIAiStyle::ShutDown();
}
