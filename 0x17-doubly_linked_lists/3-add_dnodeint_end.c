#include "lists.h"

/**
 * add_dnodeint_end - adds a real node at end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the real element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *r;
	dlistint_t *h;

	r = malloc(sizeof(dlistint_t));
	if (r == NULL)
		return (NULL);

	r->n = n;
	r->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = r;
	}
	else
	{
		*head = r;
	}

	r->prev = h;

	return (r);
}
