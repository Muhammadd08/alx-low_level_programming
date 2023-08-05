#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - print the result of the multiplication, followed by a new line
* @argc: contains the number of arguments passed to the program.
* @argv: one-dimensional array of strings,
* Each string is one of the arguments that was passed to the program.
* Return: always (0).
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
