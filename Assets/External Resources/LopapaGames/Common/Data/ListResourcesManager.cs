using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

namespace LopapaGames.Common.Data
{
    public class ListResourcesManager : IResourcesManager
    {
        [SerializeField] 
        private readonly List<ResourceFloat> _list;

        public ListResourcesManager()
        {
            _list = new List<ResourceFloat>();
        }

        public void Add(IResource resource, float value)
        {
            var existing = GetByKey(resource);
            existing.Value += value;
        }

        public ResourceFloat GetByKey(IResource resource)
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

        public float Get(IResource resource)
        {
            var existing = GetByKey(resource);
            return existing.Value;
        }

        public void Set(IResource resource, float value)
        {
            ResourceFloat existing = GetByKey(resource);

            existing.Value = value;
        }

        public bool Pay(IResource resource, float cost)
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
        public IResource Key;
        public float Value;
    }
}