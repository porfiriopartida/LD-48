using System.ComponentModel;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace LopapaGames.Common.Core
{
  public class UnityService : IUnityService
  {
    private static UnityService _instance;

    private UnityService()
    {
      Debug.Log("UnityService instance created.");
    }

    public static UnityService GetInstance()
    {
      return _instance ?? (_instance = new UnityService());
    }

    #region Input

    public float GetAxis(string axis) => Input.GetAxis(axis);
    public float GetAxisRaw(string axis) => Input.GetAxisRaw(axis);
    public bool GetButton(string buttonName) => Input.GetButton(buttonName);
    public bool GetButtonDown(string buttonName) => Input.GetButtonDown(buttonName);
    public bool GetButtonUp(string buttonName) => Input.GetButtonUp(buttonName);
    public bool GetMouseButton(int button) => Input.GetMouseButton(button);
    public bool GetMouseButtonUp(int button) => Input.GetMouseButtonUp(button);
    public void ResetInputAxes() => Input.ResetInputAxes();
    public bool IsJoystickPreconfigured(string joystickName) => Input.IsJoystickPreconfigured(joystickName);
    public string[] GetJoystickNames() => Input.GetJoystickNames();
    public Touch GetTouch(int index) => Input.GetTouch(index);
    public AccelerationEvent GetAccelerationEvent(int index) => Input.GetAccelerationEvent(index);
    public bool GetKey(KeyCode key) => Input.GetKey(key);
    public bool GetKey(string name) => Input.GetKey(name);
    public bool GetKeyUp(KeyCode key) => Input.GetKeyUp(key);
    public bool GetKeyUp(string name) => Input.GetKeyUp(name);
    public bool GetKeyDown(KeyCode key) => Input.GetKeyDown(key);
    public bool GetKeyDown(string name) => Input.GetKeyDown(name);

    #endregion

    #region SceneManager


    public Scene GetActiveScene() => SceneManager.GetActiveScene();

    public Scene GetSceneByPath(string name) => SceneManager.GetSceneByPath(name);

    public Scene GetSceneByName(string name) => SceneManager.GetSceneByName(name);

    public bool SetActiveScene(Scene scene) => SceneManager.SetActiveScene(scene);

    public Scene GetSceneAt(int index) => SceneManager.GetSceneAt(index);

    public Scene GetSceneByBuildIndex(int buildIndex) => SceneManager.GetSceneByBuildIndex(buildIndex);
    public void MergeScenes(Scene sourceScene, Scene destinationScene) => SceneManager.MergeScenes(sourceScene, destinationScene);

    public void LoadScene(string sceneName, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode) =>
      SceneManager.LoadScene(sceneName, mode);
    
    public void LoadScene(string sceneName) =>
      SceneManager.LoadScene(sceneName);
    public void LoadScene(int idx) =>
      SceneManager.LoadScene(idx);

    public int SceneCount() =>
      SceneManager.sceneCount;

        /*
         Not used methods.. yet:
         Add them if ever used.
         
    public extern int sceneCountInBuildSettings
    public  => SceneManager.SetActiveScene_Injected(ref scene);
    public Scene CreateScene([NotNull] string sceneName, CreateSceneParameters parameters)
    public void MoveGameObjectToScene([NotNull] GameObject go, Scene scene) => SceneManager.MoveGameObjectToScene_Injected(go, ref scene);
    public event UnityAction<Scene, LoadSceneMode> sceneLoaded;
    public event UnityAction<Scene> sceneUnloaded;
    public event UnityAction<Scene, Scene> activeSceneChanged;
    public Scene CreateScene(string sceneName)
    public Scene LoadScene(string sceneName, LoadSceneParameters parameters)
    public void LoadScene(int sceneBuildIndex, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
    public void LoadScene(int sceneBuildIndex)
    public Scene LoadScene(int sceneBuildIndex, LoadSceneParameters parameters)
    public AsyncOperation LoadSceneAsync(
      int sceneBuildIndex,
    public AsyncOperation LoadSceneAsync(int sceneBuildIndex)
    public AsyncOperation LoadSceneAsync(
      int sceneBuildIndex,
      LoadSceneParameters parameters) => SceneManager.LoadSceneAsyncNameIndexInternal((string) null, sceneBuildIndex, parameters, false);
    public AsyncOperation LoadSceneAsync(string sceneName, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
    public AsyncOperation LoadSceneAsync(string sceneName)
    public AsyncOperation LoadSceneAsync(
      string sceneName,
      LoadSceneParameters parameters) => SceneManager.LoadSceneAsyncNameIndexInternal(sceneName, -1, parameters, false);
    public AsyncOperation UnloadSceneAsync(int sceneBuildIndex) => SceneManager.UnloadSceneNameIndexInternal("", sceneBuildIndex, false, UnloadSceneOptions.None, out bool _);
    public AsyncOperation UnloadSceneAsync(string sceneName) => SceneManager.UnloadSceneNameIndexInternal(sceneName, -1, false, UnloadSceneOptions.None, out bool _);
    public AsyncOperation UnloadSceneAsync(Scene scene) => SceneManager.UnloadSceneAsyncInternal(scene, UnloadSceneOptions.None);
    public AsyncOperation UnloadSceneAsync(
      int sceneBuildIndex,
      UnloadSceneOptions options) => SceneManager.UnloadSceneNameIndexInternal("", sceneBuildIndex, false, options, out bool _);
    public AsyncOperation UnloadSceneAsync(
      string sceneName,
      UnloadSceneOptions options) => SceneManager.UnloadSceneNameIndexInternal(sceneName, -1, false, options, out bool _);
    public AsyncOperation UnloadSceneAsync(
      Scene scene,
      UnloadSceneOptions options) => SceneManager.UnloadSceneAsyncInternal(scene, options);
      
         */

      #endregion

    #region GameObject

    public Object Instantiate(Object original) => Object.Instantiate(original);
    public GameObject Instantiate(GameObject original, Transform parent) => Object.Instantiate(original, parent);
    public void Destroy(Object obj) => Object.Destroy(obj);
    public void Destroy(Object obj, [DefaultValue("0.0F")] float t) => Object.Destroy(obj, t);
    public void DestroyImmediate(Object obj) => Object.DestroyImmediate(obj);
    public void DestroyImmediate(Object obj, [DefaultValue("false")] bool allowDestroyingAssets) => Object.DestroyImmediate(obj, allowDestroyingAssets);
  
    public Object[] FindObjectsOfType(System.Type type) => Object.FindObjectsOfType(type);
    public Object FindObjectOfType(System.Type type) => Object.FindObjectOfType(type);
    public void DontDestroyOnLoad(Object target) => Object.DontDestroyOnLoad(target);

    public Object Instantiate(Object original, Transform parent, bool instantiateInWorldSpace) => Object.Instantiate(original, parent, instantiateInWorldSpace);
    public Object Instantiate(Object original, Vector3 position, Quaternion rotation) => Object.Instantiate(original, position, rotation);
    public GameObject Instantiate(GameObject original, Vector3 position, Quaternion rotation, Transform parent) => Object.Instantiate(original, position, rotation, parent);

    public GameObject FindWithTag(string tag) => GameObject.FindWithTag(tag);
    public GameObject FindGameObjectWithTag(string tag) => GameObject.FindGameObjectWithTag(tag);
    public GameObject[] FindGameObjectsWithTag(string tag) => GameObject.FindGameObjectsWithTag(tag);
    public GameObject Find(string name) => GameObject.Find(name);

    // public static extern GameObject CreatePrimitive(PrimitiveType type);
    // public static T Instantiate<T>(T original) where T : Object
    // public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation) where T : Object => (T) Object.Instantiate((Object) original, position, rotation);
    // public static T Instantiate<T>(
    // public static T Instantiate<T>(T original, Transform parent, bool worldPositionStays) where T : Object => (T) Object.Instantiate((Object) original, parent, worldPositionStays);
    // public static T Instantiate<T>(T original, Transform parent) where T : Object => Object.Instantiate<T>(original, parent, false);
    // public extern HideFlags hideFlags { [MethodImpl(MethodImplOptions.InternalCall)] get; [MethodImpl(MethodImplOptions.InternalCall)] set; }
    // public static T[] FindObjectsOfType<T>() where T : Object => Resources.ConvertObjects<T>(Object.FindObjectsOfType(typeof (T)));
    // public static T FindObjectOfType<T>() where T : Object => (T) Object.FindObjectOfType(typeof (T));

    #endregion

    #region Random

    public float Range(float a, float b) => Random.Range(a, b);

    #endregion

    #region Time
    public float GetDeltaTime() => Time.deltaTime;
    public float GetRealtimeSinceStartup() => Time.realtimeSinceStartup;
    public float GetTimeScale() => Time.timeScale;
    public float SetTimeScale(float scaleTime) => Time.timeScale = scaleTime;

    #endregion
  }
}