// Fill out your copyright notice in the Description page of Project Settings.

using System;
using System.IO;
using System.Reflection;
using UnrealBuildTool;

public class Residential_418 : ModuleRules
{
    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/")); }
    }

    public Residential_418(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "LevelSequence", "MovieScene" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        //LoadLibHaru(Target);
    }

    public bool LoadLibHaru(ReadOnlyTargetRules Target)
    {
        bool isLibrarySupported = false;

        string libHaruPath = Path.Combine(ThirdPartyPath, "LIBHARU/");

        string LibPath = "";
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            isLibrarySupported = true;

            LibPath = Path.Combine(libHaruPath, "Binaries/");
        }
        else
        {
            string Err = string.Format("{0} dedicated server is made to depend on {1}. We want to avoid this, please correct module dependencies.", Target.Platform.ToString(), this.ToString()); System.Console.WriteLine(Err);
        }

        if (isLibrarySupported)
        {
            //Add Include path 
            PublicIncludePaths.Add(Path.Combine(libHaruPath, "Include/"));

            // Add Library Path 
            PublicLibraryPaths.Add(LibPath);

            // Add Static Libraries
            PublicAdditionalLibraries.Add("libhpdf.lib");
            PublicAdditionalLibraries.Add("libhpdfs.lib");

            // Add DLLs
            PublicDelayLoadDLLs.Add("libhpdf.dll");
        }

        Definitions.Add(string.Format("WITH_LIBHARU_BINDING={0}", isLibrarySupported ? 1 : 0));

        return isLibrarySupported;
    }
}
