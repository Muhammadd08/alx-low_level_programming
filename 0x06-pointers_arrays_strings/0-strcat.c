#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;
	int len1;
	int len2;

	i = 0;
	k = 0;
	len1 = 0;
	len2 = 0;

	while (dest[i] != '\0' || src[i] != '\0')
	{
		if (dest[i] != '\0')
		{
			len1++;
		}
		if (src[i] != '\0')
		{
			len2++;
		}
		i++;
	}
	/*len1--;*/
	for (j = len1; j <= (len1 + len2); j++)
	{
		dest[j] = src[k];
		k++;
	}
	return (dest);
}
