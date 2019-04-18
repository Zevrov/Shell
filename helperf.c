#include "shell.h"

/**
 * _puts - prints string
 * @str: pointer for str
 *
 * Description: function will print string using pointer
 *
 * Return: string
 **/

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
 *  * _calloc - function allocates memory for an array
 *   * @nmemb: number of elelments of data
 *    * @size: size of data
 *     *
 *      * Description: function allocates memory for an array
 *       *
 *        * Return: value
 *         */
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
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *Return: On success 1.
 *     * On error, -1 is returned, and errno is set appropriately.
 *      */

int _putchar(char c)
{
	        return (write(1, &c, 1));
}
/**
 *  * _strchr - locates character in a string
 *   * @s: string pointer
 *    * @c: character to locate in string
 *     *
 *      * Description: function locates a character in stringr
 *       *
 *        * Return: value
 *         */

char *_strchr(char *s, char c)
{
		int x;

			for (x = 0; *(s + x) != '\0'; x++)
					{
								if (*(s + x) == c)
											{
															return (s + x);
																	}
									}
				if (c == '\0')
						{
									return (s + x);
										}
					return (0);

}
/**
 *  * _strstr - function that locates a substring
 *   * @haystack: string pointer
 *    * @needle: string to locate in string
 *     *
 *      * Description: function locates a stringt in a string
 *       *
 *        * Return: value
 *         */
char *_strstr(char *haystack, char *needle)
{
		char *top = haystack;
			char *point = needle;

				for (; *haystack != '\0'; top++, haystack++)
						{
									for (; *point != '\0' && *top == *point; point++, top++)
													;
											if (*point == '\0')
															return (haystack);
													point = needle;
															top = haystack;

																}
					return (0);
}
