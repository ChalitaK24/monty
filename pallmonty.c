#include "monty.h"

/**
 * pall_m - prints all values in the stack begining from the top.
 *
 * Return: none
 */

void pall_m(stack_t **stack, unsigned int line_num)
{
	stack_t *now = *stack;

	while (now != NULL)
	{
		printf("%d\n", now->n);
		now = now->next;
	}
}
