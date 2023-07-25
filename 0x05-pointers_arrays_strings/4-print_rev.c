#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i;
	int l;
	
	l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}

	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
