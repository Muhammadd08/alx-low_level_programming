#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to head of linked list.
 * Return: always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
	head = NULL;
}
