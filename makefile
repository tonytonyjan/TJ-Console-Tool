CC=gcc
CFLAGS=-Wall
SOURCES=tj_console_tool.c
# OBJECTS=$(SOURCES:.c=.o)

all tj_console_tool.dll: $(SOURCES)
	$(CC) $(CFLAGS) -shared $(SOURCES) -o tj_console_tool.dll

test: tj_console_tool.dll
	$(CC) $(CFLAGS) tj_console_tool_test.c -L. -ltj_console_tool -o tj_console_tool_test
	tj_console_tool_test.exe

clean:
	del *.o *.exe *.dll