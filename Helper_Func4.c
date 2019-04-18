#include "shell.h"
/**
 * _strncpy - copies string
 * @dest: destination of copy
 * @src: source array
 * @n: number of items in array
 *
 * Description: copies string
 *
 * Return: dest  value
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *sub = dest;
	int i = 0;

	for (; i < n && *src != '\0'; i++, src++, sub++)
	{
		*sub = *src;
	}
	for (; n > i; i++, sub++)
	{
		*sub = '\0';
	}
	return (dest);
}
/**
 * _strncat - function that concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 *
 * Description: concatenates n bytes for src
 *
 * Return: Description of the returned value
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (src[b] >= n)
	{
		dest[a] = '\0';
	}

	return (dest);
}
