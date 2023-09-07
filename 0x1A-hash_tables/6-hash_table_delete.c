#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp2;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				temp2 = temp->next;
				free(temp->value);
				free(temp->key);
				free(temp);
				temp = temp2;
			}
		}
	}
	free(ht->array);
	free(ht);
}
