using System.ComponentModel;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace LopapaGames.Common.Core
{
    public interface IUnityService
    {
        float GetAxis(string axis);
        float GetAxisRaw(string axis);
        bool GetButton(string buttonName);
        bool GetButtonDown(string buttonName);
        bool GetButtonUp(string buttonName);
        bool GetMouseButton(int button);
        bool GetMouseButtonUp(int button);
        void ResetInputAxes();
        bool IsJoystickPreconfigured(string joystickName);
        string[] GetJoystickNames();
        Touch GetTouch(int index);
        AccelerationEvent GetAccelerationEvent(int index);
        bool GetKey(KeyCode key);
        bool GetKey(string name);
        bool GetKeyUp(KeyCode key);
        bool GetKeyUp(string name);
        bool GetKeyDown(KeyCode key);
        bool GetKeyDown(string name);
        Scene GetActiveScene();
        Scene GetSceneByPath(string name);
        Scene GetSceneByName(string name);
        bool SetActiveScene(Scene scene);
        Scene GetSceneAt(int index);
        Scene GetSceneByBuildIndex(int buildIndex);
        void MergeScenes(Scene sourceScene, Scene destinationScene);
        void LoadScene(string sceneName, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode);
        void LoadScene(string sceneName);
        void LoadScene(int idx);
        int SceneCount();
        Object Instantiate(Object original);
        GameObject Instantiate(GameObject original, Transform parent);
        void Destroy(Object obj);
        void Destroy(Object obj, [DefaultValue("0.0F")] float t);
        void DestroyImmediate(Object obj);
        void DestroyImmediate(Object obj, [DefaultValue("false")] bool allowDestroyingAssets);
        Object[] FindObjectsOfType(System.Type type);
        Object FindObjectOfType(System.Type type);
        void DontDestroyOnLoad(Object target);
        Object Instantiate(Object original, Transform parent, bool instantiateInWorldSpace);
        Object Instantiate(Object original, Vector3 position, Quaternion rotation);
        GameObject Instantiate(GameObject original, Vector3 position, Quaternion rotation, Transform parent);
        GameObject FindWithTag(string tag);
        GameObject FindGameObjectWithTag(string tag);
        GameObject[] FindGameObjectsWithTag(string tag);
        GameObject Find(string name);
        float Range(float a, float b);
        float GetDeltaTime();
        float GetRealtimeSinceStartup();
        float GetTimeScale();
        float SetTimeScale(float scaleTime);

    }
}