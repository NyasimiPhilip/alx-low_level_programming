#include "lists.h"
/**
 * dlistint_len - get number of nodes in a list
 * @h: head ptr
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *traverse = h;

	while (traverse != NULL)
	{
		node_count++;
		traverse = traverse->next;
	}
	return (node_count);
}
