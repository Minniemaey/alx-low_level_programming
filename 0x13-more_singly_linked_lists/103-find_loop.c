#include "lists.h"

/**
 * find_listint_loop - function that finds the loop
 * @head: head node of list
 *
 * Return: pointer to loop or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev, *curr;
	
	curr = head;
	prev = head;
	while (head && curr && curr->next)
	{
		head = head->next;
		curr = curr->next->next;

		if (head == curr)
		{
			head = prev;
			prev =  curr;
			while (1)
			{
				curr = prev;
				while (curr->next != head && curr->next != prev)
				{
					curr = curr->next;
				}
				if (curr->next == head)
					break;

				head = head->next;
			}
			return (curr->next);
		}
	}

	return (NULL);
}
