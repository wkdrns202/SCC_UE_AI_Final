// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SCC_UEAI_Lecture : ModuleRules
{
	public SCC_UEAI_Lecture(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", 
			"InputCore", "EnhancedInput", "NavigationSystem", "AIModule", "UMG"  });
	}
}
