using UnityEngine;

namespace _Scripts
{
    public class InputController : MonoBehaviour
    {
        [SerializeField]
        public Camera ortographicCamera;
        private Vector3 _touchPosWorld;
        [SerializeField]
        public MyCharacterMovementController characterMovementController;
        [SerializeField]
        private GameObject gameObjectPrefab;

        private Transform _orthographicCameraTransform;
        private Vector3 _touchPosWorld3D;
        private Ray ray;
        public string[] layerNames;
        private void Start()
        {
            _orthographicCameraTransform = ortographicCamera.transform;
        }

        void Update()
        {
            Debug.DrawLine( ray.origin, (ortographicCamera.transform.forward) * 1000, Color.green);
            
            if (UnityEngine.Input.GetMouseButton(0))
            {
                Vector3 mousePos = UnityEngine.Input.mousePosition;
                ray = ortographicCamera.ScreenPointToRay(mousePos);
                ray.direction = ortographicCamera.transform.forward;
                
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit, 1000, LayerMask.GetMask(layerNames)))
                {
                    var hitCollider = hit.collider;
                    if (hitCollider != null)
                    {
                        // Debug.Log($"Mouse Pos: {mousePos} -- Hit Point: {hit.point}");
                        characterMovementController.WalkTo(hit.point);
                    }

                }
            }
        }
    }
}