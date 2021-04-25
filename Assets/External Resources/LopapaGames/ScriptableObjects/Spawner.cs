using System;
using LopapaGames.Common.Core;
using UnityEngine;
using UnityEngine.Assertions;

namespace LopapaGames.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Spawner", menuName = "ScriptableObjects/Lopapa/Spawner")]
    public class Spawner : ScriptableObject
    {
        [NonSerialized]
        public IUnityService MyUnityService; 

        public GameObject prefab;
        public GameObject Spawn(Transform parent = null)
        {
            Assert.IsNotNull(prefab, "prefab in " + this + " cannot be null.");
            return _getUnityService().Instantiate(prefab, parent);
        }
        public GameObject Spawn(Transform parent, Vector3 position, Quaternion rotation)
        {
            Assert.IsNotNull(prefab, "prefab in " + this + " cannot be null.");
            return _getUnityService().Instantiate(prefab, position, rotation, parent);
        }

        private IUnityService _getUnityService()
        {
            if (MyUnityService == null)
            {
                MyUnityService = UnityService.GetInstance();
            }

            return MyUnityService;
        }
        
    }
}
