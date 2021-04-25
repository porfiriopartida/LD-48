using LopapaGames.ScriptableObjects;
using UnityEngine;
using UnityEngine.UI;

namespace LopapaGames.Components
{
    public class PercentRenderer : MonoBehaviour
    {
        public string pattern;
        public Float number;
        public Float maxNumber;
        private Text text;
        private void Start()
        {
            text = GetComponent<Text>();
        }

        void FixedUpdate()
        {
            text.text = string.Format(pattern, Mathf.FloorToInt(100 * number.Value / maxNumber.Value)); 
        }
    }
}
