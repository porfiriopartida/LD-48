namespace LopapaGames.ScriptableObjects
{
    public interface ICooldownManager
    {
        void AddTimer(string cooldownKey, float delay);
        float GetTimer(string cooldownKey);
        void Remove(string cooldownKey);
    }
}