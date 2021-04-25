using LopapaGames.Common.Core;
using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace LopapaGames.Components
{
    public class GunController : MonoBehaviour
    {
        public Spawner spawner;
        public float delay;
        public GameEvent onShootEvent;
        public CooldownManager CooldownManager;
        private string _shootEvent = "shoot";
        void Start()
        {
            if (CooldownManager == null)
            {
                CooldownManager = this.gameObject.AddComponent<CooldownManager>();
            }

            CooldownManager.AddTimer(_shootEvent, delay);
        }
        public void Shoot()
        {
            if (CooldownManager.GetTimer(_shootEvent) <= 0)
            {
                onShootEvent.Raise();
                spawner.Spawn(null, transform.position, Quaternion.identity);
                CooldownManager.AddTimer(_shootEvent, delay);
            }
        }
    }
}
