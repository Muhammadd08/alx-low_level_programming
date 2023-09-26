#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to head of linked list.
 * @index: index of the list where the new node should be added.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = *head, *fre;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(curr);
		return (1);
	}
	while (i < (index - 1))
	{
		if (curr == NULL)
			return (-1);
		curr = curr->next;
		i++;
	}
	fre = curr->next;
	curr->next = curr->next->next;
	free(fre);
	return (1);
}
