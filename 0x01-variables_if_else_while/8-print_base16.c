#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -  Entry Point
*
* description: a program that prints all the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char i;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
