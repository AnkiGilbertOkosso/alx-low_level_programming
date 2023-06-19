#include "main.h"

/**
 * _strspn - Computes the length of the maximum initial segment
 *           of a string consisting only of bytes from a given set.
 * @s: The string.
 * @accept: The set of bytes to be searched for.
 *
 * Return: The length of the maximum initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}

			accept++;
		}

		if (found == 0)
			break;

		s++;
	}
	return (count);
}
