/*
 * File: 0-print_dlistint.c
 */
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @head: The head of the dlistint_t list. *
 * Return: The number of nodes in the list.
 */
size_t count_and_print_dlistint(const dlistint_t *head)
{
  size_t nodeCount = 0;

  while (head)
  {
    nodeCount++;
    printf("%d\n", head->n);
    head = head->next;
  }
  return nodeCount;
}
