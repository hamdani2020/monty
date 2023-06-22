#include "monty.h"
/**
 * addnode - add node to head stack
 * @hed: head stack
 * @n: new_value
 * Return: 0
*/

void addnode(stack_t **hed, int n)
{

	stack_t *new_node, *au;

	au = *hed;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (au)
		au->prev = new_node;
	new_node->n = n;
	new_node->next = *hed;
	new_node->prev = NULL;
	*hed = new_node;
}
