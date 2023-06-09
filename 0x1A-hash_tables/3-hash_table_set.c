#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: Pointer to the hash table to update
 * @key: The key to add
 * @value: is the value associated with the key
 *
 * Return:  1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_t;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new_t = malloc(sizeof(hash_node_t));
	if (new_t == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_t->key = strdup(key);
	if (new_t->key == NULL)
	{
		free(new_t);
		return (0);
	}
	new_t->value = value_copy;
	new_t->next = ht->array[index];
	ht->array[index] = new_t;

	return (1);
}
