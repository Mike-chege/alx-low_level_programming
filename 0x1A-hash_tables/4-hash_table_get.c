#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 * @ht: is the hash table to look into
 * @key: is the key to look for
 *
 * Return: the value associated with the element, or NULL not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *val_n;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	if (*key == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	val_n = ht->array[index];
	while (val_n && strcmp(val_n->key, key) != 0)
		val_n = val_n->next;

	return ((val_n == NULL) ? NULL : val_n->value);
}
