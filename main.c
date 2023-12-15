#include <shell.h>
/*
 * main - simple sell main function
 * @ac: count of argumnets
 * @argv: Arguments
 * Return: 0 Always (success).
*/
int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status = 0;
	(void) ac;

	while (1)
	{
		line = read_line();
		if (line == NULL) 
			return (status);

		command = tokenizer(line);

		status = _execute(command, argv);
	}
}