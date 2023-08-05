#include "main.h"
#include <stdio.h>
/**
* main - prints the number of arguments passed into it.
* @argc: contains the number of arguments passed to the program.
* @argv: one-dimensional array of strings,
* Each string is one of the arguments that was passed to the program.
* Return: always (0).
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", --argc);
	return (0);
}
