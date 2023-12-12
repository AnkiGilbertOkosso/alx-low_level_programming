#include "search_algos.h"

/**
 * rec_search - searches for a value in an array using binary
 * search recursively
 * @array: input array
 * @left: left boundary of the subarray
 * @right: right boundary of the subarray
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int rec_search(int *array, size_t left, size_t right, int value)
{
	size_t half, index;

	if (left <= right)
	{
		half = left + (right - left) / 2;

		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		if (array[half] == value)
		{
			if (half > 0)
				return (rec_search(array, left, half - 1, value));
			return (half);
		}

		if (array[half] < value)
			return (rec_search(array, half + 1, right, value));

		return (rec_search(array, left, half - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted
 * array using advanced binary search
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (rec_search(array, 0, size - 1, value));
}
