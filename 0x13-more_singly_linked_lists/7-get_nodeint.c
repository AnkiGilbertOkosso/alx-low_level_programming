#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a particular index in a list
 * @head: first node in the linked list
 * @index: index to the node to be return
 *
 * Return: pointer to the node we are looking for or NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
