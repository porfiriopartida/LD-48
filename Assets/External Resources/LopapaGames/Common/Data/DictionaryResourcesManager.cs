using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

namespace LopapaGames.Common.Data
{
    public class DictionaryResourcesManager : IResourcesManager
    {
        [SerializeField]
        private Dictionary<IResource, float> _resources;

        public DictionaryResourcesManager()
        {
            _resources = new Dictionary<IResource, float>();
        }

        public void Add(IResource resource, float value)
        {
            if (!_resources.TryGetValue(resource, out var val))
            {
                val = 0;
            }

            _resources[resource] = val + value;
        }
        public float Get(IResource resource)
        {
            if (_resources.TryGetValue(resource, out var val))
            {
                return val;
            }
            return 0;
        }

        public void Set(IResource resource, float value)
        {
            _resources[resource] = value;
        }

        public bool Pay(IResource resource, float cost)
        {
            Assert.IsTrue(cost >= 0);
            float current = Get(resource);

            if (current >= cost)
            {
                this.Add(resource, -cost);
                return true;
            }

            return false;
        }
    }
}