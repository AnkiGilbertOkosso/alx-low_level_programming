#include "main.h"

/**
 * _puts - Prints a string to the standard output (stdout).
 * @s: The string to be printed.
 *
 * Return: None.
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
