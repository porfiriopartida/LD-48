﻿    using UnityEngine;
using UnityEngine.Events;

namespace LopapaGames.Common.Core
{
    public class GameEventListener : MonoBehaviour {
        public GameEvent Event;
        public UnityEvent Response;

        public void OnEnable(){
            Event.RegisterListener(this);
        }

        public void OnDisable(){
            Event.UnregisterListener(this);
        }
        public void OnEventRaised(){
            Response.Invoke();
        }

    }
}