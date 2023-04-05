#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *new_node;

	sum = 0;
	if (head == NULL)
		return (sum);
	new_node = head;
	while (new_node != NULL)
	{
		sum += new_node->n;
		node = new_node->next;
	}
	return (sum);
}
