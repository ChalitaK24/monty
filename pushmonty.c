#include "monty.h"

/**
 * push_m - adds an integer to the stack
 *
 *
 * Return: new code
 */

void push_m(stack_t **stack, unsigned int line_num)
{
	char *arg = NULL;
	int value = atoi(arg);
        stack_t *new_node = malloc(sizeof(stack_t));

	if (arg == NULL || !isdigit(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}
