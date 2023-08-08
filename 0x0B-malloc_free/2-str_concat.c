#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer points to a newly allocated space in memory,
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1 = 0, size2 = 0, size;
	char *ptr;
	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}
	size = size1 + size2 + 1;

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
