#include <windows.h>

LRESULT CALLBACK WndProc(HWND window, unsigned int message, WPARAM wParam, LPARAM lParam);

const char* className = "Window Class";

int WINAPI WinMain(HINSTANCE instance, HINSTANCE prevInstance, char* cmdLine, int cmdShow)
{
  WNDCLASSEX windowClass;
  windowClass.cbSize = sizeof(WNDCLASSEX);
  windowClass.cbClsExtra = 0;
  windowClass.cbWndExtra = 0;
  windowClass.hInstance = instance;
  windowClass.lpfnWndProc = WndProc;
  windowClass.style = CS_HREDRAW | CS_VREDRAW;
  windowClass.lpszClassName = className;
  windowClass.lpszMenuName = NULL;
  windowClass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
  windowClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
  windowClass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
  windowClass.hCursor = LoadCursor(NULL, IDC_ARROW);
  
  RegisterClassEx(&windowClass);
  
  HWND window = CreateWindowEx(0, className, "DBY", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 640, 480, NULL, NULL, instance, NULL);
  ShowWindow(window, cmdShow);
  UpdateWindow(window);
  
  MSG message;
  while (GetMessage(&message, NULL, 0, 0) > 0)
  {
    TranslateMessage(&message);
    DispatchMessage(&message);
  }
  
  return message.wParam;
}

LRESULT CALLBACK WndProc(HWND window, unsigned int message, WPARAM wParam, LPARAM lParam)
{
  switch (message)
  {
    case WM_CLOSE:
      DestroyWindow(window);
      break;
      
    case WM_DESTROY:
      PostQuitMessage(0);
      break;
      
    default:
      return DefWindowProc(window, message, wParam, lParam);
  }
  
  return 0;
}
