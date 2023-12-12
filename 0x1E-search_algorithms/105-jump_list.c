#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a singly linked list using Jump search
 * @list: input list
 * @size: size of the list
 * @value: value to search for
 *
 * Return: pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, index;
	listint_t *prev, *current;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	index = 0;
	current = list;

	while (current && current->n < value)
	{
		prev = current;
		index += step;
		while (current->next && current->index < index)
			current = current->next;

		printf("Value checked at index [%d] =
				[%d]\n", (int)current->index, current->n);
	}

	printf("Value found between indexes [%d] and
			[%d]\n", (int)prev->index, (int)current->index);

	for (; prev && prev->index <= current->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
