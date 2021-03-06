namespace _Scripts.AI
{
    public class MyStateMachine
    {
        public bool isPlayerNear;
        public MyStateMachine()
        {
            ChaseState = new IdleState(this);
            IdleState = new ChaseState(this);
            AttackState = new AttackState(this);
        }

        public MyState ChaseState { get; }
        public MyState IdleState { get;  }
        public MyState AttackState { get; }
        
        public CrabController CrabController;
    }
}