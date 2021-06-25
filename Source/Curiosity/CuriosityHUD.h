// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CuriosityHUD.generated.h"

UCLASS()
class ACuriosityHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACuriosityHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

