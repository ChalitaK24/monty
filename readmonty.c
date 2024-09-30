#include "monty.h"
#include <stdio.h>
/**
 * read_mfile -  Open the bytecode file and read it line by line.
 *
 * Return: nonw
 */

int read_mfile(FILE *file, stack_t **stack)
{
	char *ln = NULL;
	size_t len = 0;
	unsigned int line_num = 0;

	
	if (file == NULL)
	{
		fprintf(stderr, "Error: Cant't open file\n");
		exit(MONTY_ERROR_NONE);
	}	

	while (custom_getline(&ln, &len, file) != -1)
	{
		line_num++;
		process_ln(ln, line_num, stack);
	}

	free(ln);
	return (MONTY_ERROR_NONE);
}
