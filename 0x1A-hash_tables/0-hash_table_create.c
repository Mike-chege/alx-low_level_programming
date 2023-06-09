#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table to create
 *
 * Return: pointer to new hash_table_t in memory heap
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_t = NULL;

	hash_t = malloc(sizeof(hash_table_t));
	if (!hash_t)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t) * size);
	if (!hash_t->array)
	{
		free(hash_t);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		(hash_t->array)[i] = NULL;
	return (hash_t);
}

