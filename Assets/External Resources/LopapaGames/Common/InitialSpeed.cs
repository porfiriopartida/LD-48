using UnityEngine;

namespace LopapaGames.Common
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class InitialSpeed : MonoBehaviour
    {
        private Rigidbody2D _rigidbody2D;
        public Vector3 speed;

        private void Awake()
        {
            _rigidbody2D = GetComponent<Rigidbody2D>();
        }

        void Start()
        {
            Resume();
        }

        public void Stop()
        {
            _rigidbody2D.velocity = Vector3.zero;
        }

        public void Resume()
        {
            _rigidbody2D.velocity = speed;
        }
    }
}
