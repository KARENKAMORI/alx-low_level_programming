#include "hash_tables.h"

/**
 * key_index - Function gets the index at which a key/value
 *      pair should be stored in a hash table array.
 * @key: The key to obtain the index of.
 * @size: The size of the hash table array.
 *
 * Return: The key index.
 * Description: djb2 algorithm is used.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
