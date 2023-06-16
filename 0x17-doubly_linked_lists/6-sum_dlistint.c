#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of data in a doubly linked list.
 * @h: Pointer to the head of the list.
 * Return: The sum of the data.
 */
int sum_dlistint(dlistint_t *h)
{
	int totalSum = 0;
	dlistint_t *currentNode = h;

	while (currentNode)
	{
		totalSum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (totalSum);
}
