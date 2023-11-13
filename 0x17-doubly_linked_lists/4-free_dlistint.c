#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @h: Pointer to the head of the list.
 * Return: void.
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *nextNode = NULL, *currentNode = h;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
}
