#include "lists.h"

/**
 * print_dlistint -  prints all the elementsof a dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
ssize_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

