#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: integer.
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1 = 0, count2 = 0, i = 0, j = 0;
	char *ptr;

	if (s1 != NULL)
		for (; s1[count1]; count1++)
			;
	if (s2 != NULL)
		for (; s2[count2]; count2++)
			;
	ptr = malloc(sizeof(char) * (count1 + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	if (n < count2)
	{
		ptr = realloc(ptr, sizeof(char) * (count1 + n + 1));
		if (ptr == NULL)
			return (NULL);
		for (j = 0; j < n; j++, i++)
		{
			ptr[i] = s2[j];
		}
	}
	else
	{
		ptr = realloc(ptr, sizeof(char) * (count1 + count2 + 1));
		if (ptr == NULL)
			return (NULL);
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			ptr[i] = s2[j];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
