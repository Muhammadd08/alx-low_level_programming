#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t m;
	dog_t *ptr = &m;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	if (ptr == NULL)
		return(NULL);
	return (ptr);
}
