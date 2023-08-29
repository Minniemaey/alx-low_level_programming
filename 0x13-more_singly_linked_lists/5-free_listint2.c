#include "lists.h"

/**
  * free_listint2 - frees a list and sets the head to NULL
  *
  * @head: pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *new_head;

	if (!(*head))
		return;
	if (!head)
		return;

	while ((*head)->next)
	{
		new_head = (*head)->next;
		free(*head);
		*head = new_head;
	}
	free(*head);
	*head = NULL;
}
