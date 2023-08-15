#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - function that creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: Pointer on success.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, len_name, len_owner;
	dog_t *new_dog;

	len_name = 0;
	while (name[len_name] != '\0')
		len_name++;
	len_owner = 0;
	while (owner[len_owner] != '\0')
		len_owner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	for (a = 0; a <= len_name; a++)
		new_dog->name[a] = name[a];
	for (a = 0; a <= len_owner; a++)
		new_dog->owner[a] = owner[a];
	return (new_dog);
}
