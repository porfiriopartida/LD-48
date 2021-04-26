using LopapaGames.Components;
using UnityEngine;

namespace _Scripts
{
    public class MeatDropListener : MonoBehaviour
    {
        public SFXPlayer MeatDropPlayer;
        public void OnMeatDrop()
        {
            MeatDropPlayer.Play();
        }
    }
}
