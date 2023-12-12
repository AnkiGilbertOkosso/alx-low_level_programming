#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using Linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
