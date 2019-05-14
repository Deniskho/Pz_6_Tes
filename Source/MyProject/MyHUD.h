// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
public:

		////////////////////////////////////////////////////////////////////////////////////////////////////
		/////Called as soon as game starts, create SCompoundWidget and give Viewport access
		void BeginPlay();

protected:
	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////Reference to SCompoundWidget

	TSharedPtr<class SMyUIWidget> MyUIWidget;
	
	
};
