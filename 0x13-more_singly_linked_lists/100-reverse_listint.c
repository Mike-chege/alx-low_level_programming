#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses
 * a listint_t linked list
 * @head: head of linked list
 *
 * Return: node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *prev_node;

	prev_node = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next_node;
		(*head)->next_node = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);

}
