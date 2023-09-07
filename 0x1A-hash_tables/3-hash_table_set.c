#include "hash_tables.h"

/**
 * hash_table_set - set an element
 * @ht: the hash table
 * @key: The key
 * @value: The value
 * Return: 1 if succ, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy;
	hash_node_t *node;
	unsigned long int idx, i;

	if (*key == '\0' || key == NULL)
		return (0);

	if (ht == NULL || value == NULL)
		return (0);

	copy = strdup(value);
	idx = key_index((const unsigned char *)key, ht->size);

	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(copy);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(copy);
		free(node);
		return (0);
	}
	node->value = copy;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
