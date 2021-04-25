using System;
using LopapaGames.Common;
using LopapaGames.Common.Core;
using UnityEngine;
using UnityEngine.Serialization;
using Random = UnityEngine.Random;

namespace LopapaGames.ScriptableObjects
{
    [CreateAssetMenu(fileName = "DropTable", menuName = "ScriptableObjects/Lopapa/DropTable")]
    public class DropTable : ScriptableObject
    {
        [FormerlySerializedAs("table")] 
        public ObjectChance[] Table;

        [Header("Single Drop Strategy")]
        public bool IsSingleDrop;
        [Range(0f, 1f)]
        public float SingleDropChance;

        [NonSerialized]
        public IUnityService MyUnityService;
        public void Drop(Vector3 position)
        {
            if (MyUnityService == null)
            {
                MyUnityService = UnityService.GetInstance();
            }

            if (IsSingleDrop)
            {
                DropSingle(position);
            }
            else {
                DropMultiple(position);
            }
        }
        private void DropSingle(Vector3 position)
        {
            float chanceSum = 0f;
            foreach (ObjectChance pair in Table)
            {
                chanceSum += pair.chance;
            }
            float rndDropped = MyUnityService.Range(0f, 1f);
            if (rndDropped <= SingleDropChance)
            {
                float rndSelector = MyUnityService.Range(0f, chanceSum);
                float currentSum = 0f;
                foreach (var pair in Table)
                {
                    currentSum += pair.chance;
                    if (rndSelector < currentSum) {
                        MyUnityService.Instantiate(pair.gameObject, position, Quaternion.identity);
                        break;
                    }
                }
            }
        }
        private void DropMultiple(Vector3 position)
        {
            foreach (ObjectChance pair in Table)
            {
                float rnd = MyUnityService.Range(0f, 1f);
                if (rnd <= pair.chance)
                {
                    MyUnityService.Instantiate(pair.gameObject, position, Quaternion.identity);
                }
            }
        }
    }
}