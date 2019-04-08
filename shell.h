#ifndef _SHELL_
#define _SHELL_

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void sloop(void);
int shlaunch(char **args);
int shexecute(char **args);
int shreadline(void);
char **shplitline(char *line);

#endif /* shell */
