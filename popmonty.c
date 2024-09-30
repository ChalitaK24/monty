#include "monty.h"

/**
 * pop_m - removes the top element from thr stack
 *
 *
 * Return:  1
 */

void pop_m(stack_t **stack, unsigned int line_num)
{
        stack_t *tmp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

        *stack = (*stack)->next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}

	free(tmp);
}
