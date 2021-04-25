using System;
using UnityEngine;

namespace _Scripts
{
    public class MyCharacterMovementController : MonoBehaviour
    {
        public float speed;
        public float threshold;
        private Transform _myTransform;
        private Vector3 _targetPosition;
        private Vector3 _playerDirection;
        private bool _isMoving;
        private void Start()
        {
            // _myRigidBody = GetComponent<Rigidbody>();
            _myTransform = GetComponent<Transform>();
        }

        private void Update()
        {
            if (!_isMoving) return;
            
            _playerDirection = _targetPosition - _myTransform.position;
            if (Vector3.Distance(_targetPosition, this.transform.position) <= threshold)
            {
                _isMoving = false;
            }

            _myTransform.Translate(_playerDirection.normalized * (speed * Time.deltaTime) );
        }

        public void WalkTo(Vector3 hitPoint)
        {
            hitPoint.y = 0;
            _targetPosition = hitPoint;
            _isMoving = true;
            // Debug.Log($"Move From {this.transform.position} to {hitPoint}");
        }
    }
}