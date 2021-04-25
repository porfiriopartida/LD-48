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
            score.Value = 0;
        }

        private void OnTriggerEnter2D(Collider2D collision)
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
