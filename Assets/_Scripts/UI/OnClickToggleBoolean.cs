using System;
using UnityEngine;
using UnityEngine.UI;
using Boolean = LopapaGames.ScriptableObjects.Boolean;

namespace _Scripts.UI
{
    public class OnClickToggleBoolean : MonoBehaviour
    {
        public Boolean target;

        private void Start()
        {
            Button button = GetComponent<Button>();
            button.onClick.AddListener(Clicked);
        }

        public void Clicked()
        {
            target.Value = !target.Value;
        }
    }
}