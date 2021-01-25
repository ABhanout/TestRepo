// Fill out your copyright notice in the Description page of Project Settings.


#include "HostLibrary.h"

void UHostLibrary::HostGame(FString MapName)
{
	FString SMapDirectory = MapName;
	const TCHAR* MapDirectory = *SMapDirectory;

	FPlatformProcess::CreateProc(MapDirectory, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);
}
