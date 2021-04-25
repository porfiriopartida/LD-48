using System;
using UnityEngine;

namespace LopapaGames.Common
{
    [Serializable]
    public class ObjectChance
    {
        public GameObject gameObject;
        [Range(0, 1)]
        public float chance;
    }
}