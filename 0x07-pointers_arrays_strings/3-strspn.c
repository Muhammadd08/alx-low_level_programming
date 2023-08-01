#include "main.h"

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
