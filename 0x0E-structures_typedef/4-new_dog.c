#include <stdlib.h>
#include <dog.h>

/**
 * *new_dog - function that creates a new dog.
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: pointer to new dog.
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
	for (i = 0; i <= len_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
