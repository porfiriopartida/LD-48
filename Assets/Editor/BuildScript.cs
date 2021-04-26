// using System;
// using System.IO;
// using UnityEditor;
// using UnityEditor.Build.Reporting;
// using UnityEngine;
//
// public class BuildScript
// {
//     private static readonly string[] SCENES = new[] { "Assets/Scenes/SampleScene.unity"};
//
//     public static void PerformBuild()
//     {
//         try
//         {
//             Log("====================");
//             PlayerSettings.SetStackTraceLogType(LogType.Log, StackTraceLogType.Full);
//             Log("====================");
//             Log("Starting build...");
//             
//             BuildForWindows();
//         }
//         catch (Exception e)
//         {
//             Log(e);
//             throw;
//         }
//         finally
//         {
//             Log("====================");
//         }
//     }
//
//     [MenuItem("Build/All")]
//     private static void BuildForWindows()
//     {
//         BuildWindows32Bits();
//         BuildWindows64Bits();
//     }
//
//     private static void BuildWindows32Bits()
//     {
//         Log("\n\n=========================\n" +
//                           "Windows 32 bits" +
//                           "\n==========================================\n");
//         BuildReport report = BuildPipeline.BuildPlayer(SCENES,
//             $"Executable/{PlayerSettings.bundleVersion}/x86_64/LD48.exe",
//             BuildTarget.StandaloneWindows, BuildOptions.None);
//         BuildSummary summary = report.summary;
//
//         if (summary.result == BuildResult.Succeeded)
//         {
//             Log("Build succeeded: " + summary.totalSize + " bytes");
//         }
//
//         if (summary.result == BuildResult.Failed)
//         {
//                 Log("\n\n\n\n=========================\n" +
//                                   "Build failed for Windows 32 bits" +
//                                   "\n==========================================\n");
//         }
//     }
//
//     private static void BuildWindows64Bits()
//     {
//         Log("\n\n=========================\n" +
//                           "Windows 64 bits" +
//                           "\n==========================================\n");
//         BuildReport report = BuildPipeline.BuildPlayer(SCENES, $"Releases/build/{PlayerSettings.bundleVersion}/x64/LD48.exe",
//             BuildTarget.StandaloneWindows64, BuildOptions.None);
//         BuildSummary summary = report.summary;
//
//         if (summary.result == BuildResult.Succeeded)
//         {
//             Log("Build succeeded: " + summary.totalSize + " bytes");
//         }
//
//         if (summary.result == BuildResult.Failed)
//         {
//             Log("\n\n\n\n=========================\n" +
//                               "Build failed for Windows 64 bits" +
//                               "\n==========================================\n");
//         }
//     }
//
//     public static void Log(string str)
//     {
//         Debug.Log(str);
//         Console.WriteLine(str);
//     }
//     public static void Log(Exception e)
//     {
//         Debug.Log(e);
//         Console.WriteLine(e);
//     }
//
//     private static String GetTimestamp(DateTime value)
//     {
//         return value.ToString("yyyyMMddHHmmssffff");
//     }
//
// }
