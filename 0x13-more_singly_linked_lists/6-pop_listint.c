#include "lists.h"

/**
  * pop_listint - deletes head node and returns its data
  *
  * @head: pointer to head node
  * Return: value of head node
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!*head || !head)
		return (0);
	tmp = *head;
	n = (*head)->n;
	if (tmp->next)
		*head = tmp->next;
	else
		*head = NULL;
	free(tmp);
	return (n);
}
