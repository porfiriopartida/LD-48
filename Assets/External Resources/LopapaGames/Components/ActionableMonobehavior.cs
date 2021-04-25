using UnityEngine;

namespace LopapaGames.Components
{
    public abstract class ActionableMonobehavior : MonoBehaviour, IActionable
    {
        public abstract void Perform();
    }

}