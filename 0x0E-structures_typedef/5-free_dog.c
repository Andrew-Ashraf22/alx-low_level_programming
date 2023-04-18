#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - free memory of the dog struct
  *@d: pointer to struct
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
