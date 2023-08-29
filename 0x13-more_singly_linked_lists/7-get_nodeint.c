#include "lists.h"

/**
  * get_nodeint_at_index - function that returns nth node of list
  *
  * @head: pointer to head node
  * @index: index of node to find
  * Return: node address on success or  NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	for (n = 0; n < index && head; n++)
		head = head->next;
	if (n == index)
		return (head);
	return (NULL);
}
