#include "main.h"

/**
 * binary_to_uint - converst a binary number to an unsigned integer
 * @b: pointing to a string of 0 and 1 char
 *
 * Return: the converted number or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x;

	x = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		x <<= 1;
		if (b[i] == '1')
			x += 1;
	}
	return (x);
}
