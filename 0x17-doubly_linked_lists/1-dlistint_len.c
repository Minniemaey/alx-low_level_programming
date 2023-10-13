#include "lists.h"

/**
 * dlistint_len - returns the element in a dlinstint list
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t t;

	for (t = 0; h != NULL; t++)
		h = h->next;
	return (t);
}
