#include "shell.h"
/**
 * _help - prints a helpful message
 * @buffer: the input buffer
 */
void _help(char *buffer)
{
	char *x = "help";

	if (_strcmp(buffer, x) == 0)
	{
		_puts("Don't Panic");
	}
}
