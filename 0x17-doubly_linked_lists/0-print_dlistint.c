#include "lists.h"

/**
 * print_dlistint - print the elements of a dlistint_t list
 * @h: pointer to the head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
