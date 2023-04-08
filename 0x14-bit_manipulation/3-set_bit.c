#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer number of the bit
 * @index: index of the bit to set to 1
 *
 * Return: 1 if successful or -2 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
