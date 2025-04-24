#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main() {

  MessageBox(
    NULL, 
    "Detected PC, not a brain",
    "Error",
    MB_ICONERROR | MB_YESNOCANCEL | MB_DEFBUTTON1
  );

  return 1;
}
