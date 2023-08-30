#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: head node
 *
 */
void free_list(listp_t **head)
{
	listp_t *tmp, *ntmp;

	if (head)
	{
		ntmp = *head;
		while ((tmp = ntmp) != NULL)
		{
			tmp = ntmp->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints a safe version linked list
 * @head: list to print
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listp_t *node, *ptr, *new_node;

	ptr = NULL;
	while (head != NULL)
	{
		node = malloc(sizeof(listp_t));

		if (node == NULL)
			exit(98);

		node->p = (void *)head;
		node->next = ptr;
		ptr = node;

		new_node = ptr;

		while (new_node->next != NULL)
		{
			new_node = new_node->next;
			if (head == new_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&ptr);
				return (n);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}

	free_list(&ptr);
	return (n);
}
