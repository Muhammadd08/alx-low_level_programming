#include "main.h"
#include <stdio.h>
/**
* main - prints all arguments it receives.
* @argc: contains the number of arguments passed to the program.
* @argv: one-dimensional array of strings,
* Each string is one of the arguments that was passed to the program.
* Return: always (0).
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
