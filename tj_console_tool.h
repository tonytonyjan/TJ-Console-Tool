#ifndef TJ_CONSOLE_TOOL_TJ_CONSOLE_TOOL_H_
#define TJ_CONSOLE_TOOL_TJ_CONSOLE_TOOL_H_

#include <windef.h>

#define H_CONSOLE_OUTPUT GetStdHandle(STD_OUTPUT_HANDLE)
#define H_CONSOLE_INPUT GetStdHandle(STD_INPUT_HANDLE)

BOOL setTitle(const char* title);
BOOL setCursorPosition(unsigned short x, unsigned short y);
BOOL setCursorVisibility(BOOL visible);

#endif  // TJ_CONSOLE_TOOL_TJ_CONSOLE_TOOL_H_