using UnityEngine;

namespace LopapaGames.ScriptableObjects
{
    [CreateAssetMenu(fileName = "MinMaxValues", menuName = "ScriptableObjects/Lopapa/MinMaxValues")]
    public class MinMaxValues : ScriptableObject
    {
        public float minValue;
        public float maxValue;
        public float Value;
        public void SetValue(float value)
        {
            if (value > maxValue)
            {
                value = maxValue;
            }
            if (value < minValue)
            {
                value = minValue;
            }
            Value = value;
        }
        public float GetValue()
        {
            return Value;
        }
    }
}
