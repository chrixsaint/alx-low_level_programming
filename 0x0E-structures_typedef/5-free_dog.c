#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t struct
 * @d: Pointer to the dog_t struct to be freed
 *
 * This function takes a pointer to a dog_t struct, checks if
 * the pointer is not NULL, and if it's not, frees the memory
 * allocated for the 'name' and 'owner' fields, as well as the struct
 * itself. This function does not return any value.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
