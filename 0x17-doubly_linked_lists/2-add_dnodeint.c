#include "lists.h"

/**
 * add_dnodeint - adds a real node at beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the real element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *r;
	dlistint_t *h;

	r = malloc(sizeof(dlistint_t));
	if (r == NULL)
		return (NULL);
	r->n = n;
	r->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	r->next = h;

	if (h != NULL)
		h->prev = r;

	*head = r;

	return (r);
}
