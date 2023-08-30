#include "lists.h"
/**
 * free_listint_safe - frees list with loops
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t loop = 0;
	int n;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		n = *h - (*h)->next;
		if (n > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			loop++;
		}
		else
		{
			*h = NULL;
			free(*h);
			loop++;
			break;
		}
	}

	*h = NULL;

	return (loop);
}
