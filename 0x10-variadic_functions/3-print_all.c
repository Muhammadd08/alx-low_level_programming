#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print char.
 * @sep: separator.
 * @pc: argument pointer.
 *
 * Return: Always 0.
 */
void print_char(char *sep, va_list pc)
{
	printf("%s%c", sep, va_arg(pc, int));
}

/**
 * print_integer - print integer.
 * @sep: separator.
 * @pi: argument pointer.
 *
 * Return: Always 0.
 */
void print_integer(char *sep, va_list pi)
{
	printf("%s%d", sep, va_arg(pi, int));
}

/**
 * print_string - print string.
 * @sep: separator.
 * @ps: argument pointer.
 *
 * Return: Always 0.
 */
void print_string(char *sep, va_list ps)
{
	char *stg = va_arg(ps, char *);

	switch ((int)(!stg))
	case 1:
		stg = "(nil)";

	printf("%s%s", sep, stg);
}

/**
 * print_float - print float.
 * @sep: separator.
 * @pf: argument pointer.
 *
 * Return: Always 0.
 */
void print_float(char *sep, va_list pf)
{
	printf("%s%f", sep, va_arg(pf, double));
}

/**
 * print_all - Entry Point
 * @format: a list of types of arguments passed to the function.
 *
 * Return: Always 0.
 */
void print_all(const char *const format, ...)
{
	va_list list;
	char *separator = "";
	int j, i = 0;
	type types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"d", print_integer},
		{"s", print_string},
		{"f", print_float}
	};
	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 5)
		{
			if (types[j].z[0] == format[i])
			{
				types[j].pf(separator, list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
