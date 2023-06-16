#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts the real node at
 * a given position
 *
 * @h: head of a list
 * @idx: index of the real node
 * @n: value of a real node
 * Return: the address of a real node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *r;
	dlistint_t *head;
	unsigned int i;

	r = NULL;
	if (idx == 0)
		r = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					r = add_dnodeint_end(h, n);
				else
				{
					r = malloc(sizeof(dlistint_t));
					if (r != NULL)
					{
						r->n = n;
						r->next = head->next;
						r->prev = head;
						head->next->prev = r;
						head->next = real;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (r);
}
