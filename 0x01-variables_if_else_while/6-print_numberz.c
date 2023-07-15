#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -  Entry Point
*
* description:  a program that prints all single digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
