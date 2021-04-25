using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace _Scripts
{
    public class MyCharacterStateController : MonoBehaviour
    {
        public bool IsOnWater;
        public bool IsDown;
        public Animator animator;
        public MyCharacterMovementController MyCharacterMovementController;

        void Update()
        {
            if (IsDown)
            {
                animator.SetBool("IsMoving", false);
                animator.SetBool("IsDown", IsDown);
            } else {
                animator.SetBool("IsMoving", MyCharacterMovementController._isMoving);
            }
        }
    }
}
