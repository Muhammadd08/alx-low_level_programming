#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry Point
*
* description: a program that prints the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
