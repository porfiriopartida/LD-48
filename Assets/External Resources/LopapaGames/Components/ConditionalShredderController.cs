using UnityEngine;

namespace LopapaGames.Components
{
    public class ConditionalShredderController : MonoBehaviour
    {
        public string[] tagNames;
        private void OnTriggerEnter2D(Collider2D collision)
        {
            foreach (string tagName in tagNames)
            {
                if (collision.tag == tagName)
                {
                    Destroy(collision.gameObject);
                }
            }
        }
    }
}
