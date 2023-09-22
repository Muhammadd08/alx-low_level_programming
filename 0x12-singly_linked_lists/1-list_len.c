#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: singly linked list.
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t Counter = 0;

	ptr = h;
	while (ptr != NULL)
	{
		Counter++;
		ptr = ptr->next;
	}
	return (Counter);
}
