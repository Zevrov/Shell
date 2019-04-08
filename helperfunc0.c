#include "shell.h"


int shlaunch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve(args[0], args) == -1)
		{
			perror("SH");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("SH");
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status))
	}
	return (1);
}

int shexecute(char **args)
{
	int i;

	if (!args[0])
		return (1);
	for (i = 0; i < numbuildins(); i++)
	{
		if (strcmp(args[0], builtins[i]) == 0)
		{
			return (*builtinf[i])(args);
		}
	}
	return shlaunch(args);
}

#define SHLBUFF 1024
int shreadline(void)
{
	int bsize = SHLBUFF;
	int location = 0;
	char *buffer = malloc(sizeof(char) * bsize);
	int z;

	if (!buffer)
	{
		fprintf(stderr, "sh: allocation of memory failed\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		z = getchar();
		if (z == EOF)
		{
			exit(EXIT_SUCCESS);
		}
		else if (z == '\n')
		{
			buffer[location] = '\0';
			return (buffer);
		}
		else
		{
			buffer[location] = z;
		}
		location++;
		if (location >= bsize)
		{
			bsize += SHLBUFF;
			buffer = realloc(buffer, bsize);
			if (!buffer)
			{
				fprintf(stderr, "sh: reallocation of memory failed\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}

#define tok_bsize 64
#define tok_delim " \t\r\n\a"
char **shplitline(char *line)
{
	int bsize = tok_bsize, location = 0;
	char **tokenz = malloc(sizeof(char) * bsize);
	char *token, **token_b;

	if (!tokenz)
	{
		fprintf(stderr, "sh: allocation failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, tok_delim)
	while (token != NULL)
	{
		tokenz[location] = token;
		location++;
		if (location >= bsize)
		{
			bsize += tok_bsize;
			token_b = tokenz;
			tokenz = realloc(tokenz, sizeof(char) * bsize);
			if (!tokenz)
			{
				free(token_b);
				fprintf(stderr, "sh: allocation failed\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, tok_delim);
	}
	tokenz[location] = NULL;
	return (tokenz);
}
