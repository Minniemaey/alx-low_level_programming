#include "lists.h"

/**
  * sum_listint - function that returns sum of all data n
  *
  * @head: pointer to head node
  * Return: sum or  0 if empty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
