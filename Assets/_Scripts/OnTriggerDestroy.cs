using System.Linq;
using LopapaGames.Common.Core;
using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace _Scripts
{
    public class OnTriggerDestroy : MonoBehaviour
    {
        public string[] tagNames;

        public bool destroySelf;
        public bool destroyOther;
        private void OnTriggerEnter(Collider collision)
        {
            if (tagNames.Contains(collision.tag))
            {
                if (destroyOther)
                {
                    Destroy(collision.gameObject);
                }
                if (destroySelf)
                {
                    Destroy(this.gameObject);
                }
            }
        }
    }
}
