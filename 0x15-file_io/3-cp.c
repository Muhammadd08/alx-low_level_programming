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
	int fd_r, fd_w, count_r = 1024, count_w, c1, c2;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (count_r == 1024)
	{
		count_r = read(fd_r, buff, 1024);
		if (count_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		count_w = write(fd_w, buff, count_r);
		if (count_w < count_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}
	c1 = close(fd_r);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r), exit(100);
	c2 = close(fd_w);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w), exit(100);
	return (0);
}

