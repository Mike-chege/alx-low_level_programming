#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to the hash table
 * Description: If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *val_n;
	unsigned char expc = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (expc == 1)
				printf(", ");

			val_n = ht->array[i];
			while (val_n != NULL)
			{
				printf("'%s': '%s'", val_n->key, val_n->value);
				val_n = val_n->next;
				if (val_n != NULL)
					printf(", ");
			}
			expc = 1;
		}
	}
	printf("}\n");
}
