#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees all allocated memory.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hash_table = ht;
	hash_node_t *current_node, *temp_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				temp_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temp_node;
			}
		}
	}
	free(hash_table->array);
	free(hash_table);
}
