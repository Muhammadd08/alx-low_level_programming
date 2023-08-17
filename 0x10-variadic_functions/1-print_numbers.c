#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int j;

	va_list list;
	va_start(list, n);
	printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				printf("%c", separator[j]);
			}
		}
		printf("%d", va_arg(list, int));
	}
	printf("\n");
}
