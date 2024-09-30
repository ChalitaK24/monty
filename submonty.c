#include "monty.h"

/**
 * sub_m - subtracts the top element from the second top element of the stack
 *
 * Return: nothing
 */

void sub_m(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
	exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;
	pop_m(stack, line_num);
}
