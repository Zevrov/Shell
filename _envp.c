#include "shell.h"
/**
 * _envp - prints the environment
 * @buffer: the input buffer
 * Return: 0
 */
int _envp(char *buffer, char **env)
{
	int index = 0;
	char *x = "env";

	if (_strcmp(buffer, x) == 0)
	{
		while (env[index] != NULL)
		{
				write(STDOUT_FILENO, env[index], _strlen(env[index]));
				write(STDOUT_FILENO, "\n", 1);
				index++;
		}
	}
}
