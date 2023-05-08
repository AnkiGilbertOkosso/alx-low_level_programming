#include "main.h"

/**
 * main - a function that copies a file to another
 * @argc: the number of arguments
 * @argv: the vector argument
 * Return: always successfull
 */
int main(int argc, char *argv[])
{
	int in, out, read_buffer, in_close, out_close;
	char buffer[1024];

	if (argc > 3 || argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	in = open(argv[1], O_RDONLY);
	if (in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", arg[1]);
		exit(98);
	}
	out = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((read_buffer = read(in, buffer, 1024)) > 0)
	{
		if (out == -1 || (write(out, buffer, read_buffer) == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_buffer < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	in_close = close(in);
	if (in_close < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", in), exit(100);
	out_close = close(out);
	if (out_close < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", out), exit(100);
	return (0);
}
