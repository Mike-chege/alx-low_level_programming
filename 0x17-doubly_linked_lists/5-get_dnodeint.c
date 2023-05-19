#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlintint_t *j;

	j = head;
	for (i = 0; i < index && j != NULL; i++)
		j = j->next;

	if (i == index && j != NULL)
		return (j);
	else
		return (NULL);
}

