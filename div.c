#include "monty.h"
/**
 * f_div - divides the top two elements of the stack
 * @hed: the stack head
 * @count: line number counter
 * Return: no return
*/

void f_div(stack_t **hed, unsigned int count)
{
	stack_t *h;
	int len = 0, aux;

	h = *hed;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hed);
		exit(EXIT_FAILURE);
	}
	h = *hed;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hed);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*hed = h->next;
	free(h);
}
