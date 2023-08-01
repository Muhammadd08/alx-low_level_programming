#include "main.h"
/**
* _strpbrk - function that finds the first character in the string s,
* that matches any character specified in accept,
* This does not include the terminating null-characters.
* @s: This is the C string to be scanned.
* @accept: This is the C string containing the characters to match.
*
* Return: arrayy of type char (s).
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		while (s[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
			j++;
		}
	}
	return ('\0');
}
