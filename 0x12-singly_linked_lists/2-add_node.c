#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: value of the linked list.
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *name;
	int len = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	name = strdup(str);
	if (name == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (name[len])
		len++;
	new_node->str = name;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
