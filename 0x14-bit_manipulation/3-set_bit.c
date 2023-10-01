#include "main.h"

/**
 * powBit - calculate pow of integer j.
 * @j: integer we want to pow.
 * Return: pow of integer
 */
int powBit(unsigned int j)
{
	int x = 1;

	while (j)
	{
		x *= 2;
		j--;
	}
	return (x);
}

/**
 * _check - identify the digit.
 * @n: pointer to integer we want to change.
 * @index: the index, starting from 0 of the bit you want to set.
 * Return: position of th digit.
 */
int _check(unsigned long int *n, unsigned int index)
{
	while (index)
	{
		*n = *n >> 1;
		index--;
	}
	return (1 & *n);
}

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to integer we want to change.
 * @index: the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *N = n, x = *n;
	int ch = _check(N, index);

	if (!ch)
	{
		*n = x + powBit(index);
		return (1);
	}
	return (-1);
}
