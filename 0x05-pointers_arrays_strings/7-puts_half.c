#include "main.h"
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i;
	int len;
	int len2;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	if (len % 2 == 0)
	{
		len2 = len / 2;
		while (len2 <= len)
		{
			len2++;
			_putchar(str[len2]);
		}
	}
	else if (len % 2 != 0)
	{
		len2 = (len - 1) / 2;
		while (len2 <= len)
		{
			len2++;
			_putchar(str[len2]);
		}
	}
	_putchar('\n');
}
