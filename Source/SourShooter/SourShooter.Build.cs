// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SourShooter : ModuleRules
{
	public SourShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
