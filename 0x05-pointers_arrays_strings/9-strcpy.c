#include "main.h"
/**
 * _strcpy - copies a string pointed to by src,
 * including the \0 character, to the buffer,
 * pointed to by dest.
 * @dest: the copied string
 * @src: the pointer to the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int len;

	len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j <= len; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
