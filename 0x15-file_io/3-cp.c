#include "main.h"

/**
 * main - function that copies a file to another
 * @argc: the number of args
 * @argv: the args
 * Return: Always successful
 */
int main(int argc, char *argv[])
{
	int in_fd, out_fd, b_read, close_in, close_out;
	char buffer[1024];

	if (argc > 3 || argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	in_fd = open(argv[1], O_RDONLY);
	if (in_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	out_fd = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((b_read = read(in_fd, buffer, 1024)) > 0)
	{
		if (out_fd == -1 || (write(out_fd, buffer, b_read) != b_read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (b_read < 0)
	{
		dprintf(STDERR_FILENO, "Erro: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_in = close(in_fd);
	if (close_in < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", in_fd), exit(100);

	close_out = close(out_fd);
	if (close_out < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", out_fd), exit(100);
	return (0);
}
