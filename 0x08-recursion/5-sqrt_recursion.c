#include "main.h"
/**
 * _sqrt_recursion2 - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @i: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n, (i + 1)));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt_recursion2(n, i));
}
