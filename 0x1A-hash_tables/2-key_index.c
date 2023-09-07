#include "hash_tables.h"
/**
 * key_index - get the key of given index
 * @key: The key
 * @size: hashtable array size
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
