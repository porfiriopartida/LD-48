using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace _Scripts.UI
{
    public class OnBooleanEnable : MonoBehaviour
    {
        public Boolean isEnabled;
        public GameObject target;
        public bool reverse;

        // Update is called once per frame
        void FixedUpdate()
        {
            target.SetActive(reverse ? !isEnabled.Value:isEnabled.Value);
        }
    }
}
