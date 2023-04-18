#include <stdlib.h>
#include "dog.h"
/**
  *cpy - copy a string
  *@dest: destination
  *@src: the source
  *Return: pointer to dest
  */
char *cpy(char *dest, char *src)
{
	int j = 0, k;

	while (src[j] != '\0')
		j++;

	for (k = 0; k < j; k++)
		dest[k] = src[k];

	dest[k] = '\0';
	return (dest);
}
/**
  *new_dog - create new dog
  *@name: the name
  *@age: age
  *@owner: the owner
  *Return: NULL if the function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = 0, len2 = 0;

	dog_t *dog;

	dog = NULL;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	cpy(dog->name, name);
	cpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
