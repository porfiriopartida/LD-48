using UnityEngine;

namespace _Scripts.AI
{
    public class CrabController : MonoBehaviour
    {
        public MyCharacterMovementController MyCharacterMovementController;
        public void MoveTo(Vector3 vector3)
        {
            MyCharacterMovementController.WalkTo(vector3);
        }

        public void Attack()
        {
            Debug.Log("Attacking");
        }

        public void Dance()
        {
            Debug.Log("Dance");
        }
    }
}