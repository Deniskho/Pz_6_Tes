// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "MyGameResources.h"


class FMyProject : public FDefaultGameModuleImpl
{
public:
	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////Called when GameModule is loaded, load any resources game may need here
	void StartupModule();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////Called when GameModule is unloaded, before shutdown, unload resources/cleanup here
	void ShutdownModule();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////Give a handle to MyUIResources to anyone who asks
	TSharedPtr<FSlateGameResources> GetSlateGameResources();

protected:

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////Data Structure and Interface for maintaining SlateGameResources on Game to Game basis
	FMyUIResources MyUIResources;

};