#include "main.h"

/**
 * flip_bits - flip bits to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num_count = 0;
	unsigned long int x, y = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
			num_count++;
	}
	return (num_count);
}
