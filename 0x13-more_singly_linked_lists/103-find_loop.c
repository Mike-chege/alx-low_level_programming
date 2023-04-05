#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *zero = head;
	if (!head)
		return (NULL);

	while (one && zero && zero->next)
	{
		zero = zero->next->next;
		one = one->next;
		if (zero == one)
		{
			one = head;
			while (one != zero)
			{
				one = one->next;
				zero = zero->next;
			}
			return (zero);
		}
	}

	return (NULL);
}
