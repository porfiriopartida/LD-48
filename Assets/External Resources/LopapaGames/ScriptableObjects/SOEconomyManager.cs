using System;
using System.Collections.Generic;
using LopapaGames.Common.Primitives;
using UnityEngine;
using UnityEngine.Assertions;

namespace LopapaGames.ScriptableObjects
{
    [CreateAssetMenu(menuName = "ScriptableObjects/Economy/ResourceManager", order =  4)]
    public class SOEconomyManager : ScriptableObject
    {
        [SerializeField] 
        private List<ResourceFloat> _list;

        void Awake()
        {
            if (_list == null)
            {
                _list = new List<ResourceFloat>();
            }
        }

        public void Add(ResourceType resource, float value)
        {
            var existing = GetByKey(resource);
            existing.Value += value;
        }

        private ResourceFloat GetByKey(ResourceType resource)
        {
            foreach (var t in _list)
            {
                if (t.Key == resource)
                {
                    return t;
                }
            }

            //Never null.
            var existing = new ResourceFloat();
            existing.Key = resource;
            existing.Value = 0f;
            _list.Add(existing);
            
            return existing;
        }

        public float Get(ResourceType resource)
        {
            var existing = GetByKey(resource);
            return existing.Value;
        }

        public void Set(ResourceType resource, float value)
        {
            ResourceFloat existing = GetByKey(resource);
            existing.Value = value;
        }

        public bool Pay(ResourceType resource, float cost)
        {
            Assert.IsTrue(cost >= 0);
            var current = Get(resource);

            if (current < cost)
            {
                return false;
            }
            
            Add(resource, -cost);
            return true;
        }
    }

    [Serializable]
    public class ResourceFloat
    {
        [SerializeField]
        public ResourceType Key;
        [SerializeField]
        public float Value;
    }
}
