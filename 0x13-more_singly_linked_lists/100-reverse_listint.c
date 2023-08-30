#include "lists.h"

/**
  * reverse_listint - function reverses a linked list
  *
  * @head: pointer to head node
  *
  * Return: pointer to first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!(*head) || !head)
		return (NULL);

	prev = NULL;
	next = *head;

	while (next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
