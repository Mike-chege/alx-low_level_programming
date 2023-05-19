#include "lists.h"

/**
 * print_dlistint -  prints all the elementsof a dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *i;
	size_t count = 0;

	i = h;
	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
		count++;
	}
	return (count);
}

