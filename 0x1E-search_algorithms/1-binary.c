#include "search_algos.h"

/**
 * recursive_search - searches for a value in a
 * sorted array using binary search
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t i;
	size_t h = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (h && size % 2 == 0)
		h--;

	if (value == array[h])
		return ((int)h);

	if (value < array[h])
		return (recursive_search(array, h, value));

	h++;

	return (recursive_search(array + h, size - h, value) + h);
}

/**
 * binary_search - searches for a value in a
 * sorted array using binary search
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
