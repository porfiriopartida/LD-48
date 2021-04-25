using UnityEngine;

namespace LopapaGames.Components
{
    public class SimpleBulletController : MonoBehaviour
    {
        public string[] Targets;
        public string AddDamageMethod;
        public float damage;
        public bool destroyOnHit;
        [Header("SendMessage(EventName) if TriggerEvent is on.")]
        public bool TriggerEvent;
        public string[] EventsNames;

        private void OnTriggerEnter2D(Collider2D collision)
        {
            bool hitSomenthing = false;
            foreach (string tagName in Targets)
            {
                if (collision.tag == tagName)
                {
                    collision.gameObject.SendMessage(AddDamageMethod, damage);
                    hitSomenthing = true;
                    if (TriggerEvent)
                    {
                        foreach (string EventName in EventsNames)
                        {
                            gameObject.SendMessage(EventName);
                        }
                    }
                }
            }
            if (hitSomenthing && destroyOnHit)
            {
                Destroy(gameObject);
            }
        }
    }
}
