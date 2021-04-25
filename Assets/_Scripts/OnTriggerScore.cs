using System.Linq;
using LopapaGames.Common.Core;
using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace _Scripts
{
    public class OnTriggerScore : MonoBehaviour
    {
        public GameEvent scoreEvent;
        public Float score;

        public string[] tagNames;

        public bool destroySelf;
        public bool destroyOther;
        private void Start()
        {
        }

        private void OnTriggerEnter(Collider collision)
        {
            if (tagNames.Contains(collision.tag))
            {
                score.Value++;
                scoreEvent.Raise();
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
