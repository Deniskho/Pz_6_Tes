// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE(FMyProject, MyProject, "MyProject");

void FMyProject::StartupModule()
{
	FDefaultGameModuleImpl::StartupModule();

	/*Loads resources and registers them with Slate*/
	/*Do this before trying to use resources*/
	MyUIResources.Initialize();

	/*TODO: Anything else game module might need to do on load*/
}

void FMyProject::ShutdownModule()
{
	FDefaultGameModuleImpl::ShutdownModule();

	/*Unregister resources/styles with Slate, cleanup, free memory*/
	MyUIResources.Shutdown();

	/*Cleanup/free any resources here*/
}

/*First defined here, no need to call parent*/
/*Give caller a pointer to our FSlateGameResources*/
TSharedPtr<FSlateGameResources> FMyProject::GetSlateGameResources()
{
	/*Give caller a pointer to our FSlateGameResources*/
	/*Giving strong pointer, helps gurantee access to resources*/
	return MyUIResources.GetSlateGameResources();
}