/*
 * File: 3-add_dnodeint_end.c
 */
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 * @num: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int num)
{
	dlistint_t *newNode, *lastNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = num;
	newNode->next = NULL;

	if (*h == NULL)
	{
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}

	lastNode = *h;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	newNode->prev = lastNode;

	return (newNode);
}
