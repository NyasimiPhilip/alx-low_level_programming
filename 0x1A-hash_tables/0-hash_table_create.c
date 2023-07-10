#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table instance.
 * @size: The size of the hash table array.
 * Return: If memory allocation fails - NULL.
 * Otherwise - a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int index;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		table->array[index] = NULL;
	}
	return (table);
}
