namespace _Scripts.AI
{
    public class ChaseState : MyState
    {
        public ChaseState(MyStateMachine myStateMachine)
        {
            this.stateMachine = myStateMachine;
        }

        public override MyState Update()
        {
            if (this.stateMachine.isPlayerNear)
            {
                return stateMachine.AttackState;
            }

            //this.stateMachine.CrabController.MoveTo();
            return this;
        }
    }
}