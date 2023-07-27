#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*if (i == 0)
		{
			s[i] = s[i] - 32;
		}*/
		if (s[i] == '\t' || s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || ')' || s[i] == '{' || s[i] == '}')
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
