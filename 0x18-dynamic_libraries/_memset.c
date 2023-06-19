#include "main.h"

/**
 * _memset - Fills the first n bytes of a memory area with a constant byte.
 * @s: The memory area to be filled.
 * @b: The constant byte.
 * @n: The number of bytes to be filled.
 *
 * Return: The pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (start);
}
