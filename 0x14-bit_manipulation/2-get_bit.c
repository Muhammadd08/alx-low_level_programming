#include "main.h"
/**
 * _shifts - calculate number of digits.
 * @n: number we want to calculate it's digit.
 * Return: number of digits.
 */
unsigned long int _shifts(unsigned long int n)
{
	unsigned long int i;

	for (i = 0; n >= 1; i++)
	{
		n = n >> 1;
	}
	return (i - 1);
}
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number we want to calculate it's digit.
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index,
 *or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, s;

	s = _shifts(n);
	if (index > s)
		return (-1);
	for (i = 0; i != index; i++)
		n = n >> 1;
	if (n & 1)
		return (1);
	return (0);
}
