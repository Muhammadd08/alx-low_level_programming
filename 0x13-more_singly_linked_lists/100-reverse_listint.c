#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to head of linked list.
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = *head, *tmp = *head;

	if ((*head) == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return ((*head));
	(*head) = (*head)->next->next;
	ptr = ptr->next;
	tmp->next = NULL;
	while ((*head)->next)
	{
		ptr->next = tmp;
		tmp = ptr;
		ptr = (*head);
		(*head) = (*head)->next;
	}
	ptr->next = tmp;
	(*head)->next = ptr;
	return ((*head));
}
