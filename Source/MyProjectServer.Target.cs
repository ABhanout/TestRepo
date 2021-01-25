//// Fill out your copyright notice in the Description page of Project Settings.

//using UnrealBuildTool;
//using System.Collections.Generic;

//public class MyProjectServerTarget : TargetRules
//{
//	public MyProjectServerTarget(TargetInfo Target) : base(Target)
//	{
//        //Type = TargetType.Game;
//        Type = TargetType.Server;
//        DefaultBuildSettings = BuildSettingsVersion.V2;
//     //   ExtraModuleNames.AddRange( new string[] { "MyProject" } );


       
//        ExtraModuleNames.Add("MyProject"); //Change this line according to the name of your project
//    }
//}


// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyProjectServerTarget : TargetRules //Change this line according to the name of your project
{
    public MyProjectServerTarget(TargetInfo Target) : base(Target) //Change this line according to the name of your project
    {
       
    }
}