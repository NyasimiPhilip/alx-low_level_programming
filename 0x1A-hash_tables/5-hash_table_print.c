#include "hash_tables.h"
/**
 * hash_table_print - Prints the contents of the hash table.
 * @ht: A pointer to the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char *separator;

	if (ht == NULL)
		return;
	printf("{");
	separator = "";
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("%s'%s': '%s'", separator, current->key, current->value);
			separator = ", ";
			current = current->next;
		}
	}
	printf("}\n");
}
