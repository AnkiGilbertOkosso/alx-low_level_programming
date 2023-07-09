#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table.
 * @ht: A pointer to hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int n;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (flag == 1)
				printf(", ");

			nd = ht->array[n];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
