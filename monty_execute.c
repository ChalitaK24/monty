#include "monty.h"

void execute_inst(char *opcode, char *arg, stack_t **stack, unsigned int line_num)
{
	instruction_t instructions[]{
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

