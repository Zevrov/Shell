#include "shell.h"
/**
* simple_shell0.1.c written by Wolf Hopkins
*/

int main(int argc, char **argv)
{
	sloop();
	return EXIT_SUCCESS;
}

void shloop(void)
{
	char *commandline;
	char **args;
	int stat;

	do {
		printf("< ");
		commandline = shreadline();
		args = shplitline(commandline);
		stat = shexecute(args);
		free(commandline);
		free(args);
	} while (status);
}
