#ifndef _SHELLH_
#DEFINE _SHELLH_

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* list of built in commands
*/
char *builtins[] = {
	"help",
	"exit",
	"cd"
};
/**
* list of built in function addresses
*/
int builtinf[] = {
	&shelp,
	&shexit,
	&shcd
};
void sloop(void);
int shlaunch(char **args);
int shexecute(char **args);
int shreadline(void);
char **shplitline(char *line);

#endif /* shellh */
