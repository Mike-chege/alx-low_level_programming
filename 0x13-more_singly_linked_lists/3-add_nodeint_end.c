#include<stdio.h>
#include<stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: head of linked list
 * @n: integer
 *
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *nx_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	nx_node = *head;
	while (nx_node->next != NULL)
	{
		nx_node = nx_node->next;
	}
	nx_node->next = new_node;
	return (new_node);
}
