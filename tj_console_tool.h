#ifndef TJ_CONSOLE_TOOL_TJ_CONSOLE_TOOL_H_
#define TJ_CONSOLE_TOOL_TJ_CONSOLE_TOOL_H_

#include <windef.h>

#define F_BLUE 1
#define F_GREEN  2
#define F_RED  4
#define F_INTENSITY  8
#define F_WHITE 7
#define F_BLACK 0

#define B_BLUE 16
#define B_GREEN  32
#define B_RED  64
#define B_INTENSITY  128
#define B_WHITE 112
#define B_BLACK 0

#define H_CONSOLE_OUTPUT GetStdHandle(STD_OUTPUT_HANDLE)
#define H_CONSOLE_INPUT GetStdHandle(STD_INPUT_HANDLE)

BOOL setTitle(const char* title);
BOOL setCursorPosition(unsigned short x, unsigned short y);
BOOL setCursorVisibility(BOOL visible);
BOOL setCursorColor(WORD color);

#endif  // TJ_CONSOLE_TOOL_TJ_CONSOLE_TOOL_H_