#include "lists.h"
#include <string.h>


/**
 * add_node - counts the number of elements in a linked list_t list.
 * @head: head of the linked list.
 * @str: value of new node.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free (new);
		return (NULL);
	}
	while (str[length])
		length++;
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
