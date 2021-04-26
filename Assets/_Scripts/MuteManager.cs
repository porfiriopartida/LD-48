using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace _Scripts
{
    public class MuteManager : MonoBehaviour
    {
        public AudioSource musicAudioSource;
        // public AudioSource sfxAudioSource;

        public Boolean isMusicOn;
        // public Boolean isSFXOn;

        void FixedUpdate()
        {
            musicAudioSource.mute = !isMusicOn.Value;
            // sfxAudioSource.mute = !isSFXOn.Value;
        }
    }
}
