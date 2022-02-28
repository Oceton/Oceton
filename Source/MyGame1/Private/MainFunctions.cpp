// Fill out your copyright notice in the Description page of Project Settings.


#include "MainFunctions.h"
#include "GenericPlatform/GenericPlatformProcess.h"

void UMainFunctions::launchServer(const FString& MapAddress, const FString& Attributes)
{
	FString resultAttributes = MapAddress + " " + Attributes + " -log";

	FString url = FPaths::ProjectDir() + "Binaries/Win64/MyGame1Server.exe";

	FPlatformProcess::CreateProc(*url, *resultAttributes, true, false, false, nullptr, 0, nullptr, nullptr);
}

void UMainFunctions::ShutdownServer()
{
	GIsRequestingExit = true;
}
