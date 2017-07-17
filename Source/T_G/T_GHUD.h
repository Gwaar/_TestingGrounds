// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "T_GHUD.generated.h"

UCLASS()
class AT_GHUD : public AHUD
{
	GENERATED_BODY()

public:
	AT_GHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

