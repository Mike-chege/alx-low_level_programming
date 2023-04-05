#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node;

	if (head == NULL){
		return;
	}
	new_node = *head;
	while (new_node != NULL)
	{
		new_node = new_node->next;
		free(*head);
		*head = new_node;
	}
	*head = NULL;
}
