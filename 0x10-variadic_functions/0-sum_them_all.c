#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters.
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j, count = 0;

	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(list, int);
		count += j;
	}
	va_end(list);
	return (count);
}
