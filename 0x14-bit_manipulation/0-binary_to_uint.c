#include "main.h"

/**
 * _length - calculate length of string.
 * @s: pointing to a string of 0 and 1 chars.
 * Return: integer of string.
 */
int _length(const char* s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] != '0' && s[i] != '1')
			return (-1);
		i++;
	}
	i--;
	return (i);
}
/**
 * powBit - calculate pow of integer j.
 * @j: integer we want to pow.
 * Return: pow of integer
 */
int powBit(int j)
{
	int x = 1;
	while (j)
	{
		x *= 2;
		j--;
	}
	return (x);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0,
 * or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int length, j = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	length = _length(b);
	if (length == -1)
		return (0);
	
	while (length >= 0)
	{
		if (b[length] == '1')
		{
			result += powBit(j);
		}
		j++;
		length--;
	}

	return (result);
}
