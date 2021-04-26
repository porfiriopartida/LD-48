using System.Collections;
using _Scripts.AI;
using LopapaGames.Common.Core;
using UnityEngine;

namespace _Scripts
{
    public class CrabDeadListener : MonoBehaviour
    {
        public Transform crabSpawner;
        public Transform playerOrigin;
        public GameEvent crabDeadEvent;
        public float waitForSpawn;

        private void OnTriggerEnter(Collider other)
        {
            if(other.CompareTag("Enemy"))
            {
                StartCoroutine(ResetCrab(other));
                crabDeadEvent.Raise();
            }
            if(other.CompareTag("Player"))
            {
                ResetPlayer(other);
            }
        }

        private void ResetPlayer(Collider other)
        {
            var transform1 = other.transform;
            transform1.position = playerOrigin.position;
            transform1.rotation = playerOrigin.rotation;
        }

        private IEnumerator ResetCrab(Component other)
        {
            yield return new WaitForSeconds(waitForSpawn);

            CrabController crabController = other.GetComponent<CrabController>();
            var transform1 = crabController.transform;
            transform1.position = crabSpawner.position;
            transform1.rotation = crabSpawner.rotation;
            transform1.localScale = getRandomScale();
            crabController.AdjustPitch();
        }

        private  Vector3 getRandomScale()
        {
            var rndVal = Random.Range(0.3f, 3f);
            return new Vector3(rndVal, rndVal, rndVal);
        }
    }
}
