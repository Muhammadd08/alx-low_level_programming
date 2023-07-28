#include "main.h"
/**
 *rot13 - encodes strings using rot13.
 *@s: pointer to string.
 *
 *Return: pointer to encoded string.
 */

char *rot13(char *s)
{
	char *in;
	char *out;
	int i;
	int j;

	in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
