#include "monty.h"

/**
 * free_st - cleans up by freeing any allocated memory
 *
 * Return: no
 */

void free_st(stack_t *stack)
{
	stack_t *now = stack;

	while (now != nULL)
	{
		stack_t *tmp = now;
		now = now->next;
		free(tmp);
	}
}
