#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	list *ptr;
	size_t Counter = 0;

	ptr = h;
	while (ptr != NULL)
	{
		Counter++;
		ptr = ptr->next
	}
	return (Counter);
}
