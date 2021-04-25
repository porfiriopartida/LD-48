using System.Collections.Generic;
using LopapaGames.Common.Core;

namespace LopapaGames.ScriptableObjects
{
    public class CooldownManager : Singleton<CooldownManager>, ICooldownManager
    {
        public IUnityService MyUnityService;
        private Dictionary<string, float> _cooldownValue;
        private List<string> keys;

        private void Awake()
        {
            MyUnityService = UnityService.GetInstance();
            _cooldownValue = new Dictionary<string, float>();
            keys = new List<string>();
        }

        void Update()
        {
            if (keys.Count == 0)
            {
                return;
            }


            for (var i = keys.Count - 1; i >= 0; i--)
            {
                float oldVal = _cooldownValue[keys[i]];
                if (oldVal > 0)
                {
                    float newVal = _cooldownValue[keys[i]] - MyUnityService.GetDeltaTime();
                    _cooldownValue[keys[i]] = newVal;
                }
                else
                {
                    Remove(keys[i]);
                }
            }
        }

        public void AddTimer(string cooldownKey, float delay)
        {
            _cooldownValue[cooldownKey] = delay;
            if (!keys.Contains(cooldownKey))
            {
                keys.Add(cooldownKey);
            }

        }

        public float GetTimer(string cooldownKey)
        {
            return _cooldownValue.TryGetValue(cooldownKey, out var val) ? val : 0f;
        }
        public void Remove(string cooldownKey)
        {
            _cooldownValue.Remove(cooldownKey);
            keys.Remove(cooldownKey);
        }
    }
}