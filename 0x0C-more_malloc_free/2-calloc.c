#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of objects.
 * @size: size of each object.
 *
 * Return: On success, returns the pointer to the beginning of newly,
 * allocated memory. To avoid a memory leak,
 * the returned pointer must be deallocated with free() or realloc().
 *On failure, returns a null pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr0, *ptr;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr0 = malloc(size);
	if (ptr0 == NULL)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	if (ptr0 == NULL)
		return (NULL);
	c = ptr;
	for (i = 0; i <= (size * nmemb); i++)
	{
		c[i] = '0';
	}
	return (ptr);
}