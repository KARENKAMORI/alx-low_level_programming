#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 *
 * @size: Array size
 *
 * Return: new hash_table, or Failure: NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int i = 0;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht)
	{
		new_ht->size = size;
		new_ht->array = malloc(sizeof(hash_node_t *) * size);
		if (!new_ht->array)
		{
			free(new_ht);
			return (NULL);
		}

		while (i < size)
		{
			new_ht->array[i] = NULL;
			i++;
		}
	}

	return (new_ht);
}
