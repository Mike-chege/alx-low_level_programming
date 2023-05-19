#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: pointer to the head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}

