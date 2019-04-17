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
	char *p2, *pathenv, *pathtokenptr, *pathpointer = *env, *str = "PATH=";

/*get path*/
	for (i = 0; pathpointer != NULL; pathpointer++)
	{
		strcheck = _strncmp(pathpointer, str, 5);
		if (strcheck == 0)
			break;
	}
/*pointer pointing to position 6 of Path string*/
	pathpointer = (pathpointer + 5);

/*insert path in buffer*/
	pathenv = malloc(sizeof(str) * (strlen(pathpointer) + 1));
	if (pathenv == NULL)
		return (NULL);
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
			return(p2);
		pathtokenptr = strtok(NULL, ":");
	}
	return (NULL);
}
