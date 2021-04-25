using LopapaGames.ScriptableObjects;
using UnityEngine;
using UnityEngine.UI;

namespace LopapaGames.Components
{
    public class TimerRenderer : MonoBehaviour
    {
        [TextArea(3, 10)]
        public string pattern;
        private Text text;
        public TimerValue TimerValue;
        public bool UseDoubleZero = true;

        private void Start()
        {
        
            text = GetComponent<Text>();
        }

        void FixedUpdate()
        {
            
            text.text = string.Format(pattern, GetTimeValue(TimerValue.Hours), GetTimeValue(TimerValue.Minutes), GetTimeValue(TimerValue.Seconds));
        }

        private string GetTimeValue(float timerValue)
        {
            timerValue = Mathf.Floor(timerValue);
            string value = timerValue.ToString();
            if (UseDoubleZero && timerValue<=9)
            {
                value = "0" + value;
            }

            return value;
        }
    }
}