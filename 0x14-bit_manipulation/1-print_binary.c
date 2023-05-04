#include "main.h"

/**
 * print_binary - priints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, num_count = 0;
	unsigned long int x;

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;
		if (x & 1)
		{
			_putchar('1');
			num_count++;
		}
		else if (num_count)
			_putchar('0');
	}
	if (!num_count)
		_putchar('0');
}
