#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n).
 * @head: pointer to head of linked list.
 * Return: returns the sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);
	while (current)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
