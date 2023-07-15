#include <stdio.h>

/**
* main -  Entry Point
*
* description: a program that prints all single-digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char i;
	
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
                        putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
