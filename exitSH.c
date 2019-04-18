#include "shell.h"
/**
 * exitSH - exits the shell
 * @buffer: the input buffer
 */
void exitSH(char *buffer)
{
	char *x = "exit";

	if (_strcmp(buffer, x) == 0)
	{
		free(buffer);
		exit(98);
	}
}
