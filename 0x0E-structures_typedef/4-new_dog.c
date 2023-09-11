#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This function creates a new dog with the provided name,
 * age, and owner. It stores a copy of name and owner. If the function
 * fails, it returns NULL.
 *
 * Return: A pointer to the new dog, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));

	if (!newDog)
	{
		return (NULL);
	}
	newDog->name = strdup(name);
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	newDog->age = age;
	newDog->age = age;
	newDog->owner = strdup(owner);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	return (newDog);
}
