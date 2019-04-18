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
