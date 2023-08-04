#include "main.h"
/**
 * _strspn - calculates the length of the initial segment of c,
 * which consists entirely of characters in accept.
 * @s : This is the main C string to be scanned.
 * @accept : This is the string containing the list of characters.
 *
 * Return: arrayy of char type (s).
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			break;
		}

		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
			}
			j++;
		}
	}
	return (count);
}
