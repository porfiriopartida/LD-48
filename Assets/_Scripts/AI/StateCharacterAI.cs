using UnityEngine;

namespace _Scripts.AI
{
    public class StateCharacterAI : MonoBehaviour
    {
        private MyStateMachine stateMachine;
        private MyState currentState;
        public CrabController crabController;

        private void Start()
        {
            stateMachine = new MyStateMachine {CrabController = crabController};
            currentState = stateMachine.IdleState;
        }

        public void Update()
        {
            currentState = currentState.Update();
        }
    }
}