namespace _Scripts.AI
{
    public class IdleState : MyState
    {
        
        public IdleState(MyStateMachine myStateMachine)
        {
            this.stateMachine = myStateMachine;
        }

        public override MyState Update()
        {
            if (this.stateMachine.isPlayerNear)
            {
                return stateMachine.ChaseState;
            }
            else
            {
                this.stateMachine.CrabController.Dance();
                return this;
            }
        }
    }
}