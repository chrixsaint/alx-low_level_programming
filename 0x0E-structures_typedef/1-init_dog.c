#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The dog to initialize
 * @name: The name to set
 * @age: The age to set
 * @owner: the owner to set
 *
 * Description: This function initializes a variable of type struct dog
 * with the provided name, age, and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
