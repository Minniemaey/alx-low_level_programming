#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: *ptr to header node
 * @idx: index to insert the new node
 * @n: value of new node
 * Return: pointer to new node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *next, *new, *tmp;
	unsigned int num;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *h;
		for (num = 0; num < idx - 1 && tmp != NULL; num++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = tmp;
		next = tmp->next;
		tmp->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
