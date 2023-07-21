#include "main.h"

/**
 * print_square - check the code for Holberton School students.
 *@size:character
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}

}
