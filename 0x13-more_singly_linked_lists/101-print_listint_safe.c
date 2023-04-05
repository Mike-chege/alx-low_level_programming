#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = NULL;
	const listint_t *m_n = NULL;
	size_t counter = 0;
	size_t new_n;

	node = head;
	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		counter++;
		node = node->next;
		m_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (node == m_n)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (counter);
			}
			m_n = m_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
