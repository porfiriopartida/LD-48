using System;
using UnityEngine;

namespace _Scripts.AI
{
    public class CrabController : MonoBehaviour
    {
        public MyCharacterMovementController myCharacterMovementController;
        public AudioSource audioSource;
        public void MoveTo(Vector3 vector3)
        {
            myCharacterMovementController.WalkTo(vector3);
        }

        public void Attack()
        {
            Debug.Log("Attacking");
        }

        public void Dance()
        {
            Debug.Log("Dance");
        }

        // private void FixedUpdate()
        // {
        //     AdjustPitch();
        // }

        public void AdjustPitch()
        {
            float scale = 1/transform.localScale.x;
            audioSource.pitch = scale;
        }
    }
}