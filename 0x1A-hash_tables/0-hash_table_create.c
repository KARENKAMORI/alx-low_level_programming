#include "hash_tables.h"

/**
 * hash_table_create - Hash table creation function.
 * @size: array size
 *
 * Return: Null - if an error occurs.
 * 	else - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hasht

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (hasht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hasht->array[i] = NULL;
	return (hasht);
}
