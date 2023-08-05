#include "shell.h"
/**
*_realloc - relocates memory
*Return: a pointer to new location
*@ptr: pointer
*@old_size: old size
*@new_size: new size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t i;
	void* newptr;
	char *oldd, *newd;

	if (!ptr)
	{
		return malloc(new_size);
	}
	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}
	if (new_size <= old_size)
	{
		return ptr;
	}
	newptr = malloc(new_size);

	if (!newptr)
	{
		return NULL;
	}
	oldd = ptr;
	newd = newptr;
	for (i = 0; i < old_size; i++)
	{
		newd[i] = oldd[i];
	}
	free(ptr);
	return newptr;
}



void *__realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
    void *new_ptr;
    char *old_ptr = NULL, *new_char_ptr = NULL;

    if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL) {
        new_ptr = malloc(new_size);
        return new_ptr;
    }

    if (old_size == new_size) {
        return ptr;
    }

    new_ptr = malloc(new_size);

     old_ptr = (char*) ptr;
     new_char_ptr = (char*) new_ptr;
    for ( i = 0; i < old_size && i < new_size; i++) {
        new_char_ptr[i] = old_ptr[i];
    }

    free(ptr);

    return new_ptr;
}

