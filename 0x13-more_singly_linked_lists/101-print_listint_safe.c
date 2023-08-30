#include "lists.h"

/**
 * print_listint_safe - function that prints a safe version linked list
 * @head: list to print
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	long int node;

	while (head)
	{
		node = head - head->next;
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (node > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (n);
}
