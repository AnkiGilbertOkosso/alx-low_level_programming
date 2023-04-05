#include "lists.h"
/**
 * print_listint_safe - prints a linked list with a loop safely
 * @head: pointer to the first node of the linked list
 *
 * Return: new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *next_n = NULL;
	size_t count = 0;
	size_t new;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		next_n = head;
		new = 0;
		while (new < count)
		{
			if (temp == next_n)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			next_n = next_n->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
