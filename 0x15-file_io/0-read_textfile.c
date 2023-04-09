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
	ssize_t fl;
	ssize_t x;
	ssize_t y;

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	y = read(fl, buff, letters);
	x = write(STDOUT_FILENO, buff, y);

	free(buff);
	close(fl);
	return (x);
}
