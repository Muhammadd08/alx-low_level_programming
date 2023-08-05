#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - adds positive numbers, followed by a new line
* @argc: contains the number of arguments passed to the program.
* @argv: one-dimensional array of strings,
* Each string is one of the arguments that was passed to the program.
* Return: always (0).
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
