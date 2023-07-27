#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@s: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\n')
		{
			if (s[i] == ' ' || s[i] == '\t' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\n')
			{
				s[i + 1] -= 32;
			}
			else
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
