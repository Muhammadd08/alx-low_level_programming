#include "main.h"
/**
 * _strchr - searches for the first occurrence of the character c,
 * in the string pointed to by the argument s.
 * @s : This is the C string to be scanned.
 * @c : This is the character to be searched in s.
 *
 * Return: arrayy of char type (s).
 */
char *_strchr(char *s, char c)
{
	int i;

	if (*s == '\0')
	{
		return ('\0');
	}
	if (c == '\0')
	{
		return ('\0');
	}

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
