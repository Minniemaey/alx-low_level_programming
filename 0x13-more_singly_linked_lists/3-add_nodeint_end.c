#include "lists.h"

/**
  * add_nodeint_end - adds a new node at end of list
  *
  * @head: pointer to head node
  * @n: int to make content of new node
  * Return: address of new element or NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *node;

	end_node = malloc(sizeof(listint_t));
	if (!end_node)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (!head)
		return (NULL);

	if (*head)
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}
		node->next = end_node;
	}
	else
	{
		*head = end_node;
	}

	return (end_node);
}
