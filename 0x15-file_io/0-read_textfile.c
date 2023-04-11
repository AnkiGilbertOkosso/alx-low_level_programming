#include "main.h"

/**
 * read_textfile - Read the text file and prints it to the standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of letters it coukd read and print or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, x, y;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	x = read(fd, buff, letters);
	if (x == -1)
	{
		free(buff);
		return (0);
	}

	y = write(STDOUT_FILENO, buff, x);
	if (y == -1 || y != x)
	{
		return (0);
	}

	free(buff);
	close(fd);
	return (y);
}
