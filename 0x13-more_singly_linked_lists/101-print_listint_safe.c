#include "lists.h"

/**
 * print_listint_safe - function that prints a safe version linked list
 * @head: list to print
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t a = 0, b = 0;
	const listint_t *node, *h;

	h = head;
	node = head;
	while (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == head->next)
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			a++;
			break;
		}
		head = head->next;
		while (b < a && node)
		{
			if (head == node)
			{
				printf("-> [%p] %d\n", (void *) head, head->n);
				if (head != head->next)
					a++;
				return (a);
			}
			node = node->next;
			b++;
		}
		node = h;
		b = 0;
		a++;
	}
	return (a);
}
