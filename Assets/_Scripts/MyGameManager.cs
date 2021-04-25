using System.Linq;
using LopapaGames.Common.Core;
using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace _Scripts
{
    public class MyGameManager : MonoBehaviour
    {
        public Float score;
        void Start()
        {
            score.Value = 0;
        }
    }
}