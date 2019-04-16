#include "shell.h"

/**
 * vect_array - tokenize string and return vector array
 * @str: stirng to be tokenized and packaged
 * @n: length of string
 *
 * Return: vector array with tokens
 */
char **vect_array(char *str, ssize_t n)
{
	char **args;
	char *buffer, *token, *bufPointer, *delim = " :=";
	int tokes = 1, index = 0;

	buffer = malloc(n + 1);
	strncpy(buffer, str, n + 1);
	bufPointer = buffer;
	while (*bufPointer)
	{
		if (*bufPointer == ' ')
			tokes++;
		bufPointer++;
	}
	args = malloc(sizeof(char *) * (tokes + 1));
	token = strtok(buffer, delim);
	while (token)
	{
		args[index] = malloc(strlen(token) + 1);
		strncpy(args[index], token, strlen(token) + 1);
		token = strtok(NULL, delim);
		index++;
	}
	args[index] = NULL;
	free(buffer);
	return (args);
}
