#include "main.h"
#include <stdio.h>
/**
  * main -  prints its name, followed by a new line.
  * @argc: contains the number of arguments passed to the program.
  * @argv: a one-dimensional array of strings,
  * Each string is one of the arguments that was passed to the program.
  * Return: always (0).
  */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
