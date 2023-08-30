#include "lists.h"
/**
 * _realloc - reallocates memory for pointers
 * @list: list to reallocate
 * @size: size of the new list
 * @new: new node
 *
 * Return: pointer to new list
 */

listint_t **_realloc(listint_t **list, size_t size, listint_t *n)
{
	listint_t **new;
	size_t i;

	new = malloc(size * sizeof(listint_t *));
	if (new == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new[i] = list[i];
	new[i] = n;
	free(list);
	return (new);
}

/**
 * free_listint_safe - frees list with loops
 * @h: pointer to head node
 *
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **head)
{
	size_t i, j = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (j);
	while (*head != NULL)
	{
		for (i = 0; i < j; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (j);
			}
		}
		j++;
		list = _realloc(list, j, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (j);
}
