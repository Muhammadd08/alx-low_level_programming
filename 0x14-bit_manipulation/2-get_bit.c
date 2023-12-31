#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number we want to calculate it's digit.
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index,
 *or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 31)
		return (-1);
	for (i = 0; i != index; i++)
		n = n >> 1;
	if (n & 1)
		return (1);
	return (0);
}
