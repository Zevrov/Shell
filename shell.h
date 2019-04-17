#ifndef _SHELL_
#define _SHELL_

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

typedef struct global
{
	char *command = NULL;
} globals;

char **vect_array(char *str, ssize_t n);
void _puts(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int _putchar(char c);
char *_strndupp(char *src, unsigned int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
int _strlen(char *a);
void sighandle(int n __attribute__((unused)));
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
char *_strncat(char *dest, char *src, int n);
void exitSH(char *buffer);

#endif /* shell */
