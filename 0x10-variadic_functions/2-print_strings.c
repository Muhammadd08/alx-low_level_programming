#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of strings passed to the function.
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int j;
	va_list list;

	va_start(list, n);
	printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				printf("%c", separator[j]);
			}
		}
		printf("%s", va_arg(list, char *));
	}
	printf("\n");
}
