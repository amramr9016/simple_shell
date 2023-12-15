#include "shell.h"
void release_strings(char **string_array)
{
	int index;

	if (!string_array)
	{
	return;
	}

	for (index = 0; string_array[index]; ++index)
	{
	free(string_array[index]);
	string_array[index] = NULL;
	}

	free(string_array);
	string_array = NULL;
}
