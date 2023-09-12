// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Wallrun_C_plusplusHUD.generated.h"

UCLASS()
class AWallrun_C_plusplusHUD : public AHUD
{
	GENERATED_BODY()

public:
	AWallrun_C_plusplusHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

