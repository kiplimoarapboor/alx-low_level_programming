#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog- creates a new dog
 *
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;


	if (name == && owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(strlen(name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(strlen(owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strcpy(new_dog->name, name);
	new_dog->owner = strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
