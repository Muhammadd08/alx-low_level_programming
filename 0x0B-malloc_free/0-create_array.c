#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @c: specific char.
 * @size: the size of the memory to print.
 *
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return ('\0');
	}

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return ('\0');
	}


	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
