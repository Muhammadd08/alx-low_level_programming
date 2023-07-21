#include "main.h"

/**
 * print_triangle - check the code for Holberton School students.
 *@size:character
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i;
	int j;
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
