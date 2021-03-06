namespace _Scripts.AI
{
    public class AttackState : MyState
    {
        public AttackState(MyStateMachine myStateMachine)
        {
            this.stateMachine = myStateMachine;
        }

        public bool isPlayerClose;
        public bool isPlayerFar;
        public override MyState Update()
        {
            if (isPlayerClose)
            {
                stateMachine.CrabController.Attack();
                return this;
            }

            if (isPlayerFar)
            {
                return stateMachine.ChaseState;
            }

            return stateMachine.IdleState;
        }
    }
}