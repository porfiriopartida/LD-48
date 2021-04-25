using UnityEngine;

namespace LopapaGames.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Timer", menuName = "ScriptableObjects/Primitive/Timer", order = 3)]
    public class TimerValue : ScriptableObject
    {
        public float Hours;
        public float Minutes;
        public float Seconds;

        public void SetTimeInSeconds(float seconds)
        {
            Hours = Mathf.Floor(seconds/3600);
            seconds -= Hours * 3600;
            Minutes = Mathf.Floor(seconds/60);
            seconds -= Minutes * 60;
            Seconds = Mathf.Floor(seconds);
        }
    }
}