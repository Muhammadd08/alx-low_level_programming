#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int i;
	int j;
	int len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j < len; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
