#include"lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @string: neads to be duplicated
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tempnode = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode){
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tempnode->next)
		tempnode = tempnode->next;

	tempnode->next = newnode;

	return (newnode);
}
