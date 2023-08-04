#include "main.h"
/*
 * is_prime_number - checks if a number is prime.
 * @n: integer.
 *
 * return: (1) if the number is a prime number,
 * (0) otherwise
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n <= 3)
	{
		return (0);
	}
	return (1);
}
