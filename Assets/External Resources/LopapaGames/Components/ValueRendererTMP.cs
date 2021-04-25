using LopapaGames.ScriptableObjects;
using TMPro;
using UnityEngine;

namespace LopapaGames.Components
{
    public class ValueRendererTMP : MonoBehaviour
    {
        public string pattern;
        public Float number;
        private TextMeshProUGUI text;
        private void Start()
        {
            text = GetComponent<TextMeshProUGUI>();
        }

        void FixedUpdate()
        {
            text.text = string.Format(pattern, number.Value);
        }
    }

}