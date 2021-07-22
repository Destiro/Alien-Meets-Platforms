// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class debruconnAss1 : ModuleRules
{
	public debruconnAss1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
