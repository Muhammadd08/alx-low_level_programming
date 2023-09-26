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
	listint_t *curr, *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((*head) == NULL)
	{
		if (idx == 0)
		{
			(*head) = new;
			new->next = NULL;
			return (new);
		}
		else
			return (NULL);
	}
	curr = *head;
	idx--;
	while (i < idx)
	{
		curr = curr->next;
		if (curr == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
