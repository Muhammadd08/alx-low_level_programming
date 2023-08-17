#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: name of the person.
 * @f: pointer to function.
 * @char: pointer to char.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char*))
{
	int i;

	if (*name != '\0')
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			_putchar(name[i]);
		}
	}
	(*f)(name);
}
