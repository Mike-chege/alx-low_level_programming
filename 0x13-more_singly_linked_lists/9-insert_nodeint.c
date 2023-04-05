#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a
 * new node at a given position
 * @head: head of linked list
 * @idx: index to be inserted at
 * @n: integer data for inserted node
 * Return: address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeint, *new_node, *prev_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	nodeint = *head;
	prev_node = *head;
	i = 0;
	if (idx == 0)
	{
		new_node->next = nodeint;
		*head = new_node;
		return (new_node);
	}
	while (nodeint != NULL)
	{
		if (i == idx)
		{
			new_node->next = nodeint;
			prev_node->next = new_node;
			return (new_node);
		}
		prev_node = nodeint;
		nodeint = nodeint->next;
		i++;
	}
	if (idx == i)
	{
		prev_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
