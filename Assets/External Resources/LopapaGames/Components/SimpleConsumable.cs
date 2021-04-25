using UnityEngine;

namespace LopapaGames.Components
{
    public class SimpleConsumable : MonoBehaviour
    {
        public string[] Targets;
        public string ConsumeMethod;
        public float value;
        public bool destroyOnHit;
        public AudioClip[] onConsumeClips;
        /*
        [Header("SendMessage(EventName) if TriggerEvent is on.")]
        public bool TriggerEvent;
        public string EventName;
        */
        private void OnTriggerEnter2D(Collider2D collision)
        {
            bool hitSomenthing = false;
            foreach (string tagName in Targets)
            {
                if (collision.tag == tagName)
                {
                    collision.gameObject.SendMessage(ConsumeMethod, value);
                    hitSomenthing = true;

                    if (onConsumeClips.Length > 0)
                    {
                        SoundManager.Instance.PlaySfx(onConsumeClips);
                    }

                    /*
                    if (TriggerEvent)
                    {
                        gameObject.SendMessage(EventName);
                    }
                    */
                }
            }
            if (hitSomenthing && destroyOnHit)
            {
                Destroy(gameObject);
            }
        }
    }
}
