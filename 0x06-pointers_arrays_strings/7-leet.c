#include "main.h"
/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int i;
	int j;
	char *c;
	char *ch;

	ch = "4433007711";
	c = "aAeEoOtTlL";
	i = 0;


	while (s[i] != '\0')
	{
		j = 0;

		while (j < 10)
		{
			if (c[j] == s[i])
			{
				s[i] = ch[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}

