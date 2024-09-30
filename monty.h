#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

#define MONTY_ERROR_NONE 0
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_num);
} instruction_t;


void execute_inst(char *opcode, stack_t **stack, unsigned int line_num);
void process_ln(char *line, unsigned int line_num, stack_t **stack);
void push_m(stack_t **stack, unsigned int line_num);
void pint_m(stack_t **stack, unsigned int line_num);
void pall_m(stack_t **stack, unsigned int line_num);
void pop_m(stack_t **stack, unsigned int line_num);
void swap_m(stack_t **stack, unsigned int line_num);
int read_mfile(FILE *file, stack_t **stack);
void free_st(stack_t *stack);
void nop_m(stack_t **stack, unsigned int line_num);
void sub_m(stack_t **stack, unsigned int line_num);
void add_m(stack_t **stack, unsigned int line_num);

ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream);
int main(int ac, char** av);

#endif
