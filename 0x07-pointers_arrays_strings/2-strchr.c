#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s : This is the C string to be scanned.
 * @c : This is the character to be searched in s.
 *
 * Return: arrayy of char type (s).
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}

	}
	return ('\0');
}
