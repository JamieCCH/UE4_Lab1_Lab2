// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Lab1_Huang_JamieCCHUD.generated.h"

UCLASS()
class ALab1_Huang_JamieCCHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALab1_Huang_JamieCCHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

