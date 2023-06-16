#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the nth index of a doubly linked list.
 * @h: Pointer to the head of the list.
 * @idx: The index of the node to delete.
 * Return: 1 (success), -1 (failure).
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	unsigned int counter = 0;
	dlistint_t *currentNode = *h;

	while (currentNode)
	{
		/* If it's the first node */
		if (idx == 0)
		{
			*h = currentNode->next;
			free(currentNode);
			return (1);
		}

		if (counter == idx)
		{
			/* If it's the last node */
			if (currentNode->next == NULL)
			{
				currentNode->prev->next = NULL;
				free(currentNode);
				return (1);
			}

			currentNode->prev->next = currentNode->next;
			currentNode->next->prev = currentNode->prev;
			free(currentNode);
			return (1);
		}

		counter++;
		currentNode = currentNode->next;
	}

	return (-1);
}
