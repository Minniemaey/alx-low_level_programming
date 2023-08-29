#include "lists.h"

/**
  * insert_nodeint_at_index - function inserts a node
  *
  * @head: pointer to node of list head
  * @idx: index to add node
  * @n: node data
  * Return: address of new node or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp, *prev;
	unsigned int a;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	tmp = *head;

	for (a = 0; a < idx && tmp; a++)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (a == idx)
	{
		node->n = n;
		node->next = tmp;
		if (a != 0)
			prev->next = node;
		else
			*head = node;
	}
	else
	{
		return (NULL);
	}
	return (node);
}
