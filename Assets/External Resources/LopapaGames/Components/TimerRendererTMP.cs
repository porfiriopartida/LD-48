using LopapaGames.ScriptableObjects;
using TMPro;
using UnityEngine;

namespace LopapaGames.Components
{
    public class TimerRendererTMP : MonoBehaviour
    {
        [TextArea(3, 10)]
        public string pattern;
        private TextMeshProUGUI text;
        public TimerValue TimerValue;
        public bool UseDoubleZero = true;

        private void Start()
        {
            text = GetComponent<TextMeshProUGUI>();
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