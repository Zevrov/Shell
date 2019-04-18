#include "shell.h"
/**
 * _envp - prints the environment
 * @buffer: the input buffer
 * Return: 0
 **/
int _envp(char *buffer, char **env)
{
	int index = 0;
	char *x = "env";

	if (_strcmp(buffer, x) == 0)
	{
		while (env[index] != NULL)
		{
			_puts(env[index]);
			_putchar('\n');
			index++;
		}
	}
}
