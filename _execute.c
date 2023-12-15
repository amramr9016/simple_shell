#include "shell.h"
int _execute(char **command, char **argv)
{
	pid_t process_id;
	int exit_status;

	process_id = fork();
	if (process_id == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			release_strings(command);
			exit(0);
		}

	}
	else
	{
		waitpid(process_id, &exit_status, 0);
		release_strings(command);
	}
	return (WEXITSTATUS(exit_status));
}
