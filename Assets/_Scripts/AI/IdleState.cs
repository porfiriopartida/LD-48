namespace _Scripts.AI
{
    public class IdleState : MyState
    {
        public bool isPlayerNear;
        
        public IdleState(MyStateMachine myStateMachine)
        {
            this.stateMachine = myStateMachine;
        }

        public override MyState Update()
        {
            if (isPlayerNear)
            {
                // stateMachine.CrabController.Move();
                return stateMachine.ChaseState;
            }
            else
            {
                // stateMachine.CrabController.Dance();
                return this;
            }
        }
    }
}