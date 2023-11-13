#include "lists.h"

/**
 * add_dnodeint - add node at beginning of list
 * @head: double ptr to head
 * @n: data of new node.
 * Return: address of head ptr
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newNode == NULL)
		return (NULL);
	/*if no node exists at first*/
	if (temp == NULL)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
		return (*head);
	}
	else
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = temp;
		temp->prev = newNode;
		*head = newNode;
		return (*head);
	}
}
