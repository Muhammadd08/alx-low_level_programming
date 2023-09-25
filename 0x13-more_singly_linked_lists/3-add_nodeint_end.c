#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node,
 * at the end of a listint_t list.
 * @head: pointer to head of linked list.
 * @n: value of the node.
 * Return: the address of the new element,
 * or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	return (new);
}
