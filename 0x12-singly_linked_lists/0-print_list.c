#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (null)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		x++;
	}

	return (x);
}
