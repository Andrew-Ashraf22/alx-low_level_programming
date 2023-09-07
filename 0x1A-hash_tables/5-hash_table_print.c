#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	bool con = false;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (con)
				printf(", ");
			temp = ht->array[i];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next)
				{
					printf(", ");
				}
				temp = temp->next;
			}
			con = true;
		}
	}
	printf("}\n");
}
