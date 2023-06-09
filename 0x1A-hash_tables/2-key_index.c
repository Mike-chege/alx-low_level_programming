#include "hash_tables.h"

/*
 * key_index - gets the index of the key given
 * @key: contains the key
 * @size: hash table's size
 *
 * Return: The index key (hash_djb2)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
