#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head of linked list.
 * @index: the index of the node, starting at 0.
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (index != i)
	{
		current = current->next;
		i++;
	}
	return (current);
}
