using LopapaGames.ScriptableObjects;
using UnityEngine;
using UnityEngine.UI;

namespace LopapaGames.Components
{
    public class SliderMinMaxReader : MonoBehaviour
    {
        public MinMaxValues playerHp;
        private Slider slider;

        void Start()
        {
            slider = GetComponent<Slider>();
            slider.minValue = playerHp.minValue;
            slider.maxValue = playerHp.maxValue;
        }

        void FixedUpdate()
        {
            slider.value = playerHp.Value;
        }
    }
}