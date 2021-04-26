using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace _Scripts
{
    public class WaterDetector : MonoBehaviour
    {
        public MyCharacterStateController MyCharacterStateController;
        
        private void OnTriggerEnter(Collider collision)
        {
            if ("Water".Equals(collision.tag))
            {
                MyCharacterStateController.IsOnWater = true;
                // Debug.Log("Character ENTERED water");
            }
        }
        private void OnTriggerExit(Collider collision)
        {
            if ("Water".Equals(collision.tag))
            {
                MyCharacterStateController.IsOnWater = false;
                // Debug.Log("Character left water");
            }
        }
    }
}
