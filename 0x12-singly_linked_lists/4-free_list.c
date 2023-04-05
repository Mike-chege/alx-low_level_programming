#include "lists.h"

/**
 * free_list - frees a lnked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *new_node;

	while (head)
	{
		new_node = head->next;
		free(head->str);
		free(head);
		head = new_node;
	}
}
