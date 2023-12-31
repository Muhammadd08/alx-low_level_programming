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
	i--;
	return (i);
}
/**
 * print_binary - calculate number of digits.
 * @n: number we want to calculate it's digit.
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long int s = _shifts(n);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (; s >= 1; s--)
	{
		if (n & (1 << s))
			_putchar('1');
		else
			_putchar('0');
	}
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
