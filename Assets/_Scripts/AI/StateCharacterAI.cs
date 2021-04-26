using UnityEngine;

namespace _Scripts.AI
{
    public class StateCharacterAI : MonoBehaviour
    {
        private MyStateMachine stateMachine;
        private MyState currentState;
        public CrabController crabController;
        public Transform Target;
        public Transform Self;
        public float Threshold;
        public float meatSight;
        public bool drawGizmo;
        private void Start()
        {
            stateMachine = new MyStateMachine {CrabController = crabController};
            currentState = stateMachine.IdleState;
        }
        void OnDrawGizmos()
        {
            if (!drawGizmo) return;
            Gizmos.color = Color.red;
            Gizmos.DrawSphere(this.transform.position, meatSight);
        }
        public void Update()
        {
            Collider[] hitColliders = Physics.OverlapSphere(Target.position, meatSight, LayerMask.GetMask("Meat"));
            // Debug.Log($"Found {hitColliders.Length} meats");
            if (hitColliders.Length > 0)
            {
                crabController.MoveTo(hitColliders[0].gameObject.transform.position);
            }

            // currentState = currentState.Update();
            // stateMachine.isPlayerNear = Vector3.Distance(Target.position, Self.position) < Threshold; 
        }
    }
}