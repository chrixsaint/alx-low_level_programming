#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: The dog to print
 *
 * Description: This function prints a struct dog.
 * if an element of d is NULL, it prints (nil) instead of this element.
 * if d is NuLL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
