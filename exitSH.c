#include "shell.h"
/**
 * exitSH - exits the shell
 * @buffer: the argument for exit
 */
void exitSH(char *buffer)
{
	char *x = "exit";

	if (strcmp(buffer, x) == 0)
	{
		free(buffer);
		exit(98);
	}
}
