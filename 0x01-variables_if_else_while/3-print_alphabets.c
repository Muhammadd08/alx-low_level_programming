#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -  a program that prints the alphabet in lowercase and uppercase
*
* description:  a program that prints the alphabet in lowercase and uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
