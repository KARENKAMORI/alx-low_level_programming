#include "hash_tables.h"

/**
 * hash_table_print - Function printing a hash table.
 * @ht: the hash table to print pointer.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the hash table array.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char flag_comma = 0;
	hash_node_t *n;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag_comma == 1)
				printf(", ");

			n = ht->array[i];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			flag_comma = 1;
		}
	}
	printf("}\n");
}
