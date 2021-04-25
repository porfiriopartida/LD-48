using System.Collections.Generic;
using LopapaGames.ScriptableObjects;
using UnityEngine;

namespace _Scripts
{
    public class PathFollower : MonoBehaviour
    {
        [SerializeField]
        private PathController pathController;
        public float pauseOnPoints;
        public float entitySpeed;
        public bool isLoop;
        public bool isRandom;

        private List<Transform> _path = new List<Transform>();
        private int _nextIndex;
        private float _nextMove;
        private int _pathCount;

        private void Start()
        {
            if (pathController != null)
            {
                SetPath(pathController);
            }
        }

        public void SetPath(PathController newPathController) {
            _path = newPathController.GetPath();
            _pathCount = _path.Count;
            transform.position = _path[_nextIndex].position;
        }

        private void Update()
        {
            if (_nextIndex >= _pathCount) return;
            
            if (Time.time > _nextMove)
            {
                transform.position = Vector3.MoveTowards(transform.position, _path[_nextIndex].position, entitySpeed * Time.deltaTime);
                //transform.position = path[nextIndex].position;
                if (transform.position == _path[_nextIndex].position)
                {
                    _nextMove = Time.time + pauseOnPoints;
                    if (isRandom)
                    {
                        _nextIndex = Random.Range(0, _pathCount - 1);
                    }
                    else
                    {
                        _nextIndex++;
                    }

                    if (isLoop && _nextIndex > _pathCount)
                    {
                        _nextIndex = 0;
                    }
                }
            }
        }
    }
}