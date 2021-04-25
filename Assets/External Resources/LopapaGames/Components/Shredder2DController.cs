using UnityEngine;

namespace LopapaGames.Components
{
    //This is not pooling friendly.
    [RequireComponent(typeof(Collider2D))]
    public class Shredder2DController : MonoBehaviour
    {
        private void OnTriggerEnter2D(Collider2D collision)
        {
            Destroy(collision.gameObject);
        }
    }
}
