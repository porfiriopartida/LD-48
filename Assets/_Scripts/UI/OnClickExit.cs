using UnityEngine;
using UnityEngine.UI;

namespace _Scripts.UI
{
    public class OnClickExit : MonoBehaviour
    {
        private void Start()
        {
            Button button = GetComponent<Button>();
            button.onClick.AddListener(Clicked);
        }

        private static void Clicked()
        {
            Application.Quit();
        }
    }
}