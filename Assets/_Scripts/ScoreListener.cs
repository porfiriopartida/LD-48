using LopapaGames.Components;
using UnityEngine;

public class ScoreListener : MonoBehaviour
{
    public SFXPlayer sfxScoreUp;
    public SFXPlayer sfxScoreDown;
    public void OnScore(float value)
    {
        if (value > 1)
        {
            sfxScoreUp.Play();
        }
        else
        {
            
            sfxScoreDown.Play();
        }
    }
}
