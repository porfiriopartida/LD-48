namespace LopapaGames.Common.Data
{
    public interface IResourcesManager
    {
        void Add(IResource resource, float value);
        float Get(IResource resource);
        void Set(IResource resource, float value);
        bool Pay(IResource resource, float value);
    }
}