#include "main.h"

/**
 * _isdigit - If is 0 to 9 return 1, if not return 0, function check a digit
 *
 * @c: this is the entry
 *
 * Return: 0
 *
 **/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
