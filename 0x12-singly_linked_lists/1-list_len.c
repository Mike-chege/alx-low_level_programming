#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to the list_t list
 * 
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
