#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{        return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	memset(ht->array, 0, sizeof(shash_node_t *) * size);
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node;
	shash_node_t *prev;
	shash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	prev = NULL;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		prev = node;
		node = node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (prev == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		prev->next = new_node;
	}
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		shash_node_t *cur = ht->shead;
		while (cur->snext != NULL && strcmp(key, cur->snext->key) >= 0)
		{
			cur = cur->snext;
		}
		new_node->sprev = cur;
		new_node->snext = cur->snext;
		cur->snext = new_node;
		if (new_node->snext == NULL)
		{
			ht->stail = new_node;
		}
		else
		{
			new_node->snext->sprev = new_node;
		}
	}
	return (1);
}
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

    node = ht->shead;
    printf("{");
    while (node != NULL)
    {
	    printf("'%s': '%s'", node->key, node->value);
	    node = node->snext;
	    if (node != NULL)
	    {
		    printf(", ");
	    }
    }
    printf("}\n");
}
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	if (ht == NULL)
	{
		return;
	}
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *node = ht->array[i];
		while (node != NULL)
		{
			shash_node_t *next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);
}
