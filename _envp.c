#include "shell.h"
/**
 * _envp - prints the environment
 * @env: the environment
 */
void _envp(char **env, *buffer)
{
	int index;
	char *x = "env"; 
	
	if (_strcmp(buffer, x) == 0)	
	{
		for(index = 0; env[index] != '\0'; index++)
		{
			_puts(env[index]);
		}
	}
}
