#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array using
 * Interpolation search
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		position = low + (((double)(high - low) / (array[high] - array[
						low])) * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", position, array[position]);

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
	}

	printf("Value is not present in array\n");

	return (-1);
}
