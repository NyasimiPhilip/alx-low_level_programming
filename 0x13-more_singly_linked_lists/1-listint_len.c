#include "lists.h"
#include <stdio.h>

/*
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node = head;

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}
