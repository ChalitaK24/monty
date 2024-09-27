#include "monty.h"

void execute_inst(char *opcode, char *arg, stack_t **stack, unsigned int line_num)
{
	instruction_t inst[]{
		{"push", push_m},
		{"pall", pall_m},
		{NULL, NULL}
	};


	for (int i = 0; inst[i].opcode !+ NULL; i+)
	{
		if (strcmp(inst[i].opcode, opcode) == 0
		{
			inst[i].f(stack, line_num), arg);
			return;
		}
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
	exit(EXIT_FAILURE);
}
