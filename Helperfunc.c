#include "shell.h"
/**
 *  * _strlen - compute the length of string
 *   * @a: string to be measured
 *    *
 *     * Description: determine length of string
 *      *
 *       * Return: length of string
 *        */
int _strlen(char *a)
{
		int len;

			for (len = 0; a != NULL; len++)
					{
								a++;
									}
				return (len);
}
/**
 *  * _strcpy - copies string pointed to src
 *   * @dest: new location of string
 *    * @src: original location of string
 *     *
 *      * Description: copy string from one place to another
 *       *
 *        * Return: value
 *         */
char *_strcpy(char *dest, char *src)
{
		int i = 0;

			while (src[i] != '\0')
					{
								dest[i] = src[i];
										i++;
											}
				dest[i] = '\0';
					return (dest);
}
/**
 *  * _strcmp - compare two strings
 *   *
 *    * @s1: first string to be compared
 *     * @s2: second string to be compared
 *      *
 *       * Description: creating fuction to compare two strings
 *        *
 *         * Return: value
 *          */

int _strcmp(char *s1, char *s2)
{
		int n;
			int d;

				for (n = 0; s2[n] != '\0' && s1[n] != '\0'; n++)
						{
									if (s1[n] - s2[n] != 0)
												{
																break;
																		}
										}
					d = s1[n] - s2[n];
						return (d);
}
