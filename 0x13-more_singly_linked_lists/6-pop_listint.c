#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to head of linked list.
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *current = *head;

	if (*head == NULL)
		return (0);
	x = (*head)->n;
	(*head) = (*head)->next;
	free(current);
	return (x);
}
