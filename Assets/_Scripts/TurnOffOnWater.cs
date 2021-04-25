using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LopapaGames.Components;

public class TurnOffOnWater : MonoBehaviour
{
    public SpawnerController SpawnerController;
    private void OnTriggerEnter(Collider collision)
    {
        if ("Water".Equals(collision.tag))
        {
            SpawnerController.IsAutomatic = false;
        }
    }
    private void OnTriggerExit(Collider collision)
    {
        if ("Water".Equals(collision.tag))
        {
            SpawnerController.IsAutomatic = true;
        }
    }
    
}
