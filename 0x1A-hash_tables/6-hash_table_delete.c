#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_node = NULL;
	unsigned long int i = 0;

	if (ht)
	{
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				tmp_node = ht->array[i];
				ht->array[i] = ht->array[i]->next;

				if (tmp_node->value)
					free(tmp_node->value);
				if (tmp_node->key)
					free(tmp_node->key);
				free(tmp_node);
			}
			free(ht->array[i]);
			i++;
		}
		free(ht->array);
		free((void *)ht);
	}
}
