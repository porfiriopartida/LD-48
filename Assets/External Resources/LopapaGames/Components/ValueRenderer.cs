using LopapaGames.ScriptableObjects;
using UnityEngine;
using UnityEngine.UI;

namespace LopapaGames.Components
{
    public class ValueRenderer : MonoBehaviour
    {
        public string pattern;
        public Float number;
        private Text text;
        private void Start()
        {
            text = GetComponent<Text>();
        }

        void FixedUpdate()
        {
            text.text = string.Format(pattern, number.Value);
        }
    }
}