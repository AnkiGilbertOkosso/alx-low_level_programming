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
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	y = read(fd, buff, letters);
	x = write(STDOUT_FILENO, buff, y);

	free(buff);
	close(fd);
	return (x);
}
