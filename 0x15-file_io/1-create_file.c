#include "main.h"

/**
 * create_file - creates a file.
 * @filename:  name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: Returns: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, i);
	if (w < 0)
		return (-1);
	close(fd);
	return (1);
}

