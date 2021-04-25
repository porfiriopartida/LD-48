using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace LopapaGames.Components
{
    public class MouseSpawnerController : MonoBehaviour
    {
        public Spawner Spawner;
        public string objectParent;
        public bool IsValidDrop = true;
        public bool SingleSpawn = true;
        private Transform parent;

        public CallbackMonobehavior Callback;
        
        // Start is called before the first frame update
        void Start()
        {
            if (objectParent != "")
            {
                GameObject parentGameObject = GameObject.Find(objectParent);
                if (parentGameObject)
                {
                    this.parent = parentGameObject.transform;
                }
            }

        }

        private void Spawn(Vector3 position)
        {
            //TODO: Move to event instead.
            Spawner.Spawn(parent, position, Quaternion.identity);
        }

        void Update()
        {
            Vector3 worldPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            worldPosition.z = 0;
            transform.position = worldPosition;
            if (Input.GetMouseButtonUp(0))
            {
                if(IsValidDrop){
                    //Dropping
                    if (Callback && Callback.TryExecute())
                    {
                        Spawn(worldPosition);
                    }
                    else if(!Callback)
                    {
                        Spawn(worldPosition);
                    }

                }
                
                if (SingleSpawn)
                {
                    Destroy(this.gameObject);
                }
            }

        }

        public float GetCost()
        {
            if (Callback)
            {
                return Callback.GetCost();
            }
            else
            {
                Debug.LogWarning("Callback is not configured in MouseSpawnerController. Cost assumed 0.");
                return 0;
            }
        }
    }
}