#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of the node 
 * Return: node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = head;
	i = 0;
	while (new_node != NULL)
	{
		if (i == index)
			return (new_node);
		new_node = new_node->next;
		i++;
	}
	return (NULL);
}
