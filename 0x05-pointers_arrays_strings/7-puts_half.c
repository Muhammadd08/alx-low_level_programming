#include "main.h"

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
	len = i;
	if (len % 2 == 0)
	{
		len2 = len / 2;
		while (len2 <= len)
		{
			_putchar(str[len2]);
			len2++;
		}
	}
	else if (len % 2 != 0)
	{
		len2 = (len - 1) / 2;
		while (len2 <= len)
		{
			_putchar(str[len2]);
			len2++;
		}
	}
	_putchar('\n');
}
