#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: text content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, fd;

	j = 0;

	if (filename == NULL)
		return (-1);

	fd = open(flename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;

		i = write(fd, text_content, j);
		if (i == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
