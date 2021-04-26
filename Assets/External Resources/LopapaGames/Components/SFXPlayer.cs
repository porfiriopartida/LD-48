using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace LopapaGames.Components
{
    public class SFXPlayer : MonoBehaviour
    {
        // public AudioSource audioSource;
        public AudioClip[] sfx;

        public void Play(AudioSource audioSource)
        {
            if (sfx.Length > 0)
            {
                SoundManager.Instance.PlaySfx(audioSource, sfx);
            }
        }
        public void Play()
        {
            if (sfx.Length > 0)
            {
                SoundManager.Instance.PlaySfx(sfx);
            }
        }
    }
}
