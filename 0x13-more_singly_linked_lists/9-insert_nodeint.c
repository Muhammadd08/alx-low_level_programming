#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head of linked list.
 * @idx: index of the list where the new node should be added.
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *curr = *head, *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = NULL;
		(*head) = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
		i++;
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
