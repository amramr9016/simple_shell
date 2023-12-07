#include "shell.h"

void free_array_of_string(char **arr)
{
	int i;
	if(!arr)
	return;

	for (i = 0; arr[i]; i++)
	free(arr[i]), arr[i] = NULL;

	free(arr), arr = NULL;
}
