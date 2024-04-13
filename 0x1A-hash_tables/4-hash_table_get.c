#include "hash_tables.h"

/**
 * hash_table_get - retrieves a key associated value
 *
 * @ht: the hash table to look into
 * @key: the key to search for
 *
 * Return: the value associated with the element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp_node = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[i];

	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
			return (tmp_node->value);
		tmp_node = tmp_node->next;
	}

	return (NULL);
}
