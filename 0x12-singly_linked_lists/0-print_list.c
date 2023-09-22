#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list.
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int counter = 0;
	const list_t *current;

	current = h;
	while (current)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		counter++;
	}
	return (counter);
}
