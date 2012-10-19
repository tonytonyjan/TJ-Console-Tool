#include "tj_console_tool.h"
#include <windows.h>

BOOL setTitle(const char* title){
  return SetConsoleTitle((LPCSTR)title);
}

BOOL setCursorPosition(unsigned short x, unsigned short y){
  COORD coord = {(SHORT)x * 2, (SHORT)y};
  return SetConsoleCursorPosition(H_CONSOLE_OUTPUT, coord);
}

BOOL setCursorVisibility(BOOL visible){
  CONSOLE_CURSOR_INFO lpConsoleCursorInfo = {25, visible};
  return SetConsoleCursorInfo(H_CONSOLE_OUTPUT, &lpConsoleCursorInfo);
}

BOOL setCursorColor(WORD color){
  return SetConsoleTextAttribute(H_CONSOLE_OUTPUT, color);
}