#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t Counter = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		Counter++;
		ptr = ptr->next;
	}
	return Counter;
}
