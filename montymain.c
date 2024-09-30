#include "monty.h"

int main(int ac, char** av)
{
	int exitv = EXIT_FAILURE;

	if (ac < 2)
	{
		printf("USAGE: monty file\n");
	}
	else
	{
		FILE*     file = strcmp(av[1], "stdin") == 0 ? stdin : fopen(av[1], "rt");

		if (file)
		{
			stack_t *stack = NULL;
			exitv = (read_mfile(file, &stack) == MONTY_ERROR_NONE) ? EXIT_SUCCESS : EXIT_FAILURE;
			fclose(file);
		}
		else
		{
			printf("Error: Can't open file %s\n", av[1]);
		}
	}
	return (exitv);
}
