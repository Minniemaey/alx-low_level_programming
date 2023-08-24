#include "lists.h"

/**
 *list_len - prints number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
