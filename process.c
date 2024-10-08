#include "monty.h"

/**
 * process_ln - extract the optcode and arg then call function
 * Return: optcode arg
 */

void process_ln(char *line, unsigned int line_num, stack_t **stack)
{
	char *opcode = strtok(line, " \n\t");


	if (opcode == NULL || opcode[0] == '#')
	{
		return;
	}

	if (strcmp(opcode, "push") == 0)
	{
		push_m(stack, line_num);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall_m(stack, line_num);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		pint_m(stack, line_num);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		pop_m(stack, line_num);
	}
	else if (strcmp(opcode, "swap") == 0)
	{
		swap_m(stack, line_num);
	}
	else if (strcmp(opcode, "add") == 0)
	{
		add_m(stack, line_num);
	}
        else if (strcmp(opcode, "sub") == 0)
        {
                sub_m(stack, line_num);
        }
        else if (strcmp(opcode, "nop") == 0)
        {
                nop_m(stack, line_num);
        }
	else
	{
		fprintf(stderr, "L%d: unknown instrucion %s\n", line_num, opcode);
		exit(EXIT_FAILURE);
	}
}


	
