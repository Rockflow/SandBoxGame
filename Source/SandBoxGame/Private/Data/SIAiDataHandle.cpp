// Fill out your copyright notice in the Description page of Project Settings.

#include "SIAiDataHandle.h"
#include "SIAiTypes.h"

TSharedPtr<SIAiDataHandle> SIAiDataHandle::DataInstance = NULL;

SIAiDataHandle::SIAiDataHandle()
{
}

void SIAiDataHandle::Initialize()
{
	if (!DataInstance.IsValid())
	{
		DataInstance = SIAiDataHandle::Create();
	}
}

TSharedPtr<SIAiDataHandle> SIAiDataHandle::Get()
{
	return DataInstance;
}

void SIAiDataHandle::ChangeLocalizationCulture(ECultureTeam value)
{
	switch (value)
	{
		case ECultureTeam::EN:
			FInternationalization::Get().SetCurrentCulture(TEXT("en"));
			break;
		case ECultureTeam::ZH:
			FInternationalization::Get().SetCurrentCulture(TEXT("zh"));
			break;
	}
	currentCulture = value;
}

TSharedRef<SIAiDataHandle> SIAiDataHandle::Create()
{
	TSharedRef<SIAiDataHandle> DataRef = MakeShareable(new SIAiDataHandle());
	return DataRef;
}

