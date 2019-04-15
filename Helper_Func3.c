#include "shell.h"

/**
 * _puts - prints string
 * @str: pointer for str
 *
 * Description: function will print string using pointer
 *
 * Return: string
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
/**
 * _calloc - function allocates memory for an array
 * @nmemb: number of elelments of data
 * @size: size of data
 *
 * Description: function allocates memory for an array
 *
 * Return: value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int a;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb * size; a++)
	{
		arr[a] = 0;
	}
	return (arr);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
