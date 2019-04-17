#include "shell.h"
/**
 * _exit - exits the shell
 * @args: the argument for exit
 */
void exitSH(char *buffer)
{
	char *x = "exit";

	if (_strcmp(buffer, x) == 0)
	{
		free(buffer);
		exit(42);
	}
}
