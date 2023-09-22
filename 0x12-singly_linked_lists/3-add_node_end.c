#include "lists.h"
#include <string.h>


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: value of the node.
 * Return: the number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newNode, *current;
    int length = 0;

    newNode = (list_t *)malloc(sizeof(list_t));
    if (newNode == NULL)
        return (NULL);
    while (str[length])
        length++;
    newNode->str = strdup(str);
    if (newNode->str == NULL)
        return (NULL);
    newNode->len = length;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
    	current = *head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    return (newNode);
}
