#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line
 * @n: Number of time the character
 */

void print_diagonal(int n)
{
	int i;
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
