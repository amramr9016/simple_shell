#include "shell.h"

/**
 * main - Simple shell main function
 * @ac: count of argumnets
 * @argv: Arguments
 * Return: 0 Always (success).
*/
int main(int ac, char **argv)
{
	char *line = NULL, **command = NULL;
	int status = 0;
	(void) ac;

	while (1)
	{
	line = read_line();
	if (line == NULL) /* ctrl + D */
	{
	if (isatty(STDIN_FILENO))
	write(STDOUT_FILENO, "\n", 1);
	return (status);
	}

	command = tokenizer(line);
	if (!command)
	continue;




	status = _execute(command, argv);
	}

}
