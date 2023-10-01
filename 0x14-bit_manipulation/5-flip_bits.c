#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip,
 * to get from one number to another.
 * @n: integer number one.
 * @m: integer number two
 * Return:  number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int index = 1, i;
	unsigned int R = 0;

	for (i = 0; i <= 63; i++)
	{
		if (((n & index) ^ (m & index)))
			R++;
		index = index << 1;
	}
	return (R);
}
