using UnityEngine;

namespace LopapaGames.Components
{
    public class SoundManager : MonoBehaviour
    {
        public AudioSource SFXAudioSource;
        public static SoundManager Instance;
        void Start()
        {
            if (Instance == null)
            {
                Instance = this;
            }
            else
            {
                Destroy(this.gameObject);
            }
        }
        public static SoundManager GetInstance()
        {
            return Instance;
        }

        public void PlaySfx(AudioSource src, AudioClip clip)
        {
            src.clip = clip;
            src.Play();
        }
        public void PlaySfx(AudioSource src, AudioClip[] clips)
        {
            this.PlaySfx(src, clips[Random.Range(0, clips.Length)]);
        }

        public void PlaySfx(AudioClip clip)
        {
            this.PlaySfx(this.SFXAudioSource, clip);
        }
        public void PlaySfx(AudioClip[] clips)
        {
            this.PlaySfx(this.SFXAudioSource, clips);
        }
    }

}