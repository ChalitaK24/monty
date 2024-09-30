#include "monty.h"

/**
 * add_m -adds the top two elements of the
 * stack and stores the result in the second top elemen
 * @stack: stack of the linked list
 * @line_num: line number
 * Return: none
 */

void add_m(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop_m(stack, line_num);
}
