using LopapaGames.Common;
using LopapaGames.Common.Data;
using LopapaGames.Common.Primitives;
using LopapaGames.ScriptableObjects;
using TMPro;
using UnityEngine;

namespace LopapaGames.Components
{
    public class ResourceRendererTMP : MonoBehaviour
    {
        public string pattern;
        public SOEconomyManager soEconomyManager;
        public ResourceType ResourceType;
        public TextMeshProUGUI text;
        private void Start()
        {
            text = GetComponent<TextMeshProUGUI>();
        }

        void FixedUpdate()
        {
            
            text.text = string.Format(pattern, soEconomyManager.Get(ResourceType));
        }
    }
}
