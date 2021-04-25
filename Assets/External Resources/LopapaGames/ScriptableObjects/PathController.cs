using System.Collections.Generic;
using UnityEngine;

namespace LopapaGames.ScriptableObjects
{
    [CreateAssetMenu(fileName = "New_Path", menuName = "ScriptableObjects/Lopapa/PathController")]
    public class PathController : ScriptableObject
    {
        public GameObject  _pathPrefab;

        public List<Transform> GetPath() {
            List<Transform> list = new List<Transform>();
            Transform parent = _pathPrefab.transform;
            foreach (Transform child in parent.transform) {
                list.Add(child);
            }
            return list;
        }
    }
}
