#include "lists.h"

/**
 * add_nodeint adds a new node at the beggining of a listinnt_list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return NULL;
    }
    new_node->n = n;
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}
