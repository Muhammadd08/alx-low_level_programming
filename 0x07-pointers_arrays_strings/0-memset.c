#include "main.h"
/**
 * _memset -  fills memory with a constant byte.
 * @b :  the constant byte.
 * @n : bytes of the memory area pointed to.
 * @s : returned value.
 *
 * Return: arrayy of char type (s).
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
