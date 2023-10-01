#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to integer we want to change.
 * @index: the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
	return (-1);
	i = 1 << index;
	if (*n & i)
		*n = *n ^ i;
	return (1);
}
