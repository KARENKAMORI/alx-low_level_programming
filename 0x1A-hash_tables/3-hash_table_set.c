#include "hash_tables.h"

/**
 * hash_table_add - adds to @ht hash table an element when it doesn't exist
 *
 * @key: none-empty key
 * @new_value: duplicated key-associated value
 *
 * Return: new node, if fails: NULL
 */

hash_node_t *hash_table_add(const char *key, char *new_value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_value);
		return (NULL);
	}

	new_node->key = strdup(key);
	new_node->value = new_value;
	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		free(new_value);
		return (NULL);
	}
	return (new_node);
}

/**
 * hash_table_set - sets or adds an element to @ht hash table
 *
 * @ht: where to add or update the key/value to
 * @key: none-empty key
 * @value: key associated value
 *
 * Return: Success: 1, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node = NULL, *tmp_node = NULL;
	char *new_value = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[i];

	new_value = strdup(value);
	if (!new_value)
		return (0);

	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = new_value;
			break;
		}
		tmp_node = tmp_node->next;
	}

	if (!tmp_node)
	{
		new_node = hash_table_add(key, new_value);
		if (!new_node)
			return (0);
		new_node->next = ht->array[i];
		ht->array[i] = new_node;
	}

	return (1);
}
