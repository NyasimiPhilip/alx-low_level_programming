/*
 * File: 5-get_dnodeint.c
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @h: The head of the dlistint_t list.
 * @idx: The index of the node to locate.
 * Return: If the node does not exist - NULL.
 * Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int idx)
{
	for (; idx != 0; idx--)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
	}

	return (h);
}
