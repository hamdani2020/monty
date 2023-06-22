#include "monty.h"
/**
 * f_add - adds two elements at the top of the stack.
 * @hed: stack head
 * @dcounter: the line number
 * Return: 0
*/
void f_add(stack_t **hed, unsigned int dcounter)
{
        stack_t *a;
        int len = 0, aux;

        a = *hed;
        while (a)
        {
                a = a->next;
                len++;
        }
        if (len < 2)
        {
                fprintf(stderr, "L%d: can't add, stack too short\n", dcounter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*hed);
                exit(EXIT_FAILURE);
        }
        a = *hed;
        aux = a->n + a->next->n;
        a->next->n = aux;
        *hed = a->next;
        free(a);
}
