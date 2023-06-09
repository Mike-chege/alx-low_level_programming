#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: Is the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *val_n, *arry;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			val_n = ht->array[i];
			while (val_n != NULL)
			{
				arry = val_n->next;
				free(val_n->key);
				free(val_n->value);
				free(val_n);
				val_n = arry;
			}
		}
	}
	free(head->array);
	free(head);
}
