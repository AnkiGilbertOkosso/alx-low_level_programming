#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nd, *tmp;
	unsigned long int n;

	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			nd = ht->array[n];
			while (nd != NULL)
			{
				tmp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
