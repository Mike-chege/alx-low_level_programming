#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data
 * @head: head of linked list
 *
 * Return: node data (integer)
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	new = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = new->next;
	n = new->n;
	free(new);
	return (n);
}
