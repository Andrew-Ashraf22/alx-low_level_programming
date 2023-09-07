#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	long unsigned int i = 0;
	hash_table_t *newT;

	newT = malloc(sizeof(hash_table_t));
	if (newT == NULL)
	{
		return (NULL);
	}
	newT->array = malloc(sizeof(hash_node_t *) * size);
	if (newT->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		newT->array[i] = NULL;
	newT->size = size;
	return (newT);
}
