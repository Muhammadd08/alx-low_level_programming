#include "main.h"

/**
 * _isupper - If is uppercase return 1, if not return 0
 *
 * @c: this is the entry
 *
 * Return: Always 0.
 *
 **/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
