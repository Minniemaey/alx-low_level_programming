#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning of a list
  *
  * @head: the first node of list
  * @n: int to insert in new node
  * Return: address of new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (!head)
		return (NULL);

	if (head)
		node->next = *head;
	*head = node;
	return (node);
}
