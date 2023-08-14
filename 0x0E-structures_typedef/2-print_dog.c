#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to struct dog.
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: (nil)");
	else
		printf("name: %s\n", d->name);
	if (d->age == '\0')
		printf("age: (nil)");
	else
		printf("age: %6f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)");
	else
		printf("owner: %s\n", d->owner);
}
