#include "lists.h"

/**
 * get_dnodeint_at_index - returns a
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	n = 0;

	while (head != NULL)
	{
		if (n == index)
			break;
		head = head->next;
		n++;
	}
	return (head);
}
