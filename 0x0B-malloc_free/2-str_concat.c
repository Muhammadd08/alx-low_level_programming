#include "main.h"
#include <stdlib.h>
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

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	size = size1 + size2 + 2;

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = ' ';
	i++;
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
