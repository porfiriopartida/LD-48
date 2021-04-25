using UnityEngine;

namespace LopapaGames.Components
{
    public abstract class CallbackMonobehavior : MonoBehaviour, ICallback
    {
        public abstract void Execute(object extraParameters = null);
        public abstract bool TryExecute(object extraParameters = null);
        public abstract float GetCost();
    }

}