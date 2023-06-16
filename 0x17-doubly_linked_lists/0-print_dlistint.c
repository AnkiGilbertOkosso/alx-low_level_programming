#include "lists.h"

/**
 * print_dlistint - prints all elements of a
 * dlistint_t list
 *
 * @h: head of a list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int s;

	s = 0;

	if (h == NULL)
		return (s);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
