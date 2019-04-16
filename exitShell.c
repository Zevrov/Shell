#include "shell.h"
/**
 * _exit - exits the shell
 * @args: the argument for exit
 */
void exitShell(char *buffer)
{
	char *x = "exit";

	if (strcmp(buffer, x) == 0)
	{
		free(buffer);
		exit(42);
	}
}
