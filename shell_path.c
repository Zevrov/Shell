#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

/**
 * pathfinder - function finds the path and uses it to exeute program
 * @env: pointer
 *
 * Return: Always 0.
 */

char *pathfinder(char **env)
{
	int i, strcheck;
	unsigned int n = 0, index = 0;
	char *p2;
	char *pathenv;
	char *pathtokenptr;
	char *pathpointer = *env;;
	char *str = "PATH=";

/*get path*/
	for (i = 0; pathpointer != NULL; pathpointer++)
	{
		strcheck = _strncmp(pathpointer, str, 5);
		printf("%s, %s, %d\n");

		if (strcheck == 0)
		{
			break;
		}
	}
/*pointer pointing to position 6 of Path string*/
	pathpointer = (pathpointer + 5)

/*insert path in buffer*/
	pathenv = malloc(sizeof(char str) * (strlen(pathpointer) + 1));
	if (pathenv == NULL)
	{
		return (-1);
	}
	while (pathpointer != NULL)
	{
		pathenv[n] = pathpointer[n];
		n++;
	}
/* String tok, break string into small sections divided by ":"*/
	//*patharray = (malloc(sizeof(char *) * (strlen(pathenv) + 1);
	pathtokenptr = strtok(pathenv, ";");
	while (pathtokenptr != NULL)
	{
		p2 = malloc(_strlen(globals.command) + _strlen(pathtokenptr) + 2);
		_strcpy(p2, pathtokenptr);
		p2[_strlen(pathtokenptr)] = '/';
		_strncat(p2, globals.command, _strlen(globals.command));
		p2[strlen(_strlen(globals.command) + _strlen(pathtokenptr) + 1)] = '\0';
		if (access(p2, X_OK) == 0)
			{
				return(p2);
			}
		pathtokenptr = strtok(NULL, ":");
	}
	return (NULL);
}
