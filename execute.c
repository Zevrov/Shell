#include "shell.h"
/**
 *
 *
 */
int execute(char **args)
{
	int i;

	if (args[0] == NULL)
		return (1);

	for (i = 0; i < num_builtins(); i++)
	{
		if (strcmp(args[0], builtin[i]) == 0)
			return ((*builtin_func[i])(args));
	}
	return (1);
}
char *builtin[] = {
	"exit"
};

int (*builtin_func[]) (char **) = {
	&exit
};
