#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the null-terminated byte string to duplicate.
 *
 * Return: A pointer to the newly allocated string,
 * or a null pointer if an error occurred.
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	dup = (char *)malloc(sizeof(char) * (size - 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
