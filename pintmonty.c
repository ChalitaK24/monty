#include "monty.h"

/**
 * pint_m - print the value of the top stack followed by newlin.
 *
 *
 * Return: n
 */

void pint_m(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	else
	{
		printf("%d\n", (*stack)->n);
	}
}
