#include "main.h"
/**
* _strstr - function finds the first occurrence of the substring,
* needle in the string haystack.
* @haystack : This is the main C string to be scanned.
* @needle : This is the small string to be searched with-in haystack string.
*
* Return: arrayy of char type (haystack).
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;
	int count;

	count = 0;

	while (needle[count] != '\0')
	{
		count++;
	}

	if (count == 0)
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		if (haystack[i] == needle[0])
		{
			k = i;

			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[k])
				{
					j++;
					k++;
					if (needle[j] == '\0')
					{
						haystack = &haystack[i];
						return (haystack);
					}
				}
				else
				{
					break;
				}
			}
		}
	}
	return ('\0');
}
