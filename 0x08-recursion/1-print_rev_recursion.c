#include "main.h"
/**
 * _print_rev_recursion - function that take a string,
 * and prints a string in reverse.
 * @s: string we want to reverse.
 *
 * Return: none.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	if (*(s + 1) != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
