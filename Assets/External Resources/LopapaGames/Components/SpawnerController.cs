using LopapaGames.Common.Core;
using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace LopapaGames.Components
{
    public class SpawnerController : ActionableMonobehavior
    {
        public Spawner Spawner;
        public float startAt;
        public float delay;
        public bool parentSelf = true;
        [Header("If above is false, the objectParent will be used instead.")]
        public Transform objectParent;
        [Header("How many can be spawned, use 0 if unlimited.")]
        public int totalSpawnCount;

        private Transform _parent;
        private int _totalSpawned = 0;
        //public string notifySpawnMethod;
        public bool IsAutomatic = true;

        public CooldownManager CooldownManager;
        private string spawnEvent = "spawn";
        public GameEvent GameEvent;
        void Start()
        {
            if(CooldownManager == null){
                this.CooldownManager = this.gameObject.AddComponent<CooldownManager>();
            }
            //Calculates the next time this event can be triggered.
            this.CooldownManager.AddTimer(this.spawnEvent, startAt);
            _parent = parentSelf ? transform : objectParent;
        }
        void Update()
        {

            //Calculates the amount of units it can spawn
            if (totalSpawnCount > 0 && _totalSpawned >= totalSpawnCount) {
                Destroy(gameObject);
                return;
            }
            if (IsAutomatic && this.CooldownManager.GetTimer(spawnEvent) <= 0)
            {
                Spawn();
                //Calculates the next time this event can be triggered.
                this.CooldownManager.AddTimer(spawnEvent, delay);
                _totalSpawned++;
            }
        }

        public void Spawn()
        {
            //Spawns the GameObject via Spawner.
            GameObject spawned = Spawner.Spawn(_parent, transform.position, Quaternion.identity);
            Notify(spawned);
            //Notifies the spawned element to children components.
            SendMessage("Spawned", spawned, SendMessageOptions.DontRequireReceiver);
            // if (notifySpawnMethod.Length > 0) { 
            //     gameObject.SendMessageUpwards(notifySpawnMethod, spawned, SendMessageOptions.DontRequireReceiver);
            // }
        }

        private void Notify(GameObject spawned)
        {
            if (GameEvent)
            {
                GameEvent.Raise();
            }
        }

        public override void Perform()
        {
            Spawn();
        }
    }
}
