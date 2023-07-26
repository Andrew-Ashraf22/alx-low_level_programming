#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
        char *oldd, *newd = NULL;

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
        return (newptr);
}
