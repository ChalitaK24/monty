#include "monty.h"

void execute_inst(char *opcode, stack_t **stack, unsigned int line_num)
{
	instruction_t inst[] = {
				{"push", push_m},
				{"pall", pall_m},
				{"pint", pint_m},
				{"pop", pop_m},
				{"swap", swap_m},
				{"nop", nop_m},
				{"sub", sub_m},
				{"add", add_m},
				{NULL, NULL}
				};


	int i;

	for (i = 0; inst[i].opcode != NULL; i++)
	{
		if (strcmp(inst[i].opcode, opcode) == 0)
		{
			inst[i].f(stack, line_num);
			return;
		}
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
	exit(EXIT_FAILURE);
}
