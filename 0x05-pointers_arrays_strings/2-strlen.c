#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	return (n);
}
