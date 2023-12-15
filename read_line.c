#include "shell.h"

char *read_line(void)
{
	char *user_input = NULL;
	size_t line_length = 0;
	ssize_t read_length;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
	read_length = getline(&user_input, &line_length, stdin);
	if (read_length == -1)
	{
		free(user_input);
		return (NULL);
	}

	return (user_input);
}
