// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Wallrun_C_plusplus : ModuleRules
{
	public Wallrun_C_plusplus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
