#include "hash_tables.h"

/**
 * hash_table_get - get the value of a key
 * @ht: the hash table
 * @key: The key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			break;
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	return (temp->value);
}
