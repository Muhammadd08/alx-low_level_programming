#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	if (owner == NULL)
		return (NULL);
	ptr->owner = owner;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
