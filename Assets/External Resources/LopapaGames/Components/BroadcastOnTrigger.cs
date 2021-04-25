using UnityEngine;

namespace LopapaGames.Components
{
    public class BroadcastOnTrigger : MonoBehaviour
    {
        public GameObject target;
        public string Message;

        private void OnTriggerEnter2D(Collider2D collision)
        {
            target.BroadcastMessage(Message, SendMessageOptions.DontRequireReceiver);
        }
    }
}
