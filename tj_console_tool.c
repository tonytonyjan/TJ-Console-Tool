#include "tj_console_tool.h"
#include <windows.h>

BOOL setTitle(const char* title){
  return SetConsoleTitle((LPCSTR)title);
}