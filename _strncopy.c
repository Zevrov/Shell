#include "shell.h"
/**
 * strncpy - copies string pointed to by src not including '\0'.
 * @dest: destination string
 * @src: string to be copied
 * @n: length
 *
 * Return: string
 */
strncpy(char *dest, const char *src, size_t n)
{
	size_t x;

	for (i = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[i];
	for (; x < n; x++)
		dest[X] = '\0';
	return (dest);
}
