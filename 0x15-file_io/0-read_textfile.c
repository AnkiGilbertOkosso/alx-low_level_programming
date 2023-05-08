#include "main.h"

/**
 * read_textfile - Read the text file and prints it to the standard output
 * @filename: the text file to be read
 * @letters: the number of letters to be read
 * Return: the actual number of letters it can read and print or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int i, j, fd;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	i = read(fd, buffer, letters);
	if (i == -1)
	{
		free(buffer);
		return (0);
	}
	j = write(STDOUT_FILENO, buffer, i);
	if (j == -1 || j != i)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (j);
}
