#include "monty.h"
/**
* free_stack - frees the doubly linked list
* @hed: head of stack
*/
void free_stack(stack_t *hed)
{
	stack_t *ax;

	ax = hed;
	while (hed)
	{
		ax = hed->next;
		free(hed);
		hed = ax;
	}
}
