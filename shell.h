#ifndef _SHELL_
#define _SHELL_

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char **vect_array(char *str, ssize_t n);
void exitSH(char *buffer);

#endif /* shell */
