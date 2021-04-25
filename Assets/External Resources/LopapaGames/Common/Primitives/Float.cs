using UnityEngine;

namespace LopapaGames.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Shared_Number", menuName = "ScriptableObjects/Primitive/Float", order = 1)]
    public class Float : ScriptableObject
    {
        public float Value;
    }
}