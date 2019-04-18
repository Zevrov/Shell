#include "shell.h"
/**
 * _strndupp - duplicate a string
 *
 * @src: string to be duplicated
 * @n: input number of items in string
 * Description: function duplicates a string with n items or no n items input
 *
 * Return: pointer
 */

char *_strndupp(char *src, unsigned int n)
{
	char *duplicate, *srcpointer;
	unsigned int i, x;

	x = _strlen(string);
	srcpointer = duplicate;
	if (n == NULL)
	{
		duplicate = malloc(sizeof(*src) * x);
		if (*duplicate == NULL)
		{
			return (NULL);
		}
		for (; *srcpointer = *src; srcpointer++)
		{
			src++;
		}
		*srcpointer = '\0';
		return (duplicate);
	}
	if (n != NULL)
	{
		duplicate = malloc(sizeof(n));
		if (*duplicate == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < n && *srcpointer != NULL; i++, srcpointer++)
		{
			duplicate[i] = srcpointer[i];
		}
		*srcpointer = '\0';
		return (duplicate);
	}
}
