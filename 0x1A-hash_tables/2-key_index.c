#include "hash_tables.h"
/**
 * key_index - Calculates the index of a key using a custom algorithm
 * @key: The key
 * @size: The size of the array
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
