using LopapaGames.ScriptableObjects;
using UnityEngine;
using UnityEngine.UI;

namespace LopapaGames.Components
{
    public class BooleanRenderer : MonoBehaviour
    {
        public string pattern;
        public Boolean number;
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