#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: head of linked list
 * @index: index to delete
 *
 * Return: success 1, failure -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *prevnode;

	if (head == NULL || *head == NULL)
		return (-1);
	newnode = *head;
	prevnode = *head;
	if (index == 0)
	{
		*head = newnode->next;
		free(newnode);
		return (1);
	}
	i = 0;
	while (newnode->next != NULL)
	{
		if (i == index)
		{
			prevnode->next = newnode->next;
			free(newnode);
			return (1);
		}
		prevnode = newnode;
		newnode = newnode->next;
		i++;
	}
	if (i == index)
	{
		prevnode->next = NULL;
		free(newnode);
		return (1);
	}
	return (-1);
}
