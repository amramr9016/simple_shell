#include "shell.h"
int _execute(char **command, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (exexve(command[0], command, envrion) == -1)
		{
			perror(argv[0]);
			free_array(command);
		}

	}
	else
	{
		waitpid(child, &status, 0);
		free_array(command);
	}
	return(WEXITSTATUS(status));
}
