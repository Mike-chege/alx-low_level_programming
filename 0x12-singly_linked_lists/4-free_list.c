#include "lists.h"

/**
 * free_list - free the memory allocated for a linked list
 * @head: list_t list to be freed
 *
 * Retrun: void
 */
void free_list(list_t *head)
{
	list_t *current_node, *new_node;

	current_node = head;
	while (current_node != NULL)	
	{
		new_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = new_node;
	}
}
