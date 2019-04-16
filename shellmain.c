#include "shell.h"
/**
* main - simple shell
* @argc: number of args
* @argv: the args
* Return: always 0
*/

int main(int argc, char *argv[], char *envp[])
{
	char *buffer = NULL;
	size_t buffsize = 0;
	pid_t newpid;
	ssize_t charCount;
	int status, index = 0;
	char **cmd;

	if (argc < 1)
		return (-1);

	while (1)
	{
		write(STDERR_FILENO, "$ ", 2);
		charCount = getline(&buffer, &buffsize, stdin);
		if (charCount < 0)
			break;
		if (buffer[charCount - 1] == '\n')
			buffer[charCount - 1] = '\0';
		cmd = vect_array(buffer, charCount);
		exitShell(buffer);
		newpid = fork();
		if (newpid < 0)
			perror(argv[0]);
		if (newpid == 0)
		{
			execve(cmd[0], cmd, envp);
			perror(argv[0]);
		}
		else
			wait(&status);
	}
	if (charCount < 0)
		write(STDERR_FILENO, "\n", 1);
	free(buffer);
	while (cmd[index])
	{
		free(cmd[index]);
		index++;
	}
	free(cmd);
	return (0);
}

