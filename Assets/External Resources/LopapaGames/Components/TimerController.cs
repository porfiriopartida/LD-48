using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace LopapaGames.Components
{
    public class TimerController : MonoBehaviour
    {
        [Header("Don't update this field manually as it will be overridden by Time.time")]
        public Float number;
        void Start()
        {
            number.Value = Time.time;
        }

        void Update()
        {
            number.Value = Time.time;
        }
    }
}