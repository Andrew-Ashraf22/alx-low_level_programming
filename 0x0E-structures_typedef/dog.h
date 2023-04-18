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
#endif
