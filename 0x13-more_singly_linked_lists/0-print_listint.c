#include "list.h"

/**
 * prints all elements of a listint_t
 * @next: a pointer to the head of the listint_list to print
 *
 * Return: the  number of nodes
 *
 */
size_t print_listint(const listint_t *);
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n)
		num++;
		h = h->next;
	}

	return (num);	
}

