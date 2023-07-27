#include "main.h"
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = i; src[k] != '\0'; j++)
	{
		dest[j] = src[k];
		k++;
	}
	k--;	
	dest[k] = '\0';
	return (dest);
}
