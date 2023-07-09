#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in hash table.
 * @ht: A pointer to hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copied;
	unsigned long int index, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copied = strdup(value);
	if (copied == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (n = index; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = copied;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copied);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copied;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
