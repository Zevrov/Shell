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
		commandline = lsh_read_line();
		args = lsh_split_line(commandline);
		stat = lsh_execute(args);
		free(commandline);
		free(args);
	} while (status);
}
