#include "main.h"
/**
*_strncpy - a function that copies a string.
*at most n bytes of src are copied.
*if length of src is < n, additional null bytes are written to dest
*to ensure that a total of n bytes are written.
*@dest: pointer to destination string.
*@src: pointer to source string.
*@n: number of bytes to be used.
*
* Return: pointer to destination string.
*/
char* _strncpy(char* dest, char* src, int n)
{
	int i;
	int j;
	int len;
	int len2;

	j = 0;
	i = 0;
	len = 0;
	len2 = 0;

	while (dest[len2] != '\0')
	{
		len2++;
	}

	while ( src[len] != '\0')
	{
		len++;
	}
	
	while (dest[i] != '\0' && src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
	}
	if (n > len)
	{
		dest[len] = '\0';
	}
	else
	{
		dest[len2] = '\0';
	}

	return (dest);
}
