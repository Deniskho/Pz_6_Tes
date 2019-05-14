// Fill out your copyright notice in the Description page of Project Settings.

#include "MyHUD.h"
#include "MyProject.h"
#include "MyGameResources.h"



void AMyHUD::BeginPlay()
{

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////Create a SMyUIWidget on heap referenced by MyUIWidget pointer member
	SAssignNew(MyUIWidget, SMyUIWidget).OwnerHUD(this);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////Pass our viewport a weak reference to our widget, will not increment refcount
	if (GEngine->IsValidLowLevel())
		GEngine->GameViewport->
		AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MyUIWidget.ToSharedRef()));

	if (MyUIWidget.IsValid())
	{
		////////////////////////////////////////////////////////////////////////////////////////////////////
		/////Set widget's properties as visibile (sets child widget's properties recurisvely)
		MyUIWidget->SetVisibility(EVisibility::Visible);
	}
}


