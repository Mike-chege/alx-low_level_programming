#include<stdio.h>
#include "list.h"

/**
 * prints all elements of a listint_t
 * @next: points to the next node
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

