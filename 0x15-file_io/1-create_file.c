#include "main.h"

/**
 * create_file - creates a file.
 * @filename:  name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: Returns: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd_c, fd_o, w;

	if (filename == NULL)
		return (-1);
	fd_c = creat(filename, 0600);
	if (fd_c < 0)
		return (-1);
	if (text_content != NULL)
	{
		fd_o = open(filename, O_WRONLY);
		if (fd_o < 0)
			return (-1);
		w = write(fd_o, text_content, sizeof(text_content));
		if (w < 0)
		{
			close(fd_o);
			return (-1);
		}
		close(fd_o);
	}
	return (1);
}

