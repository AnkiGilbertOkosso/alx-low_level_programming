#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointing to the bit
 * @index: index starting from 0
 *
 * Return: 1 if successful or -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
