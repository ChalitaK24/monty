#include "monty.h"

/**
 * swap_m - swaps the top two elements of the stack
 *
 *
 * Return: n
 */

void swap_m(stack_t **stack, unsigned int line_num)
{
	stack_t *fst = *stack;
        stack_t *snd = (*stack)->next;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can;t swap, stack top short\n", line_num);
		exit(EXIT_FAILURE);
	}

	fst->next = snd->next;

	if (snd->next != NULL)
	{
		snd->next->prev = fst;
	}

	snd->next = fst;
	snd->prev = fst->prev;
	fst->prev = snd;

	*stack = snd;
}
