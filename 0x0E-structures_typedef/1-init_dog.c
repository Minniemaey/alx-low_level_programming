#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes type struct dog variable.
 * struct dog - new structure.
 * @d: pointer to struct dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
