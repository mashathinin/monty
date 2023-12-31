#include "monty.h"
/**
 * multi - multiplies the numbers
 *@stack: pointer to a top node
 *@n_line: opcode line number
 */
void multi(stack_t **stack, unsigned int n_line)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error_exit2(8, n_line, "mul");

	(*stack) = (*stack)->next;
	sum = (*stack)->n * (*stack)->prev->n;
	free((*stack)->prev);
	(*stack)->prev = NULL;
	(*stack)->n = sum;
}
