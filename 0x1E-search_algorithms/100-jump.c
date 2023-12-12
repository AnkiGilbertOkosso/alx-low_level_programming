#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array using Jump search
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int step, previous, index;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	index = previous = 0;

	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		previous = index;
		index += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", previous, index);

	for (; previous <= index && previous < (int)size; previous++)
	{
		printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
		if (array[previous] == value)
			return (previous);
	}

	return (-1);
}
