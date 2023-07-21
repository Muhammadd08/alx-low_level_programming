#include "main.h"

/**
 *
 * print_line - Function that draws a straight line in the terminal
 * @n: number of times of _
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	if (n <= 0)
	{
		_putchar('\n');
	}
}
