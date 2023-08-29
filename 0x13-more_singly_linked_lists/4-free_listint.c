#include "lists.h"

/**
  * free_listint - function that frees a list
  *
  * @head: head of list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *tp;

	if (!head)
		return;
	while (head->next)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
	free(head);
}
