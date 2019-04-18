#include "shell.h"
/**
 * _envp - prints the environment
 * @buffer: the input buffer
 * Return: 0
 */
int _envp(char *buffer)
{
	char *x = "env";
	char **z = environ;

	if (_strcmp(buffer, x) == 0)
	{
		while (*z != NULL)
		{
				write(STDOUT_FILENO, (*z), _strlen(*z));
				write(STDOUT_FILENO, "\n", 1);
				z++;
		}
	}
	return (0);
}
