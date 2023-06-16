/*
 * File: 7-insert_dnodeint.c
 */

#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index, int num)
{
	dlistint_t *temp = *head, *newNode;

	if (index == 0)
		return (add_dnodeint(head, num));

	for (; index != 1; index--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(head, num));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = num;
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}






