#include "shell.h"

void* myrealloc(void* ptr, size_t old_size, size_t new_size)
{

	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);

}

/**
 * rmcomment - removes comments
 * @s: string to adjust
 */
void rmcomment(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == '#' && (!i || s[i - 1] == ' '))
		{
			s[i] = '\0';
			break;
		}
}

