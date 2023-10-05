#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments passed to function.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd_r, fd_w, count_r = 1024, count_w;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_w == -1)
	{
		dprintf(2, "Error: Can't write to1 %s\n", argv[2]);
		exit(99);
	}
	while (count_r == 1024)
	{
		count_r = read(fd_r, buff, 1024);
		if (count_r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		count_w = write(fd_w, buff, count_r);
		if (count_w == -1)
		{
			dprintf(2, "Error: Can't write to2 %s\n", argv[2]);
			exit(99);
		}

	}
	return (0);
}

