#include "monty.h"
#include <stdio.h>
/**
 * read_mfile -  Open the bytecode file and read it line by line.
 *
 * Return: nonw
 */

void read_mfile(char *filenm, stack_t **stack)
{
	char *ln = NULL;
	size_t len = 0;
	unsigned int line_num = 0;

	FILE *file = file;
	
	file = fopen(filenm, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Cant't open file %s\n", filenm);
		exit(EXIT_FAILURE);
	}

	while (custom_getline(&ln, &len, file) != -1)
	{
		line_num++;
		process_ln(ln, line_num, stack);
	}

	free(ln);
	fclose(file);
}
