// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Lab1_Huang_JamieCCEditorTarget : TargetRules
{
	public Lab1_Huang_JamieCCEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Lab1_Huang_JamieCC");
	}
}
