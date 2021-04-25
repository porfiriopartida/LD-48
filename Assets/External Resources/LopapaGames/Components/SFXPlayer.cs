using UnityEngine;

namespace LopapaGames.Components
{
    public class SFXPlayer : MonoBehaviour
    {
        public AudioClip[] sfx;

        public void Play()
        {
            if (sfx.Length > 0)
            {
                SoundManager.Instance.PlaySfx(sfx);
            }
        }
    }
}
