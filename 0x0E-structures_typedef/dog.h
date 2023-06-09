#ifndef DOG_H
#define DOG_H
/**
  *struct dog - dog information
  *@name: name
  *@age: age
  *@owner: the owner
  */
	struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  *dog - typdef for the dog struct
  */
	typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *cpy(char *dest, char *src);
#endif
