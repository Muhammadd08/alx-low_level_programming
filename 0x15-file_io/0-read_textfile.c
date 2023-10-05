#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file,
 * and prints it to the POSIX standard output.
 * @filename: textfile.
 * @letters: the number of letters it should read and print.
 * Return:  the actual number of letters it could read and print.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	r = read(fd, buff, letters);
	if (r < 0)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	if (w < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (w);
}
